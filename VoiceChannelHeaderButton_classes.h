// WidgetBlueprintGeneratedClass VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// Size: 0xcc0 (Inherited: 0xc40)
struct UVoiceChannelHeaderButton_C : UFortVoiceChannelHeaderButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UWidgetAnimation* OnExpansion; // 0xc48(0x08)
	struct UWidgetAnimation* JoinSlideOut; // 0xc50(0x08)
	struct UWidgetAnimation* ScaleUp; // 0xc58(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0xc60(0x08)
	struct UHorizontalBox* HBox_Join; // 0xc68(0x08)
	struct UCommonRichTextBlock* JoinText; // 0xc70(0x08)
	struct UImage* NotTransmitting; // 0xc78(0x08)
	struct UCommonRichTextBlock* OffText; // 0xc80(0x08)
	struct UWidgetSwitcher* OnOffSwitcher; // 0xc88(0x08)
	struct UCommonRichTextBlock* OnText; // 0xc90(0x08)
	struct UOverlay* Overlay_2; // 0xc98(0x08)
	struct UImage* SelectionBackplate; // 0xca0(0x08)
	struct UWidgetSwitcher* SimultaneousChannelSwitcher; // 0xca8(0x08)
	struct UWidgetSwitcher* Switch_Transmitting; // 0xcb0(0x08)
	struct UImage* Transmitting; // 0xcb8(0x08)

	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDisabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnEnabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExpansionChanged(bool bIsExpanded); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VoiceChannelHeaderButton(int32_t EntryPoint); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

