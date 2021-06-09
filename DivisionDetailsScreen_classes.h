// WidgetBlueprintGeneratedClass DivisionDetailsScreen.DivisionDetailsScreen_C
// Size: 0x508 (Inherited: 0x4b0)
struct UDivisionDetailsScreen_C : UFortDivisionDetailsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* Intro; // 0x4b8(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x4c0(0x08)
	struct UVerticalBox* GeneralDivisionInfo; // 0x4c8(0x08)
	struct UImage* Image_13; // 0x4d0(0x08)
	struct UImage* Image_PanelBG; // 0x4d8(0x08)
	struct UImage* Image_PanelBorder; // 0x4e0(0x08)
	struct UEventsSimpleButton_C* NextButton; // 0x4e8(0x08)
	struct USafeZone* SafeZone_2; // 0x4f0(0x08)
	struct UVerticalBox* ScoringPayoutInfo; // 0x4f8(0x08)
	struct USizeBox* SizeBox_TopContainer; // 0x500(0x08)

	void RightShoulderButton(bool Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.RightShoulderButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LeftShoulderButton(bool Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.LeftShoulderButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EmptyFunction(bool Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.EmptyFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DivisionDetailsScreen(int32_t EntryPoint); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.ExecuteUbergraph_DivisionDetailsScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

