

#include "Omega_Four.h"
#include "Omega_FourGameMode.h"
#include "Omega_FourPlayerController.h"

AOmega_FourGameMode::AOmega_FourGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = AOmega_FourPlayerController::StaticClass();
}


