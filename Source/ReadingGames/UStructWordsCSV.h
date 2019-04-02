// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "UStructWordsCSV.generated.h"

USTRUCT(BlueprintType)
struct FUStructWordsCSV : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FUStructWordsCSV() : sWord("")
	{};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString sWord;
};