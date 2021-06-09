// WidgetBlueprintGeneratedClass ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct UItemAlterationsListDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UAlterationsWidget_C* AlterationsWidget; // 0x2e8(0x08)

	void SetState(enum class EFortAlterationWidgetState State); // Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToCompareWithSet(); // Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToCompareWithSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleUpgradeLevelDeltaChanged(); // Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandleUpgradeLevelDeltaChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemAlterationsListDetailWidget(int32_t EntryPoint); // Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

