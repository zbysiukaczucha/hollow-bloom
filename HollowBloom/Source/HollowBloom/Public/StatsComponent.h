#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLevelUp);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UStatsComponent();

	UPROPERTY(BlueprintAssignable)
	FOnLevelUp OnLevelUp;

protected:
	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float CurrentHealth; // Current health of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth; // Maximum health of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float CurrentStamina; // Current stamina of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float MaxStamina; // Maximum stamina of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	int32 CurrentXP; // Current experience points of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	int32 MaxXP; // Experience points required to level up
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	int32 Level; // Current level of the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Vigor; // Stat for health and resistance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Endurance; // Stat for stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Fitness; // Stat for physical damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Mind; // Stat for magical damage

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	// Custom functionality for the component can be added here
	UFUNCTION(BlueprintCallable)
	UPARAM(DisplayName = "IsDead")bool DecreaseHealth(float Amount);
	UFUNCTION(BlueprintCallable)
	void IncreaseHealth(float Amount);
	UFUNCTION(BlueprintCallable)
	UPARAM(DisplayName = "HasEnoughStamina")bool DecreaseStamina(float Amount);
	UFUNCTION(BlueprintCallable)
	void IncreaseStamina(float Amount);
	UFUNCTION(BlueprintCallable)
	void IncreaseXP(int32 Amount);
	UFUNCTION(BlueprintCallable)
	void LevelUp(int32 newVigor, int32 newEndurance, int32 newFitness, int32 newMind);	
};