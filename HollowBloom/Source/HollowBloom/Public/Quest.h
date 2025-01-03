// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Quest.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct HOLLOWBLOOM_API FQuest: public FTableRowBase
{
 GENERATED_BODY()

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 FName QuestID;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 FString QuestName;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 FString QuestDescription;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 int32 XP = 0;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 bool bIsCompleted = false;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 FName CompletedDialogueRow;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
 UDataTable* DialogueTable = nullptr;
};
