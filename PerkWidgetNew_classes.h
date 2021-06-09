// WidgetBlueprintGeneratedClass PerkWidgetNew.PerkWidgetNew_C
// Size: 0x511 (Inherited: 0x358)
struct UPerkWidgetNew_C : UFortPerkWidget_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* Intro; // 0x360(0x08)
	struct USizeBox* AbilityIconSizeBox; // 0x368(0x08)
	struct UBorder* BorderAbility; // 0x370(0x08)
	struct UBorder* BorderHighlightBorder; // 0x378(0x08)
	struct UBorder* BorderHightlightBackground; // 0x380(0x08)
	struct UCommonBorder* Divider; // 0x388(0x08)
	struct UCommonBorder* EvolutionBorder; // 0x390(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x398(0x08)
	struct UImage* ImageAbilityIcon; // 0x3a0(0x08)
	struct UImage* ImageHeroBonusIcon; // 0x3a8(0x08)
	struct UImage* ImageLockAbility; // 0x3b0(0x08)
	struct UImage* ImageLockPerk; // 0x3b8(0x08)
	struct UImage* ImagePerkIcon; // 0x3c0(0x08)
	struct UImage* ImageTier; // 0x3c8(0x08)
	struct UCommonWidgetSwitcherLegacy* InfoSwitcher; // 0x3d0(0x08)
	struct UCommonTextBlock* LargeInfo; // 0x3d8(0x08)
	struct UCommonTextBlock* LevelTextNew; // 0x3e0(0x08)
	struct UOverlay* OverlayAbilityPerk; // 0x3e8(0x08)
	struct UOverlay* OverlayBadge; // 0x3f0(0x08)
	struct UOverlay* OverlayBasicPerk; // 0x3f8(0x08)
	struct UOverlay* OverlayImagePerk; // 0x400(0x08)
	struct UOverlay* OverlayLevel; // 0x408(0x08)
	struct USizeBox* PerkIconSizeBox; // 0x410(0x08)
	struct UCommonTextBlock* SkillDescription; // 0x418(0x08)
	struct UCommonTextBlock* SkillName; // 0x420(0x08)
	struct UVerticalBox* SmallInfo; // 0x428(0x08)
	struct UWidgetSwitcher* WidgetSwitcherBasicPerkOrAbilityPerk; // 0x430(0x08)
	struct UWidgetSwitcher* WidgetSwitcherTierOrLevel; // 0x438(0x08)
	struct FSlateBrush DemoImage; // 0x440(0x88)
	bool bIncludeName; // 0x4c8(0x01)
	bool bIncludeDescription; // 0x4c9(0x01)
	bool bUseLegacyFixedSizeIcons; // 0x4ca(0x01)
	enum class EFortBrushSize IconSize; // 0x4cb(0x01)
	bool bUseLargeFormatName; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	struct UCommonTextStyle* Locked Text Style; // 0x4d0(0x08)
	struct UCommonTextStyle* Locked Description Style; // 0x4d8(0x08)
	struct UCommonTextStyle* Default Description Style; // 0x4e0(0x08)
	struct UCommonTextStyle* Default Text Style; // 0x4e8(0x08)
	bool bEnableMouseTooltips; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FText CachedTooltipDescription; // 0x4f8(0x18)
	bool bShowBadges; // 0x510(0x01)

	void SetDescriptionWraptTextAt(float WrapTextAt); // Function PerkWidgetNew.PerkWidgetNew_C.SetDescriptionWraptTextAt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePerk(); // Function PerkWidgetNew.PerkWidgetNew_C.UpdatePerk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* Get_OverlayAbilityPerk_ToolTipWidget(); // Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void InitializeSettings(bool bIncludeName, bool bIncludeDescription, bool bUseLegacyFixedSizeIcons, enum class EFortBrushSize IconSize, bool bUseLargeFormatName, struct FFortUIPerk Perk, bool ShowMouseTooltips, bool bInShowBadges, float WrapTextAt); // Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HighlightBadge(); // Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetPerkStat(struct FTooltipStat TooltipStat); // Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ShowTierImage(); // Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupBadge(); // Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeHeroBonusIcon(); // Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeText(); // Function PerkWidgetNew.PerkWidgetNew_C.InitializeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShouldFadePerk(bool Result); // Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetHighlightColor(struct FLinearColor Color); // Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetTierAbilityBrush(struct FSlateBrush SlateBrush); // Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void InitializeAbilityPerk(); // Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeBasicPerk(); // Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCombinedTooltipDescriptionReady(struct FText Description); // Function PerkWidgetNew.PerkWidgetNew_C.OnCombinedTooltipDescriptionReady // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PerkWidgetNew(int32_t EntryPoint); // Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

