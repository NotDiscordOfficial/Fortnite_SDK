// WidgetBlueprintGeneratedClass BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C
// Size: 0x488 (Inherited: 0x450)
struct UBP_AthenaMapScreenContainer_C : UAthenaMapScreenContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* DamageTaken; // 0x458(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x460(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x468(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x470(0x08)
	struct USafeZone* SafeZone_TabButtons; // 0x478(0x08)
	struct USizeBox* SizeBox_SwitcherContainer; // 0x480(0x08)

	void PreConstruct(bool IsDesignTime); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnShowTabsSet(bool bShowTabs); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.BP_OnShowTabsSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDamageReceived(); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnDamageReceived // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnShowOrHideCreativeScoreboard(bool bShowCreativeScoreboard); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnShowOrHideCreativeScoreboard // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeScoreboardWidgetCreated(struct UCommonUserWidget* CreativeScoreboardWidget); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnCreativeScoreboardWidgetCreated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_AthenaMapScreenContainer(int32_t EntryPoint); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.ExecuteUbergraph_BP_AthenaMapScreenContainer // (Final|UbergraphFunction) // @ game+0xda7c34
};

