// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankX.h"


// Sets default values
ATankX::ATankX()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATankX::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATankX::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ATankX::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

