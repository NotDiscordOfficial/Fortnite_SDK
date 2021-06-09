// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
// Size: 0x450 (Inherited: 0x418)
struct ULoginScreen_C : UFortUIStateWidget_Login {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UConsoleProfileWidget_C* ConsoleProfileWidget; // 0x420(0x08)
	struct USafeZone* SafeZone; // 0x428(0x08)
	struct UCommonTextBlock* Text_Version; // 0x430(0x08)
	struct UBuildWatermark_C* Widget_BuildWatermark; // 0x438(0x08)
	struct AFort_Entry_Music_Controller_BP_C* FrontEnd_Music_Controller; // 0x440(0x08)
	struct UWidget* PlatformSpecificBackBorder; // 0x448(0x08)

	void Construct(); // Function LoginScreen.LoginScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(struct UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // Function LoginScreen.LoginScreen_C.BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnEnterState_2(enum class EFortUIState PreviousUIState); // Function LoginScreen.LoginScreen_C.OnEnterState_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LoginScreen(int32_t EntryPoint); // Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

