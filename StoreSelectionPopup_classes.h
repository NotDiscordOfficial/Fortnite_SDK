// WidgetBlueprintGeneratedClass StoreSelectionPopup.StoreSelectionPopup_C
// Size: 0x4b0 (Inherited: 0x490)
struct UStoreSelectionPopup_C : UFortMtxStoreSelectionPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UWidgetAnimation* Intro; // 0x498(0x08)
	struct UImage* SpeedLines; // 0x4a0(0x08)
	struct UCommonTextBlock* StorePrompt_Header; // 0x4a8(0x08)

	void BP_OnActivated(); // Function StoreSelectionPopup.StoreSelectionPopup_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StoreSelectionPopup(int32_t EntryPoint); // Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup // (Final|UbergraphFunction) // @ game+0xda7c34
};

