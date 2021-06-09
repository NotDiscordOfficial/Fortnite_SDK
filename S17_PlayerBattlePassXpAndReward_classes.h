// WidgetBlueprintGeneratedClass S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C
// Size: 0x2c4 (Inherited: 0x290)
struct US17_PlayerBattlePassXpAndReward_C : UFortSeasonDataWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Image_393; // 0x298(0x08)
	struct UImage* Image_RaceTrack; // 0x2a0(0x08)
	struct UCommonRichTextBlock* RichText_CurrentLevel; // 0x2a8(0x08)
	struct UCommonRichTextBlock* RichText_Level; // 0x2b0(0x08)
	struct UVerticalBox* VerticalBox_5stars; // 0x2b8(0x08)
	int32_t Max BPLevel for Rewards; // 0x2c0(0x04)

	void Update Text(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.Update Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLevelChanged(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnProgressUpdated(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSuperCharged(); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.OnSuperCharged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_S17_PlayerBattlePassXpAndReward(int32_t EntryPoint); // Function S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C.ExecuteUbergraph_S17_PlayerBattlePassXpAndReward // (Final|UbergraphFunction) // @ game+0xda7c34
};

