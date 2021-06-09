// WidgetBlueprintGeneratedClass EventStoreHostPanels.EventStoreHostPanels_C
// Size: 0x378 (Inherited: 0x358)
struct UEventStoreHostPanels_C : UFortItemDetailsHostPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UHorizontalTabList_C* DetailPanelTabList; // 0x360(0x08)
	struct UCommonWidgetSwitcherLegacy* DetailPanelWidgetSwitcher; // 0x368(0x08)
	struct USizeBox* ItemSelected; // 0x370(0x08)

	void SetTabVisibilities(enum class ESlateVisibility StatVisibility, enum class ESlateVisibility BonusVisibility, enum class ESlateVisibility CraftingVisibility); // Function EventStoreHostPanels.EventStoreHostPanels_C.SetTabVisibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup Details Panels(); // Function EventStoreHostPanels.EventStoreHostPanels_C.Setup Details Panels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(struct UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentItemToDetailSet(); // Function EventStoreHostPanels.EventStoreHostPanels_C.HandleDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EventStoreHostPanels.EventStoreHostPanels_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(struct FName TabId, struct UCommonButtonLegacy* TabButton); // Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventStoreHostPanels(int32_t EntryPoint); // Function EventStoreHostPanels.EventStoreHostPanels_C.ExecuteUbergraph_EventStoreHostPanels // (Final|UbergraphFunction) // @ game+0xda7c34
};

