// WidgetBlueprintGeneratedClass SubscriptionDetailsWidget.SubscriptionDetailsWidget_C
// Size: 0x580 (Inherited: 0x3a8)
struct USubscriptionDetailsWidget_C : USubscriptionDetailsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* Intro; // 0x3b0(0x08)
	struct UWidgetAnimation* Temp; // 0x3b8(0x08)
	struct UImage* Background_Left; // 0x3c0(0x08)
	struct UImage* Background_Right; // 0x3c8(0x08)
	struct UImage* Badge; // 0x3d0(0x08)
	struct UImage* BattlePass_Star_Bullet; // 0x3d8(0x08)
	struct UBorder* Border_Vbuck_DisclaimerColor; // 0x3e0(0x08)
	struct UOverlay* BP_Asterisk; // 0x3e8(0x08)
	struct UOverlay* BP_Asterisk_2; // 0x3f0(0x08)
	struct UOverlay* BP_CheckMark; // 0x3f8(0x08)
	struct UCommonVisibilitySwitcher* BP_DisclaimerIndicatorSwitcher; // 0x400(0x08)
	struct UBorder* BP_Text_Color; // 0x408(0x08)
	struct UBorder* BP_Text_Details_Color; // 0x410(0x08)
	struct UImage* ColorA; // 0x418(0x08)
	struct UImage* ColorB; // 0x420(0x08)
	struct UImage* ColorC; // 0x428(0x08)
	struct UImage* Image; // 0x430(0x08)
	struct UImage* Image_2; // 0x438(0x08)
	struct UImage* Image_3; // 0x440(0x08)
	struct UImage* Image_4; // 0x448(0x08)
	struct UImage* Image_5; // 0x450(0x08)
	struct UImage* Image_174; // 0x458(0x08)
	struct UImage* Image_315; // 0x460(0x08)
	struct UImage* Image_BattlePassReward; // 0x468(0x08)
	struct UImage* Image_BPCharacterRender; // 0x470(0x08)
	struct UImage* Image_MtxReward; // 0x478(0x08)
	struct UImage* Image_SkinPreview; // 0x480(0x08)
	struct UBorder* InfoHeaderColor; // 0x488(0x08)
	struct UImage* LeftBeam; // 0x490(0x08)
	struct UImage* LeftGlow; // 0x498(0x08)
	struct UImage* Logo; // 0x4a0(0x08)
	struct UImage* RightBeam; // 0x4a8(0x08)
	struct UImage* RightGlow; // 0x4b0(0x08)
	struct USafeZone* SafeZone_1; // 0x4b8(0x08)
	struct UOverlay* Skin_Asterisk; // 0x4c0(0x08)
	struct UOverlay* Skin_CheckMark; // 0x4c8(0x08)
	struct UCommonVisibilitySwitcher* Skin_DisclaimerIndicatorSwitcher; // 0x4d0(0x08)
	struct UImage* Skin_Text_Bullet; // 0x4d8(0x08)
	struct UBorder* Skin_Text_Color; // 0x4e0(0x08)
	struct UBorder* Skin_Text_Details_Color; // 0x4e8(0x08)
	struct UImage* Spike_Angle_Left; // 0x4f0(0x08)
	struct UImage* Spike_Angle_Right; // 0x4f8(0x08)
	struct UCommonTextBlock* SubsNameText; // 0x500(0x08)
	struct UImage* ThinSpike_Left; // 0x508(0x08)
	struct UImage* ThinSpike_Right; // 0x510(0x08)
	struct UVerticalBox* VBox_BulletPoints; // 0x518(0x08)
	struct UImage* VBuck_Star_Bullet; // 0x520(0x08)
	struct UBorder* VBuck_Text_Color; // 0x528(0x08)
	struct UBorder* Vbuck_Text_Details_Color; // 0x530(0x08)
	struct UOverlay* VBucks_Asterisk; // 0x538(0x08)
	struct UOverlay* VBucks_CheckMark; // 0x540(0x08)
	struct UCommonVisibilitySwitcher* VBucks_DisclaimerIndicatorSwitcher; // 0x548(0x08)
	struct UImage* WhiteFill; // 0x550(0x08)
	float TimeOffset; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct UWidgetAnimation* IntroAnim; // 0x560(0x08)
	struct FVector2D BulletPointOffset; // 0x568(0x08)
	struct TArray<struct USubscriptionBulletPointWidget_C*> BulletPoints; // 0x570(0x10)

	void SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_6(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_5(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_4(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_3(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_2(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_1(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SequenceEvent__ENTRYPOINTSubscriptionDetailsWidget_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSkinImageTakeOver(bool bTakeOver); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnSkinImageTakeOver // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Configure Bullet Point Widget(struct USubscriptionBulletPointWidget_C* BulletPointWidget, struct FSubscriptionBulletPoint BulletPointInfo); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.Configure Bullet Point Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddBulletPoint(struct FSubscriptionBulletPoint BulletPointInfo); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.AddBulletPoint // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndBulletPointIntro(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.EndBulletPointIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetBulletPointsIntro(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.ResetBulletPointsIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartBulletPointIntro(int32_t Index); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.StartBulletPointIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetScreenCompletedAnimState(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetScreenCompletedAnimState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnVbucksDisclaimerStateUpdated(enum class ESubscriptionDisclaimerState DisclaimerState); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnVbucksDisclaimerStateUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSkinDisclaimerStateUpdated(enum class ESubscriptionDisclaimerState DisclaimerState); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnSkinDisclaimerStateUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBattlepassDisclaimerStateUpdated(enum class ESubscriptionDisclaimerState DisclaimerState); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnBattlepassDisclaimerStateUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetScreenForResetState(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetScreenForResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleStopTransitionToSubsAnim(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.HandleStopTransitionToSubsAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetRandomFlareTime(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetRandomFlareTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMaterialColors(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetMaterialColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetScreenForTransitionAnim(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetScreenForTransitionAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTransitionToSubsScreenAnim(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.HandleTransitionToSubsScreenAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnScreenStateSet(enum class EMcpSubscriptionState NewState); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnScreenStateSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSkinImageLoaded(struct UTexture2D* SkinImage); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnSkinImageLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBattlepassImageLoaded(struct UTexture2D* SkinImage); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnBattlepassImageLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ClearBulletPoints(); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.ClearBulletPoints // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SubscriptionDetailsWidget(int32_t EntryPoint); // Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.ExecuteUbergraph_SubscriptionDetailsWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

