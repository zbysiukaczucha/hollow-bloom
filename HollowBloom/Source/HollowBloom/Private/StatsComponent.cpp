#include "StatsComponent.h"

#include "GameFramework/Character.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent(): CurrentHealth(100), MaxHealth(100), CurrentStamina(100), MaxStamina(100), CurrentXP(750), MaxXP(750),
                              Level(0),
                              Vigor(0),
                              Endurance(0), Fitness(0),
                              Mind(0)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.
	// You can turn these features off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Add custom logic for each frame here
}

bool UStatsComponent::DecreaseHealth(float Amount)
{
	CurrentHealth = CurrentHealth - Amount;
	bool bIsDead = CurrentHealth <= 0;
	return bIsDead;
}

void UStatsComponent::IncreaseHealth(float Amount)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + Amount, 0.0f, MaxHealth);
}

bool UStatsComponent::DecreaseStamina(float Amount)
{
	bool bHasEnoughStamina = (CurrentStamina - Amount >= 0);
	if (bHasEnoughStamina)
	{
		CurrentStamina = CurrentStamina - Amount;
	}
	return bHasEnoughStamina;
}

void UStatsComponent::IncreaseStamina(float Amount)
{
	CurrentStamina = FMath::Clamp(CurrentStamina + Amount, 0.0f, MaxStamina);
}

void UStatsComponent::IncreaseXP(int32 Amount)
{
	CurrentXP = CurrentXP + Amount;
	if (CurrentXP >= MaxXP)
	{
		OnLevelUp.Broadcast();
	}
}

void UStatsComponent::LevelUp(int32 newVigor, int32 newEndurance, int32 newFitness, int32 newMind)
{
	Level++;
	Vigor = newVigor;
	Endurance = newEndurance;
	Fitness = newFitness;
	Mind = newMind;
	CurrentXP = CurrentXP - MaxXP;
	MaxXP = MaxXP + 250;
	MaxHealth = Vigor * 20 + 100;
	CurrentHealth = MaxHealth;
	MaxStamina = Endurance * 20 + 100;
	CurrentStamina = MaxStamina;
}
