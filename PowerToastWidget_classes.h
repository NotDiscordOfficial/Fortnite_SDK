// WidgetBlueprintGeneratedClass PowerToastWidget.PowerToastWidget_C
// Size: 0x330 (Inherited: 0x2c8)
struct UPowerToastWidget_C : UFortPlayerPowerRatingToast {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* LookAtMe; // 0x2d0(0x08)
	struct UWidgetAnimation* Outro; // 0x2d8(0x08)
	struct UWidgetAnimation* Intro; // 0x2e0(0x08)
	struct UImage* Image_3; // 0x2e8(0x08)
	struct UImage* Image_Power; // 0x2f0(0x08)
	struct UImage* LineSeparator; // 0x2f8(0x08)
	struct UImage* Moonbeam_Power_Back_2; // 0x300(0x08)
	struct UImage* Moonbeam_Power_Back_Difference; // 0x308(0x08)
	struct UImage* PowerIconGlow; // 0x310(0x08)
	struct UFortUINotification* ToastNotification; // 0x318(0x08)
	float AnimationFinishedDelay; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FTimerHandle AnimationDelayTimer; // 0x328(0x08)

	void HandleAnimationDelay(); // Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1(); // Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2(); // Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3(); // Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xda7c34
	void ShowToast(); // Function PowerToastWidget.PowerToastWidget_C.ShowToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PowerToastWidget.PowerToastWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PowerToastWidget(int32_t EntryPoint); // Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

