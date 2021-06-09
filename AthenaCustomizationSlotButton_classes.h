// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// Size: 0xe24 (Inherited: 0xce8)
struct UAthenaCustomizationSlotButton_C : UAthenaCustomizationSlotSelectorButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xce8(0x08)
	struct UWidgetAnimation* WarningPulse; // 0xcf0(0x08)
	struct UWidgetAnimation* OnBackedOutFromSelection; // 0xcf8(0x08)
	struct UWidgetAnimation* OnConfirmedSelection; // 0xd00(0x08)
	struct UWidgetAnimation* OnSelected; // 0xd08(0x08)
	struct UWidgetAnimation* OnHover; // 0xd10(0x08)
	struct UImage* ConfirmSelectionFlash; // 0xd18(0x08)
	struct UImage* ConfirmSelectionShine; // 0xd20(0x08)
	struct UImage* ExclusiveFill; // 0xd28(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0xd30(0x08)
	struct UFortLazyImage* Image_Empty; // 0xd38(0x08)
	struct UImage* InactiveFilledSlot; // 0xd40(0x08)
	struct UCommonTextBlock* Text_Plus; // 0xd48(0x08)
	struct FText TooltipBody; // 0xd50(0x18)
	struct FText TooltipHeader; // 0xd68(0x18)
	bool ShowSubTypeIcon; // 0xd80(0x01)
	char pad_D81[0x7]; // 0xd81(0x07)
	struct FSlateBrush SubTypeIcon; // 0xd88(0x88)
	bool bSuppressTooltip; // 0xe10(0x01)
	char pad_E11[0x3]; // 0xe11(0x03)
	float TypeIconVerticalOffset; // 0xe14(0x04)
	struct UMaterialInstanceDynamic* ImageEmptyMID; // 0xe18(0x08)
	float WidthThreshold; // 0xe20(0x04)

	void HandleWidthChanged(float Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleWidthChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FString GetSlotDebugName(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.GetSlotDebugName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandleActiveStateChanged(bool CosmeticAvailable, bool Active); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleActiveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCustomizationSlotActiveStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCardImageAndWidthChanged(struct TSoftObjectPtr<struct UTexture2D> Image, float Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCardImageAndWidthChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32_t EntryPoint); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

