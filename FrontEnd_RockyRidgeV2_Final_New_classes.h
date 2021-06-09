// WidgetBlueprintGeneratedClass FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C
// Size: 0x4c0 (Inherited: 0x360)
struct UFrontEnd_RockyRidgeV2_Final_New_C : UFortUIStateWidget_NightNightBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* BGReveal; // 0x368(0x08)
	struct UWidgetAnimation* FadeIn; // 0x370(0x08)
	struct UWidgetAnimation* CountdownIntro; // 0x378(0x08)
	struct UWidgetAnimation* NewSeason; // 0x380(0x08)
	struct UWidgetAnimation* ToBeContinued4; // 0x388(0x08)
	struct UWidgetAnimation* ToBeContinued3; // 0x390(0x08)
	struct UWidgetAnimation* ToBeContinued2; // 0x398(0x08)
	struct UWidgetAnimation* ToBeContinued1; // 0x3a0(0x08)
	struct USkewButton_C* CloseButton; // 0x3a8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_AnimStates; // 0x3b0(0x08)
	struct UImage* Glow; // 0x3b8(0x08)
	struct UImage* Glow_1; // 0x3c0(0x08)
	struct UImage* Glow_2; // 0x3c8(0x08)
	struct UImage* Glow_3; // 0x3d0(0x08)
	struct UImage* Glow_4; // 0x3d8(0x08)
	struct UImage* Image; // 0x3e0(0x08)
	struct UImage* Image_2; // 0x3e8(0x08)
	struct UImage* Image_3; // 0x3f0(0x08)
	struct UImage* Image_4; // 0x3f8(0x08)
	struct UImage* Image_5; // 0x400(0x08)
	struct UImage* Image_6; // 0x408(0x08)
	struct UImage* Image_7; // 0x410(0x08)
	struct UImage* Image_8; // 0x418(0x08)
	struct UImage* Image_9; // 0x420(0x08)
	struct UImage* Image_104; // 0x428(0x08)
	struct UImage* Image_BGColor; // 0x430(0x08)
	struct UImage* Image_Fade; // 0x438(0x08)
	struct UImage* Image_Logo; // 0x440(0x08)
	struct UOverlay* Overlay_TextLines; // 0x448(0x08)
	struct URetainerBox* RetainerBox_1; // 0x450(0x08)
	struct USafeZone* SafeZone_1; // 0x458(0x08)
	struct UCommonTextBlock* Text_Button_Close; // 0x460(0x08)
	struct UCommonTextBlock* Text_Countdown_value; // 0x468(0x08)
	struct UCommonTextBlock* Text_line1; // 0x470(0x08)
	struct UCommonTextBlock* Text_line2; // 0x478(0x08)
	struct UCommonTextBlock* Text_line3; // 0x480(0x08)
	struct UCommonTextBlock* Text_line4; // 0x488(0x08)
	float CurrentTime; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct FText ToBeContinuedText; // 0x498(0x18)
	struct TArray<struct FString> TextArray; // 0x4b0(0x10)

	void UpdateCountdown(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.UpdateCountdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SoundMaybe(int32_t Index, struct USoundBase* sound); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.SoundMaybe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_7A14662040CAA9993EEA69A3B3F098D9(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_7A14662040CAA9993EEA69A3B3F098D9 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_8824F67B4A44C9BC1A26E3BEF904F050(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_8824F67B4A44C9BC1A26E3BEF904F050 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_009FE66B4A5DE041C9AA728E656E3D34(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_009FE66B4A5DE041C9AA728E656E3D34 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_388F0DBF48A3BD71CA4248816CD1A310(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_388F0DBF48A3BD71CA4248816CD1A310 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_6D646E07453715C140E19082FCFB49E2(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_6D646E07453715C140E19082FCFB49E2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_24AAB65A42736580C51BD3BB9210CF74(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_24AAB65A42736580C51BD3BB9210CF74 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Finished_5FFD204542BF85A654213A9C63D02822(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Finished_5FFD204542BF85A654213A9C63D02822 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DialogResult_F5CDF2014834DA2289AC4A9C8C219485(enum class EFortDialogResult Result, struct FName ResultName); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.DialogResult_F5CDF2014834DA2289AC4A9C8C219485 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New(int32_t EntryPoint); // Function FrontEnd_RockyRidgeV2_Final_New.FrontEnd_RockyRidgeV2_Final_New_C.ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

