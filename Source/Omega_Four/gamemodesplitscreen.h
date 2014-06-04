

#pragma once

#include <string>
#include "GameFramework/GameMode.h"
#include "gamemodesplitscreen.generated.h"

/**
 * 
 */
UCLASS()
class Agamemodesplitscreen : public AGameMode
{
	GENERATED_UCLASS_BODY()


	virtual void BeginPlay() OVERRIDE;

	AActor* FindActorByName(std::string text);
};
