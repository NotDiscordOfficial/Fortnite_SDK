// WidgetBlueprintGeneratedClass VoiceChannelSettings.VoiceChannelSettings_C
// Size: 0x380 (Inherited: 0x308)
struct UVoiceChannelSettings_C : UFortVoiceSettingsDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* GearHover; // 0x310(0x08)
	struct UCommonActionWidget* ActionWidget_InputDisplay; // 0x318(0x08)
	struct UIconTextButton_C* Button_NextInputDevice; // 0x320(0x08)
	struct UIconTextButton_C* Button_NextOutputDevice; // 0x328(0x08)
	struct UIconTextButton_C* Button_TogglePTT; // 0x330(0x08)
	struct UImage* GearIcon; // 0x338(0x08)
	struct UFortMobileImage* Image_TitleIcon; // 0x340(0x08)
	struct UCommonRichTextBlock* InputDevice; // 0x348(0x08)
	struct UCommonRichTextBlock* OutputDevice; // 0x350(0x08)
	struct UKeybindWidget_C* PTTKeybindWidget; // 0x358(0x08)
	struct UCommonRichTextBlock* PushToTalk; // 0x360(0x08)
	struct UCommonTextBlock* Text_LowPowerMode; // 0x368(0x08)
	struct UImage* VoiceDisabledIcon; // 0x370(0x08)
	struct UCommonRichTextBlock* VoiceDisabledText; // 0x378(0x08)

	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VoiceChannelSettings(int32_t EntryPoint); // Function VoiceChannelSettings.VoiceChannelSettings_C.ExecuteUbergraph_VoiceChannelSettings // (Final|UbergraphFunction) // @ game+0xda7c34
};

