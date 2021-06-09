// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C
// Size: 0x4e8 (Inherited: 0x4a8)
struct UEventPlayerStatProfileSelector_C : UFortEventPlayerStatProfileSelector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* Intro; // 0x4b0(0x08)
	struct UIconTextButton_C* CloseMainPanel; // 0x4b8(0x08)
	struct UCommonBorder* CommonBorder_1; // 0x4c0(0x08)
	struct UImage* Image_Background; // 0x4c8(0x08)
	struct USafeZone* SafeZone_1; // 0x4d0(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x4d8(0x08)
	struct UCommonTextBlock* Text_WindowTitle; // 0x4e0(0x08)

	void Set Up Profile Selector Style(struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.Set Up Profile Selector Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventPlayerStatProfileSelector(int32_t EntryPoint); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.ExecuteUbergraph_EventPlayerStatProfileSelector // (Final|UbergraphFunction) // @ game+0xda7c34
};

