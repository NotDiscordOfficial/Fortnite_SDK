// WidgetBlueprintGeneratedClass PowerRatingWidget.PowerRatingWidget_C
// Size: 0x33c (Inherited: 0x2b0)
struct UPowerRatingWidget_C : UFortPlayerPowerRating {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UCommonTextBlock* BaseRatingValue; // 0x2b8(0x08)
	struct UCommonTextBlock* BaseRatingValue-Large; // 0x2c0(0x08)
	struct UImage* BuffedRatingOuterGlow; // 0x2c8(0x08)
	struct UHomebaseRatingBar_C* HomebaseRatingBar; // 0x2d0(0x08)
	struct UImage* Image_Power; // 0x2d8(0x08)
	struct UCommonWidgetSwitcherLegacy* ModeTypeSwitcher; // 0x2e0(0x08)
	struct UVerticalBox* OversizedMode; // 0x2e8(0x08)
	struct UImage* PowerIconGlow; // 0x2f0(0x08)
	struct UImage* Rating-Glow-Large; // 0x2f8(0x08)
	struct USizeBox* RatingBar; // 0x300(0x08)
	struct UHorizontalBox* RegularMode; // 0x308(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue; // 0x310(0x08)
	struct UCommonNumericTextBlock* TeamRatingValue-Large; // 0x318(0x08)
	bool ShowDualPower; // 0x320(0x01)
	bool ShowProgress; // 0x321(0x01)
	bool ShowGlow; // 0x322(0x01)
	bool UseLargeStyle; // 0x323(0x01)
	bool UseOversizedMode; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float InterpDuration; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct USoundBase* PowerIncreasedSound; // 0x330(0x08)
	int32_t Power Rating Num; // 0x338(0x04)

	void UpdateWidgetState(); // Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PowerRatingWidget.PowerRatingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBasePowerRatingUpdated(int32_t BasePowerRating); // Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTeamPowerRatingUpdated(int32_t TeamPowerRating); // Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress); // Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTeamMembershipChanged(); // Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PowerRatingWidget(int32_t EntryPoint); // Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

