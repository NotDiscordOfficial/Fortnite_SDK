// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C
// Size: 0x334 (Inherited: 0x2e8)
struct UHeroLoadoutActiveAbilitiesDetailWidget_C : UFortHeroLoadoutAbilitiesDetailPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UHorizontalBox* ColumnContainer; // 0x2f0(0x08)
	struct UCommonBorder* CommonBorderHeading; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalLayoutBox; // 0x300(0x08)
	struct UWidgetSwitcher* LayoutSwitcher; // 0x308(0x08)
	struct USizeBox* RootBox; // 0x310(0x08)
	struct UVerticalBox* RowContainer; // 0x318(0x08)
	struct USizeBox* SizeBoxHorizontalLayout; // 0x320(0x08)
	struct UVerticalBox* VerticalLayoutBox; // 0x328(0x08)
	enum class HeroLoadoutActiveAbilitiesDetailLayoutStyle LayoutStyle; // 0x330(0x01)
	bool IsHeroLoadOut-Tooltip; // 0x331(0x01)
	bool ShowDescription; // 0x332(0x01)
	bool UseVerboseDescription; // 0x333(0x01)

	void CreateAbilityTooltips(); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.CreateAbilityTooltips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromItem(); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.UpdateFromItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleItemToDetailChangedBP(); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.HandleItemToDetailChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerHomebaseChanged(); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.OnPlayerHomebaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget(int32_t EntryPoint); // Function HeroLoadoutActiveAbilitiesDetailWidget.HeroLoadoutActiveAbilitiesDetailWidget_C.ExecuteUbergraph_HeroLoadoutActiveAbilitiesDetailWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

