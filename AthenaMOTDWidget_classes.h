// WidgetBlueprintGeneratedClass AthenaMOTDWidget.AthenaMOTDWidget_C
// Size: 0x4b0 (Inherited: 0x438)
struct UAthenaMOTDWidget_C : UFortAthenaMOTDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x440(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x448(0x08)
	struct UWidgetAnimation* OnNewSelect; // 0x450(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Left; // 0x458(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Right; // 0x460(0x08)
	struct UCommonTextBlock* CommonText_NewsHeader; // 0x468(0x08)
	struct UImage* Image_157; // 0x470(0x08)
	struct UImage* Image_TextFloater; // 0x478(0x08)
	struct USafeZone* SafeZone_1; // 0x480(0x08)
	struct USafeZone* SafeZone_2; // 0x488(0x08)
	struct USafeZone* SafeZone_3; // 0x490(0x08)
	struct USafeZone* SafeZone_4; // 0x498(0x08)
	struct FMulticastInlineDelegate UpdateStyle; // 0x4a0(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCustomColorStyle(bool bHasCustomColor, struct FColor CustomDarkColor, struct FColor CustomLightColor); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.UpdateCustomColorStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DialogResult_B7839D98483DEF9593D448BA28AE74F7(enum class EFortDialogResult Result, struct FName ResultName); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.DialogResult_B7839D98483DEF9593D448BA28AE74F7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSelectedNews(struct FAthenaMOTDBase NewsEntry); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.OnSelectedNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void StartSTWUpsell(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.StartSTWUpsell // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetSpecialButtonText(struct FText InText); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.SetSpecialButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetNormalButtonText(struct FText InText); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.SetNormalButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlayIntroAnimation(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.PlayIntroAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMOTDWidget(int32_t EntryPoint); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.ExecuteUbergraph_AthenaMOTDWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void UpdateStyle__DelegateSignature(enum class EAthenaNewsStyle NewStyle); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.UpdateStyle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

