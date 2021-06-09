// WidgetBlueprintGeneratedClass VoiceChannelChangePopup.VoiceChannelChangePopup_C
// Size: 0x411 (Inherited: 0x398)
struct UVoiceChannelChangePopup_C : UFortVoiceChannelChangePopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* AmbientIconPulse; // 0x3a0(0x08)
	struct UHorizontalBox* GamepadKeybindWrapper; // 0x3a8(0x08)
	struct UImage* Image_Mic; // 0x3b0(0x08)
	struct UHorizontalBox* KBKeybindWrapper; // 0x3b8(0x08)
	struct UImage* MicPulse; // 0x3c0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_KeybindWidgets; // 0x3c8(0x08)
	struct UCommonRichTextBlock* Text_Hold; // 0x3d0(0x08)
	struct FName M_Param_ColorA; // 0x3d8(0x08)
	struct FName M_Param_ColorB; // 0x3e0(0x08)
	struct FName M_Param_Progress; // 0x3e8(0x08)
	struct FLinearColor ColorB; // 0x3f0(0x10)
	struct FLinearColor ColorA; // 0x400(0x10)
	bool CollapseOnAnimationFinish; // 0x410(0x01)

	void Construct(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Popup Animation Finished(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayCloseAnimation(); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VoiceChannelChangePopup(int32_t EntryPoint); // Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup // (Final|UbergraphFunction) // @ game+0xda7c34
};

