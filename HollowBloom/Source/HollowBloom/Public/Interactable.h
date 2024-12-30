#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

/**
 * @brief Interface for objects that can be interacted with
 *
 * This interface is marked as Blueprintable, allowing it to be implemented in Blueprint classes.
 */
UINTERFACE(Blueprintable)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * @brief Interface class defining methods for interactable objects
 *
 * This interface should be implemented by any class that represents
 * an object that can be interacted with in the game world.
 */
class HOLLOWBLOOM_API IInteractable
{
	GENERATED_BODY()

public:
	/**
	 * @brief Called when an actor interacts with this object
	 *
	 * This function is marked as BlueprintCallable and BlueprintNativeEvent,
	 * allowing it to be called from Blueprints and overridden in both C++ and Blueprints.
	 *
	 * @param Interactor The actor that is interacting with this object
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnInteract(AActor* Interactor);
};
