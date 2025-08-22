

#include "TargetPracticeCPPGameMode.h"
#include "TargetPracticeCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

ATargetPracticeCPPGameMode::ATargetPracticeCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> MainMenuWidgetClass(TEXT("/Game/UI/WBP_MainMenu"));
	if (MainMenuWidgetClass.Succeeded())
	{
		MainMenuClass = MainMenuWidgetClass.Class;
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> GameUIWidgetClass(TEXT("/Game/UI/WBP_GameUI"));
	if (GameUIWidgetClass.Succeeded())
	{
		GameUIClass = GameUIWidgetClass.Class;
	}

	// Game Over  widget class
	static ConstructorHelpers::FClassFinder<UUserWidget> GameOverWidgetClass(TEXT("/Game/UI/WBP_GameOver"));
	if (GameOverWidgetClass.Succeeded())
	{
		GameOverUIClass = GameOverWidgetClass.Class;
	}
}

void ATargetPracticeCPPGameMode::BeginPlay()
{
	Super::BeginPlay();

	// 
	ShowMainMenu();
}

void ATargetPracticeCPPGameMode::ShowMainMenu()
{
	if (CurrentWidget)
	{
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;
	}

	if (MainMenuClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), MainMenuClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ATargetPracticeCPPGameMode::StartGame()
{
	if (CurrentWidget)
	{
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;
	}

	if (GameUIClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), GameUIClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ATargetPracticeCPPGameMode::ShowGameOver()
{
	if (CurrentWidget)
	{
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;
	}

	if (GameOverUIClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), GameOverUIClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}
