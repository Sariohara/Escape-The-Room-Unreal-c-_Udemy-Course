// copyright © Michael Eaton 2017

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QutGametemp1.generated.h"

UCLASS()
class ESCAPETHEROOM_API AQutGametemp1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AQutGametemp1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

};
