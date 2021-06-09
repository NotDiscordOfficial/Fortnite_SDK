// WidgetBlueprintGeneratedClass FancyToastWidget.FancyToastWidget_C
// Size: 0x329 (Inherited: 0x288)
struct UFancyToastWidget_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Outro; // 0x290(0x08)
	struct UWidgetAnimation* Intro; // 0x298(0x08)
	struct UCommonTextBlock* Description; // 0x2a0(0x08)
	struct UCommonTextBlock* DescriptionRegular; // 0x2a8(0x08)
	struct UOverlay* RegularToast; // 0x2b0(0x08)
	struct UImage* SmallPreviewPortrait; // 0x2b8(0x08)
	struct UOverlay* SpecialToast; // 0x2c0(0x08)
	struct UCommonTextBlock* Title; // 0x2c8(0x08)
	struct UCommonTextBlock* TitleRegular; // 0x2d0(0x08)
	struct UWidgetSwitcher* TypeWidgetSwitcher; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x2e0(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Dev_TestImage; // 0x2f0(0x28)
	struct FMulticastInlineDelegate OnToastClicked; // 0x318(0x10)
	bool DoNotUseTimerToDismiss; // 0x328(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetAndShowText(struct FText Text, struct UCommonTextBlock* TextBlock); // Function FancyToastWidget.FancyToastWidget_C.SetAndShowText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowToast(struct FFortToastDisplayInfo DisplayInfo); // Function FancyToastWidget.FancyToastWidget_C.ShowToast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8(struct UObject* Loaded); // Function FancyToastWidget.FancyToastWidget_C.OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnShowToast(struct FFortToastDisplayInfo DispalyInfo); // Function FancyToastWidget.FancyToastWidget_C.OnShowToast // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Start Toast Animation(); // Function FancyToastWidget.FancyToastWidget_C.Start Toast Animation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Idle Finished(); // Function FancyToastWidget.FancyToastWidget_C.On Idle Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SimulateAthenaStoreToast(); // Function FancyToastWidget.FancyToastWidget_C.SimulateAthenaStoreToast // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Clicked(); // Function FancyToastWidget.FancyToastWidget_C.Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CompleteToast(); // Function FancyToastWidget.FancyToastWidget_C.CompleteToast // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveWidget(); // Function FancyToastWidget.FancyToastWidget_C.RemoveWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1(); // Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2(); // Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3(); // Function FancyToastWidget.FancyToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FancyToastWidget(int32_t EntryPoint); // Function FancyToastWidget.FancyToastWidget_C.ExecuteUbergraph_FancyToastWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnToastClicked__DelegateSignature(); // Function FancyToastWidget.FancyToastWidget_C.OnToastClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedToast__DelegateSignature(); // Function FancyToastWidget.FancyToastWidget_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

