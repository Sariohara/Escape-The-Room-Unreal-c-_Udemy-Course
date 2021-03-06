// copyright © Michael Eaton 2017

#pragma once

#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPETHEROOM_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float Reach = 100.f;

	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	UInputComponent* InputComponent = nullptr;

	//Ray-cast and grab what is in reach
	void Grab();
	//Called when the grab is released
	void GrabReleased();

	//Find (Assumed) attached Physics handle component
	void FindPhysicsHandleComponent();

	//Setup (Assumed) attached Input component
	void SetupInputComponent();

	//return hit in first physics body in reach
	FHitResult GetFirstPhysicsBodyInReach() const;

	//returns current Start of reach line
	FVector GetReachLineStart()const;

	//returns current end of reach line
	FVector GetReachLineEnd() const;

};
