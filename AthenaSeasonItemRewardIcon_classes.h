// WidgetBlueprintGeneratedClass AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C
// Size: 0x2f9 (Inherited: 0x260)
struct UAthenaSeasonItemRewardIcon_C : UAthenaSeasonItemRewardIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AdjustRewardFillSize; // 0x268(0x08)
	struct UWidgetAnimation* Selected; // 0x270(0x08)
	struct UWidgetAnimation* HoverState; // 0x278(0x08)
	struct UImage* Image_BattlePassIcon; // 0x280(0x08)
	struct UOverlay* Image_RewardContainer; // 0x288(0x08)
	struct USizeBox* RewardContainer_Size; // 0x290(0x08)
	struct UFortLazyImage* RewardTile; // 0x298(0x08)
	struct USizeBox* SizeBox_BattlePassIcon; // 0x2a0(0x08)
	struct USizeBox* SizeBox_Styles; // 0x2a8(0x08)
	struct UOverlay* Styles+Count; // 0x2b0(0x08)
	struct UImage* Styles_Backing; // 0x2b8(0x08)
	struct UCommonTextBlock* StylesLabel; // 0x2c0(0x08)
	struct UBorder* StylesWrapper; // 0x2c8(0x08)
	struct UCommonTextBlock* Text_Count; // 0x2d0(0x08)
	float Width; // 0x2d8(0x04)
	float Height; // 0x2dc(0x04)
	bool ShowStyle; // 0x2e0(0x01)
	bool ShowCount; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	float BattlePassIconSize; // 0x2e4(0x04)
	bool BattlePassIconEnabled; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float BattlePassIconPositionOffsetMultiplier; // 0x2ec(0x04)
	float FillSize; // 0x2f0(0x04)
	float DesiredPixelSize; // 0x2f4(0x04)
	bool bIsEmoji; // 0x2f8(0x01)

	void SetRarityColors(struct FLinearColor Color1, struct FLinearColor Color2, struct FLinearColor Color3, struct FLinearColor Color4, struct FLinearColor Color5); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SetRarityColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleMultipleRewardSelctedAnim(bool bLeftRewardSelected); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.HandleMultipleRewardSelctedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeselectedAnim(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.DeselectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SelectedAnim(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SelectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupItemCardStyle(struct UFortItem* RewardItem); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.SetupItemCardStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Unhover(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.Unhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Hover(); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.Hover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitializeReward(struct UFortItem* RewardItem, struct TSoftObjectPtr<struct UTexture2D> RewardTexture, bool bHasAdditionalStylesToDisplay, int32_t RewardLevel, bool bRequiresBattlePass); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.OnInitializeReward // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnInitializeSeriesReward(struct UFortItemSeriesDefinition* SeriesData); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.OnInitializeSeriesReward // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaSeasonItemRewardIcon(int32_t EntryPoint); // Function AthenaSeasonItemRewardIcon.AthenaSeasonItemRewardIcon_C.ExecuteUbergraph_AthenaSeasonItemRewardIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

