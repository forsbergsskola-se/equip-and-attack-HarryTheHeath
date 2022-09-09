// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "GP_PathFollowingComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VERYFIRSTPROJECT_API UGP_PathFollowingComponent : public UPathFollowingComponent{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGP_PathFollowingComponent();


	/**
	If true generate debug spheres for each path point
	*/
	UPROPERTY(EditDefaultsOnly, Category= "Debug 🐞")
	bool DrawDebugPathPoints;

	/**
	Set the colour of generated debug path points
	*/
	UPROPERTY(EditDefaultsOnly, Category= "Debug 🐞")
	FLinearColor DebugColour;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	                           

	/**
	* @param Color Colour of sphere
	* @param Time Time taken until spheres are displayed
	*/
	UFUNCTION(BlueprintCallable)
	void DrawPathPoints(FLinearColor Color, float Time);
};
