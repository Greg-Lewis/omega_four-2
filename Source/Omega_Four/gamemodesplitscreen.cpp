

#include "Omega_Four.h"
#include "gamemodesplitscreen.h"



Agamemodesplitscreen::Agamemodesplitscreen(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}
void Agamemodesplitscreen::BeginPlay(){
	Super::BeginPlay();
	AActor *cameraActor =  FindActorByName("gameCamera2");
	AActor *cameraActor1 = FindActorByName("gameCamera1");
	AActor *cameraActor2 = FindActorByName("gameCamera3");
	AActor *cameraActor3 = FindActorByName("gameCamera4");
	AActor *cameraActor4 = FindActorByName("gameCamera5");
	AActor *cameraActor5 = FindActorByName("gameCamera6");
	AActor *cameraActor6 = FindActorByName("gameCamera7");

	
	if(GEngine){
		FString err;
		ULocalPlayer *player = GEngine->GameViewport->CreatePlayer(0, err, false);
		ULocalPlayer *player1 = GEngine->GameViewport->CreatePlayer(1, err, false);
		ULocalPlayer *player2 = GEngine->GameViewport->CreatePlayer(2, err, false);
		ULocalPlayer *player3 = GEngine->GameViewport->CreatePlayer(3, err, false);
		ULocalPlayer *player4 = GEngine->GameViewport->CreatePlayer(4, err, false);
		ULocalPlayer *player5 = GEngine->GameViewport->CreatePlayer(5, err, false);
		ULocalPlayer *player6 = GEngine->GameViewport->CreatePlayer(6, err, false);

		APlayerController *controller = player->PlayerController;
		APlayerController *controller1 = player1->PlayerController;
		APlayerController *controller2 = player2->PlayerController;
		APlayerController *controller3 = player3->PlayerController;
		APlayerController *controller4 = player4->PlayerController;
		APlayerController *controller5 = player5->PlayerController;
		APlayerController *controller6 = player6->PlayerController;

		if (controller){
			if (controller->GetPawn()){

				
				FTransform tx;
					//= m_playerStarts[playerIdx];
				FVector pos = tx.GetTranslation();
				tx.SetTranslation(pos + FVector(0, 0, 300.0f));
				controller->GetPawn()->SetActorTransform(tx);
				
			}
			controller->SetViewTarget(cameraActor);

			APlayerState *playerState = (APlayerState*)controller->PlayerState;
			//playerState->PlayerIndex = player->ControllerId;

		}

		if (controller1){
			if (controller1->GetPawn()){


				FTransform tx;
				//= m_playerStarts[playerIdx];
				FVector pos = tx.GetTranslation();
				tx.SetTranslation(pos + FVector(0, 0, 350.0f));
				controller1->GetPawn()->SetActorTransform(tx);

			}
			controller1->SetViewTarget(cameraActor1);

			APlayerState *playerState = (APlayerState*)controller1->PlayerState;
			//playerState->PlayerIndex = player->ControllerId;

		}
	}

}

AActor* Agamemodesplitscreen::FindActorByName(std::string text)
{
	FString temp = UTF8_TO_TCHAR(text.c_str());
	TActorIterator<AActor>actItr(GetWorld());
	for (; actItr; ++actItr)
	{
		if (actItr->GetName().Equals(temp))
			return *actItr;
	}
	return NULL;
	

}


