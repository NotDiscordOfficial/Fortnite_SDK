// WidgetBlueprintGeneratedClass SplashScreenWidget.SplashScreenWidget_C
// Size: 0x4c8 (Inherited: 0x468)
struct USplashScreenWidget_C : UFortSplashScreenWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* InputPromptIdle; // 0x470(0x08)
	struct UCommonActionWidget* GamepadActionWidget; // 0x478(0x08)
	struct UHorizontalBox* GamepadInputHbox; // 0x480(0x08)
	struct UCommonTextBlock* GamepadInputText; // 0x488(0x08)
	struct UCommonLazyImage* I_Fortnite; // 0x490(0x08)
	struct UImage* ImageFakeButtonBackground; // 0x498(0x08)
	struct UHorizontalBox* MobileInputHbox; // 0x4a0(0x08)
	struct UCommonTextBlock* MobileInputText; // 0x4a8(0x08)
	struct UHorizontalBox* MouseInputHBox; // 0x4b0(0x08)
	struct UCommonTextBlock* MouseInputText; // 0x4b8(0x08)
	struct UWidgetSwitcher* Switcher_Input; // 0x4c0(0x08)

	void BP_OnActivated(); // Function SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SplashScreenWidget(int32_t EntryPoint); // Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

