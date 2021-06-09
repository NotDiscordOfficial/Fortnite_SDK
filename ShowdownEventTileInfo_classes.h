// WidgetBlueprintGeneratedClass ShowdownEventTileInfo.ShowdownEventTileInfo_C
// Size: 0x7b8 (Inherited: 0x6b8)
struct UShowdownEventTileInfo_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetAnimation* FocusPin; // 0x6c0(0x08)
	struct UWidgetAnimation* HideSocketShadow_Past; // 0x6c8(0x08)
	struct UWidgetAnimation* HideSocketShadow; // 0x6d0(0x08)
	struct UWidgetAnimation* Focus; // 0x6d8(0x08)
	struct UWidgetAnimation* Focus_Ended; // 0x6e0(0x08)
	struct UWidgetAnimation* TransitionSize; // 0x6e8(0x08)
	struct UCommonBorder* CommonBorder_Date; // 0x6f0(0x08)
	struct UCommonBorder* CommonBorder_Score; // 0x6f8(0x08)
	struct UCommonTextBlock* CommonTextBlock_pts; // 0x700(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventPinState; // 0x708(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TimeFormat; // 0x710(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TimeFormatTitle; // 0x718(0x08)
	struct UVerticalBox* Content_Score; // 0x720(0x08)
	struct UCommonTextBlock* DateText; // 0x728(0x08)
	struct UImage* Image_Lock; // 0x730(0x08)
	struct UImage* Image_Socket; // 0x738(0x08)
	struct UScaleBox* ScaleBoxPin; // 0x740(0x08)
	struct UCommonTextBlock* ScoreValue; // 0x748(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x750(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_EventWindowUnlockState; // 0x758(0x08)
	struct UCommonTextBlock* TimeDescriptionText; // 0x760(0x08)
	struct UCommonTextBlock* TimeDescriptionTextRelative; // 0x768(0x08)
	struct FMulticastInlineDelegate SetEventState; // 0x770(0x10)
	bool isEnded; // 0x780(0x01)
	bool isPin; // 0x781(0x01)
	char pad_782[0x6]; // 0x782(0x06)
	struct FMulticastInlineDelegate SetDisplayInfo; // 0x788(0x10)
	struct UMaterialInstanceDynamic* TextFontMaterial; // 0x798(0x08)
	struct UMaterialInstanceDynamic* PointFontMaterial; // 0x7a0(0x08)
	struct FMulticastInlineDelegate MultiRoundSession; // 0x7a8(0x10)

	void RefreshDataBP(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventAnimFocus(bool In); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventStyleSocket(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventAnimHover(bool In); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownEventTileInfo(int32_t EntryPoint); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void MultiRoundSession__DelegateSignature(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.MultiRoundSession__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetDisplayInfo__DelegateSignature(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetDisplayInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetEventState__DelegateSignature(enum class EFortShowdownEventState EventState); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

