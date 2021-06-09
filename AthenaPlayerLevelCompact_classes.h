// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
// Size: 0x2c8 (Inherited: 0x290)
struct UAthenaPlayerLevelCompact_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Image_393; // 0x298(0x08)
	struct UImage* Image_ProgressBar; // 0x2a0(0x08)
	struct UAthenaSeasonItemRewardIcon_C* RewardIcon; // 0x2a8(0x08)
	struct UCommonTextBlock* Text_Level; // 0x2b0(0x08)
	struct FMulticastInlineDelegate LevelChanged; // 0x2b8(0x10)

	void OnUpdateRewardIcon_2(struct UFortItem* RewardItem, struct TSoftObjectPtr<struct UTexture2D> RewardTexture, bool bHasAdditionalStylesToDisplay, int32_t RewardLevel, bool bRequiresBattlePass); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.OnUpdateRewardIcon_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateXpBar_2(float Progress, bool bIsMaxLevel); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.OnUpdateXpBar_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32_t EntryPoint); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.ExecuteUbergraph_AthenaPlayerLevelCompact // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void LevelChanged__DelegateSignature(int32_t Level); // Function AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C.LevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

