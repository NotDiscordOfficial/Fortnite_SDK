// WidgetBlueprintGeneratedClass Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C
// Size: 0x380 (Inherited: 0x2b0)
struct UMoonbeam_PowerRatingWidget_C : UFortPlayerPowerRating {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UCommonTextBlock* BaseRatingValue; // 0x2b8(0x08)
	struct UCommonTextBlock* BaseRatingValue-Large; // 0x2c0(0x08)
	struct UImage* BuffedRatingOuterGlow; // 0x2c8(0x08)
	struct UHomebaseRatingBar_C* HomebaseRatingBar; // 0x2d0(0x08)
	struct UImage* Image_Power; // 0x2d8(0x08)
	struct UCommonWidgetSwitcherLegacy* ModeTypeSwitcher; // 0x2e0(0x08)
	struct UImage* Moonbeam_Power_Back; // 0x2e8(0x08)
	struct UVerticalBox* OversizedMode; // 0x2f0(0x08)
	struct UImage* PowerIconGlow; // 0x2f8(0x08)
	struct UImage* Rating-Glow-Large; // 0x300(0x08)
	struct USizeBox* RatingBar; // 0x308(0x08)
	struct UHorizontalBox* RegularMode; // 0x310(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue; // 0x318(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue-Large; // 0x320(0x08)
	bool ShowDualPower; // 0x328(0x01)
	bool ShowProgress; // 0x329(0x01)
	bool ShowGlow; // 0x32a(0x01)
	bool UseLargeStyle; // 0x32b(0x01)
	bool UseOversizedMode; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	float InterpDuration; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct USoundBase* PowerIncreasedSound; // 0x338(0x08)
	int32_t Power Rating Num; // 0x340(0x04)
	struct FLinearColor PowerBackingColor; // 0x344(0x10)
	char pad_354[0x4]; // 0x354(0x04)
	struct FSlateColor FontColor; // 0x358(0x28)

	void SetBackgroundColor(struct FLinearColor NewColor); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateWidgetState(); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBasePowerRatingUpdated(int32_t BasePowerRating); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTeamPowerRatingUpdated(int32_t TeamPowerRating); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTeamMembershipChanged(); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Moonbeam_PowerRatingWidget(int32_t EntryPoint); // Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

