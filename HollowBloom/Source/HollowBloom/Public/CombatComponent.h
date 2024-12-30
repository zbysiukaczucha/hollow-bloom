#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputAction.h"
#include "HollowBloom/HollowBloomCharacter.h"
#include "CombatComponent.generated.h"

// Custom enum for Movement Direction
UENUM(BlueprintType)
enum class EMovementDirection : uint8
{
	Forward UMETA(DisplayName = "Forward"),
	Backward UMETA(DisplayName = "Backward"),
	Left UMETA(DisplayName = "Left"),
	Right UMETA(DisplayName = "Right")
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCombatComponent();

	// Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	ACharacter* TargetLockActor; // Reference to the target actor being locked on

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	ACharacter* PlayerBP; // Reference to the BP Third Person Character

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<AActor> TargetLockWidgetClass; // Reference to the Target Lock Widget Class

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	AActor* TargetLockWidget; // Reference to the Target Lock Widget Actor

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	bool bIsAttacking; // Is the character currently attacking?

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	bool bIsComboAttacking; // Is the character performing a combo attack?

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	bool bIsCasting; // Is the character currently casting a spell?

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float SwordDamage; // Base damage dealt by the sword

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float SpellDamage; // Base damage dealt by the spell

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsDodging; // Is the character dodging?

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	EMovementDirection MovementDirection; // Current movement direction

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* TargetLock;
private:
	void HandleTargetLockAction();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	// Custom functionality for the component can be added here
};