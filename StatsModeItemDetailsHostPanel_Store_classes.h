// WidgetBlueprintGeneratedClass StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C
// Size: 0x3a0 (Inherited: 0x378)
struct UStatsModeItemDetailsHostPanel_Store_C : UFortItemManagementItemDetailsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UItemDetailsHeader_C* HeaderWidget; // 0x380(0x08)
	struct UItemAttributesDetailWidget_C* ItemAttributesDetailWidget; // 0x388(0x08)
	struct UImage* MarkedForMulchingBackgroundImage; // 0x390(0x08)
	struct UFortMultiSizeImage* MarkedForMulchingIndicatorImage; // 0x398(0x08)

	void HandleHasItemMarkedForMulchingChanged(); // Function StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store(int32_t EntryPoint); // Function StatsModeItemDetailsHostPanel_Store.StatsModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_StatsModeItemDetailsHostPanel_Store // (Final|UbergraphFunction) // @ game+0xda7c34
};

