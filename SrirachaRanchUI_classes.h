// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// Size: 0x118 (Inherited: 0x108)
struct UFortMobileActionButtonBehavior_ToggleRadio : UFortMobileActionButtonBehavior {
	struct UPaperSprite* ToggleRadioOffSprite; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void HandleRadioStopped(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped // (Final|Native|Private) // @ game+0x3e31e1c
	void HandleRadioPlaying(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying // (Final|Native|Private) // @ game+0x3e31ce8
};

// Class SrirachaRanchUI.RadioPlayerWidgetBase
// Size: 0x318 (Inherited: 0x2c8)
struct URadioPlayerWidgetBase : UFortHUDElementWidget {
	char pad_2C8[0x40]; // 0x2c8(0x40)
	struct FFortPrioritizedWidgetData PriorityData; // 0x308(0x02)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct UStreamingRadioPlayerComponent* LastValidComp; // 0x310(0x08)

	void SetControllable(bool bCanControl); // Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSourcePlaying(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSourceFinished(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnShouldShowDueToEntrance(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRadioStopped(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation LastSource); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLoadingNewSource(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFailedToOpenSource(struct UStreamingRadioPlayerComponent* Radio, struct FAthenaRadioStation Source); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDisconnectFromComp(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void NativeExitedVehicle(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle // (Final|Native|Protected) // @ game+0x3e31f5c
	void NativeEnteredVehicle(); // Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle // (Final|Native|Protected) // @ game+0x3e31f48
};

