// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();
	
	//// Logging Example with intro to Pointer
	//FString Log = TEXT("Hello!");
	//FString* PtrLog = &Log;

	//Log.Len();		// Length of Log
	//PtrLog->Len();	// same

	//UE_LOG(LogTemp, Warning, TEXT("%s"), **PtrLog);	// dereferencing twice

	FString Name = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("This belongs to %s"), *Name);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

