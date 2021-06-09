// WidgetBlueprintGeneratedClass StatsListWidget.StatsListWidget_C
// Size: 0x2f8 (Inherited: 0x2b8)
struct UStatsListWidget_C : UFortAttributeList_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UHorizontalBox* HBoxCapMessage; // 0x2c0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x2c8(0x08)
	struct UVerticalBox* StatsList; // 0x2d0(0x08)
	struct FMargin RowMargin; // 0x2d8(0x10)
	int32_t ClampedAttributeCount; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FTimerHandle List Item Time Handle; // 0x2f0(0x08)

	void Trigger Initial Reset(); // Function StatsListWidget.StatsListWidget_C.Trigger Initial Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Trigger Update Anim(); // Function StatsListWidget.StatsListWidget_C.Trigger Update Anim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update(); // Function StatsListWidget.StatsListWidget_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AdjustClampCount(struct UFortAttributeListItem_NUI* Widget, bool Add); // Function StatsListWidget.StatsListWidget_C.AdjustClampCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleClampedValueMessage(bool inShow); // Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnClearShownAttributes(); // Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAddShownAttributeListItem(struct UFortAttributeListItem_NUI* AttributeListItemWidget); // Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRemoveShownAttributeListItem(struct UFortAttributeListItem_NUI* AttributeListItemWidget, int32_t AtIndex); // Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StatsListWidget(int32_t EntryPoint); // Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

