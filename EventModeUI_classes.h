// Class EventModeUI.FocusButton
// Size: 0x3e0 (Inherited: 0x3d0)
struct UFocusButton : UBacchusActionButton {
	struct UPaperSprite* StartFocusingSprite; // 0x3d0(0x08)
	struct UPaperSprite* StopFocusingSprite; // 0x3d8(0x08)

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Function EventModeUI.FocusButton.HandleEventModeFocusingChanged // (Final|Native|Private) // @ game+0x3d428d8
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged // (Final|Native|Private) // @ game+0x3d427ac
};

// Class EventModeUI.FortEventModeEmotesWidget
// Size: 0x378 (Inherited: 0x2c8)
struct UFortEventModeEmotesWidget : UFortHUDElementWidget {
	struct TSoftObjectPtr<struct UFortMontageItemDefinitionBase> Emote1; // 0x2c8(0x28)
	struct TSoftObjectPtr<struct UFortMontageItemDefinitionBase> Emote2; // 0x2f0(0x28)
	struct TSoftObjectPtr<struct UFortMontageItemDefinitionBase> Emote3; // 0x318(0x28)
	struct TArray<struct TSoftObjectPtr<struct UFortMontageItemDefinitionBase>> RandomEmotes; // 0x340(0x10)
	char pad_350[0x8]; // 0x350(0x08)
	struct URichTextBlock* Text_Emote1; // 0x358(0x08)
	struct URichTextBlock* Text_Emote2; // 0x360(0x08)
	struct URichTextBlock* Text_Emote3; // 0x368(0x08)
	struct URichTextBlock* Text_EmoteRandom; // 0x370(0x08)

	void OnFocusStateChanged(bool bIsFocusing); // Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFocusAvailableChanged(bool bIsFocusAvailable); // Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class EventModeUI.FortMobileActionButtonBehavior_Focus
// Size: 0x110 (Inherited: 0x108)
struct UFortMobileActionButtonBehavior_Focus : UFortMobileActionButtonBehavior {
	struct UPaperSprite* StopFocusingSprite; // 0x108(0x08)

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged // (Final|Native|Private) // @ game+0x3d42974
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged // (Final|Native|Private) // @ game+0x3d42840
};

