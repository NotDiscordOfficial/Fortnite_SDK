// WidgetBlueprintGeneratedClass RestartClient.RestartClient_C
// Size: 0x4b0 (Inherited: 0x498)
struct URestartClient_C : UFortRestartClientModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* Intro; // 0x4a0(0x08)
	struct UIconTextButton_C* Button_Confirm; // 0x4a8(0x08)

	void OnButtonSet(bool InbShouldExit, bool bShouldShow); // Function RestartClient.RestartClient_C.OnButtonSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RestartClient.RestartClient_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function RestartClient.RestartClient_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RestartClient(int32_t EntryPoint); // Function RestartClient.RestartClient_C.ExecuteUbergraph_RestartClient // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

