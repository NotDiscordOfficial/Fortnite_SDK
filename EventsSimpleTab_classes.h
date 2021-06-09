// WidgetBlueprintGeneratedClass EventsSimpleTab.EventsSimpleTab_C
// Size: 0xcf9 (Inherited: 0xc20)
struct UEventsSimpleTab_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Selected; // 0xc28(0x08)
	struct UWidgetAnimation* Hovered; // 0xc30(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc38(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget_White; // 0xc40(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0xc48(0x08)
	struct UImage* Image_ButtonTop; // 0xc50(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0xc58(0x08)
	bool ToUpper; // 0xc60(0x01)
	bool XL; // 0xc61(0x01)
	char pad_C62[0x6]; // 0xc62(0x06)
	struct FText ButtonNameText; // 0xc68(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0xc80(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0xcd0(0x10)
	struct FLinearColor DefaultTextColor; // 0xce0(0x10)
	struct FVector2D ButtonPadding; // 0xcf0(0x08)
	bool VisualSelectionState; // 0xcf8(0x01)

	void BP_OnHovered(); // Function EventsSimpleTab.EventsSimpleTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function EventsSimpleTab.EventsSimpleTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleTab.EventsSimpleTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleTab.EventsSimpleTab_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function EventsSimpleTab.EventsSimpleTab_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function EventsSimpleTab.EventsSimpleTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EventsSimpleTab.EventsSimpleTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventsSimpleTab(int32_t EntryPoint); // Function EventsSimpleTab.EventsSimpleTab_C.ExecuteUbergraph_EventsSimpleTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

