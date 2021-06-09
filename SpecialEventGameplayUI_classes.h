// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
// Size: 0x2f8 (Inherited: 0x2c8)
struct UFortGameplayCinematicHostWidget : UFortHUDElementWidget {
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct UCommonActivatablePanelLegacy* IntroPanelWidgetClass; // 0x2d0(0x08)
	struct UCommonActivatablePanelLegacy* OutroPanelWidgetClass; // 0x2d8(0x08)
	struct UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition; // 0x2e0(0x08)
	char pad_2E8[0x10]; // 0x2e8(0x10)

	void OnPanelDeactivated(struct UCommonActivatablePanelLegacy* DeactivatedPanel); // Function SpecialEventGameplayUI.FortGameplayCinematicHostWidget.OnPanelDeactivated // (Final|Native|Protected) // @ game+0x3e28db8
};

// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
// Size: 0x478 (Inherited: 0x458)
struct UFortGameplayIntroPanelWidget : UCommonActivatablePanelLegacy {
	char pad_458[0x20]; // 0x458(0x20)

	void OnWaitingForReadyForGameplay(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWaitingForPawn(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWaitingForMinTime(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartIntro(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnIntroFinished(); // Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x3e28d90
};

// Class SpecialEventGameplayUI.FortGameplayOutroPanelWidget
// Size: 0x468 (Inherited: 0x458)
struct UFortGameplayOutroPanelWidget : UCommonActivatablePanelLegacy {
	char pad_458[0x10]; // 0x458(0x10)

	void OnStartOutro(); // Function SpecialEventGameplayUI.FortGameplayOutroPanelWidget.OnStartOutro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOutroFinished(); // Function SpecialEventGameplayUI.FortGameplayOutroPanelWidget.OnOutroFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x3e28da4
};

