// WidgetBlueprintGeneratedClass UI_ScannerScreen.UI_ScannerScreen_C
// Size: 0x2b0 (Inherited: 0x260)
struct UUI_ScannerScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FlashText; // 0x268(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_States; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_101; // 0x280(0x08)
	struct UImage* Image_ScreenBorder; // 0x288(0x08)
	struct UOverlay* Overlay_BGIdle; // 0x290(0x08)
	struct UCommonTextBlock* Text_Failure; // 0x298(0x08)
	struct UCommonTextBlock* Text_Misc; // 0x2a0(0x08)
	struct UCommonTextBlock* Text_Success; // 0x2a8(0x08)

	void EventFail(struct FText ScreenText); // Function UI_ScannerScreen.UI_ScannerScreen_C.EventFail // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventSuccess(struct FText ScreenText); // Function UI_ScannerScreen.UI_ScannerScreen_C.EventSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventScanning(); // Function UI_ScannerScreen.UI_ScannerScreen_C.EventScanning // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventTargetLost(struct FText ScreenText); // Function UI_ScannerScreen.UI_ScannerScreen_C.EventTargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_UI_ScannerScreen(int32_t EntryPoint); // Function UI_ScannerScreen.UI_ScannerScreen_C.ExecuteUbergraph_UI_ScannerScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

