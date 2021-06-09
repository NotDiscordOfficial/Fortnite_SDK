// WidgetBlueprintGeneratedClass HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C
// Size: 0x37a (Inherited: 0x2e0)
struct UHeroLoadoutPerksDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCommonBorder* Border_Warning; // 0x2e8(0x08)
	struct UVerticalBox* ClassPerkDetailRowsBox; // 0x2f0(0x08)
	struct UCommonBorder* ClassPerksBorder; // 0x2f8(0x08)
	struct UCommonBorder* CommanderPerkBorder; // 0x300(0x08)
	struct UHeroLoadoutPerkDetailRow_C* CommanderPerkDetailRow; // 0x308(0x08)
	struct UCommonBorder* CommonBorder_ClassPerks; // 0x310(0x08)
	struct UCommonBorder* CommonBorder_CommanderPerk; // 0x318(0x08)
	struct UCommonBorder* CommonBorder_StandardPerk; // 0x320(0x08)
	struct UCommonBorder* CommonBorderFlavortext-01; // 0x328(0x08)
	struct UCommonBorder* CommonBorderFlavortext-02; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct UCommonLazyImage* LazyImage_Warning; // 0x340(0x08)
	struct UCommonBorder* NormalPerkBorder; // 0x348(0x08)
	struct USizeBox* RootVisibilityBox; // 0x350(0x08)
	struct UHeroLoadoutPerkDetailRow_C* StandardPerkDetailRow; // 0x358(0x08)
	struct UCommonTextBlock* Text_Warning; // 0x360(0x08)
	struct UFortCampaignHeroLoadoutItem* LoadoutContext; // 0x368(0x08)
	struct FName SlotNameContext; // 0x370(0x08)
	bool IsHeroLoadOut-Tooltip; // 0x378(0x01)
	bool bShouldShowClassPerks; // 0x379(0x01)

	void IsValidHeroSlot(bool Result); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.IsValidHeroSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateCommanderSlotPerkVisibility(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateCommanderSlotPerkVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateHeroLoadoutSlotWarning(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateHeroLoadoutSlotWarning // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateRootVisibility(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateRootVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentLoadoutSlotContextSet(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandleDifferentLoadoutSlotContextSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearLoadoutSlotContext(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ClearLoadoutSlotContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetLoadoutSlotContext(struct UFortCampaignHeroLoadoutItem* HeroLoadout, struct FName SlotName); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.SetLoadoutSlotContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HeroLoadoutPerksDetailWidget(int32_t EntryPoint); // Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ExecuteUbergraph_HeroLoadoutPerksDetailWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

