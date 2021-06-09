// WidgetBlueprintGeneratedClass RewardInfoSimpleWidget.RewardInfoSimpleWidget_C
// Size: 0xc58 (Inherited: 0xc40)
struct URewardInfoSimpleWidget_C : UFortRewardInfoButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UCommonTextBlock* ItemCount; // 0xc48(0x08)
	struct UCommonLazyImage* ItemIcon; // 0xc50(0x08)

	void GetDisplayName(struct FText DisplayName); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentItemOrQuantitySetBP(); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RewardInfoSimpleWidget(int32_t EntryPoint); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

