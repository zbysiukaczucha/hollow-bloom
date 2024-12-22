// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Quest.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct GNOMECUNNING_API FQuest
{
 GENERATED_BODY()

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 FString QuestName;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 FString QuestDescription;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 bool bIsCompleted;
};
