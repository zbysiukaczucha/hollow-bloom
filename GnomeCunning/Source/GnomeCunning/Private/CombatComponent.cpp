#include "CombatComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "PlayMontageCallbackProxy.h"
#include "InputMappingContext.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
	: TargetLockActor(nullptr),
	  PlayerBP(nullptr),
	  bIsAttacking(false),
	  bIsComboAttacking(false), bIsCasting(false),
	  SwordDamage(10),
	  bIsDodging(false),
	  MovementDirection(),
	  TargetLockWidgetClass(nullptr),
	  TargetLockWidget(nullptr),
	  TargetLock(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.
	// You can turn these features off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Load the Target Lock Widget class
	static ConstructorHelpers::FClassFinder<AActor>
		TargetLockWidgetFinder(TEXT("/Game/Blueprints/BP_TargetLockWidget"));
	if (TargetLockWidgetFinder.Succeeded())
	{
		TargetLockWidgetClass = TargetLockWidgetFinder.Class;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find TargetLockWidget Blueprint class!"));
	}
}

void UCombatComponent::BeginPlay()
{
    Super::BeginPlay();

    // Ensure the owner is valid
    PlayerBP = Cast<ACharacter>(GetOwner());
    if (!PlayerBP)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Owner is not valid!"));
        return;
    }

    APlayerController* PlayerController = Cast<APlayerController>(PlayerBP->GetInstigatorController());
    if (!PlayerController)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PlayerController is not valid!"));
        return;
    }

    // Add the Input Mapping Context
    UEnhancedInputLocalPlayerSubsystem* Subsystem =
        ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
    if (Subsystem)
    {
        // Ensure the mapping context path is correct
        UInputMappingContext* MappingContext = LoadObject<UInputMappingContext>(
            nullptr, TEXT("/Game/ThirdPerson/Input/IMC_Default.IMC_Default")); // Ensure correct asset path here
        if (MappingContext)
        {
            Subsystem->AddMappingContext(MappingContext, 1); // Priority 1
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Mapping Context Added"));
        }
        else
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to load Mapping Context!"));
        }
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Subsystem is not valid!"));
    }

    // Print to screen for debugging
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Combat Component Begin Play"));

    // Bind the Input Action
    UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController->InputComponent);
    if (EnhancedInputComponent && TargetLock)
    {
        EnhancedInputComponent->BindAction(TargetLock, ETriggerEvent::Started, this, &UCombatComponent::HandleTargetLockAction);
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Target Lock Action Bound"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed to bind Target Lock Action!"));
    }
}


void UCombatComponent::HandleTargetLockAction()
{
	// Get target lock actor is valid
	if (TargetLockActor)
	{
		// Clear the target lock actor
		TargetLockActor = nullptr;
		//Set orient rotation to movement
		PlayerBP->GetCharacterMovement()->bOrientRotationToMovement = true;
		PlayerBP->GetCharacterMovement()->bUseControllerDesiredRotation = false;
		TargetLockWidget->Destroy();
	}
	else
	{
		// Find the nearest enemy actor
		//Sphere trace for objects
		FHitResult OutHit;
		FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetTransformComponent()->GetComponentLocation();
		FRotator CameraRotation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetTransformComponent()->GetComponentRotation();
		FVector Start = CameraLocation + FVector(0, 0, 20.0f);
		FVector End = Start + (CameraRotation + FRotator(10.0f, 0, 0)).Vector() * 2000.0f;
		TArray<AActor*> IgnoredActors = {PlayerBP};
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesArray;
		ObjectTypesArray.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
		bool bHasHit = UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), Start, End, 150.f, ObjectTypesArray, false, IgnoredActors, EDrawDebugTrace::ForDuration, OutHit, true);
		if (bHasHit)
		{
			// Set the target lock actor
			TargetLockActor = Cast<ACharacter>(OutHit.GetActor());
			//Set orient rotation to target
			PlayerBP->GetCharacterMovement()->bOrientRotationToMovement = false;
			PlayerBP->GetCharacterMovement()->bUseControllerDesiredRotation = true;
			// Spawn target lock widget actor on the target actor
			if (TargetLockWidgetClass)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = GetOwner();  // Set the owner, if needed
				SpawnParams.Instigator = GetOwner()->GetInstigator();

				// Adjust the location and rotation as needed
				FVector SpawnLocation = GetOwner()->GetActorLocation();
				FRotator SpawnRotation = FRotator::ZeroRotator;

				TargetLockWidget = GetWorld()->SpawnActor<AActor>(TargetLockWidgetClass, SpawnLocation, SpawnRotation, SpawnParams);
				if (TargetLockWidget)
				{
					UE_LOG(LogTemp, Log, TEXT("Target Lock Widget Actor spawned successfully."));
					TargetLockWidget->AttachToActor(TargetLockActor, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to spawn Target Lock Widget Actor!"));
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("TargetLockWidgetClass is not valid! Ensure it's set in the blueprint or code."));
			}
		}
	}
	
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Add custom logic for each frame here
	if(TargetLockActor)
	{
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(PlayerBP->GetActorLocation(), TargetLockActor->GetActorLocation()) - FRotator(20, 0, 0);
		PlayerBP->GetController()->SetControlRotation(LookAtRotation);
	}
}