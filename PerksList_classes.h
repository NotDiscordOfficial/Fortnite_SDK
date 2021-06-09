// WidgetBlueprintGeneratedClass PerksList.PerksList_C
// Size: 0x3b4 (Inherited: 0x320)
struct UPerksList_C : UFortPerksWidget_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCommonBorder* BorderLockedL; // 0x328(0x08)
	struct UCommonBorder* BorderLockedR; // 0x330(0x08)
	struct UCommonBorder* BorderUnlockedL; // 0x338(0x08)
	struct UCommonBorder* BorderUnlockedR; // 0x340(0x08)
	struct UVerticalBox* PerksLockedL; // 0x348(0x08)
	struct UVerticalBox* PerksLockedR; // 0x350(0x08)
	struct UHorizontalBox* PerksNoTiers; // 0x358(0x08)
	struct UVerticalBox* PerksRightColumn; // 0x360(0x08)
	struct UVerticalBox* PerksUnlockedL; // 0x368(0x08)
	struct UVerticalBox* PerksUnlockedR; // 0x370(0x08)
	struct UVerticalBox* PerkTiers; // 0x378(0x08)
	struct UCommonWidgetSwitcherLegacy* PerkTierSwitcher; // 0x380(0x08)
	bool bIncludeName; // 0x388(0x01)
	bool bFirstTier; // 0x389(0x01)
	bool bIncludeDescription; // 0x38a(0x01)
	bool bUseLegacyFixedSizeIcons; // 0x38b(0x01)
	enum class EFortBrushSize IconSize; // 0x38c(0x01)
	bool bGenerateTiers; // 0x38d(0x01)
	bool bFirstPerkCompleteL; // 0x38e(0x01)
	char pad_38F[0x1]; // 0x38f(0x01)
	int32_t PerkCount; // 0x390(0x04)
	bool bTwoColumns; // 0x394(0x01)
	bool bSecondColumnStarted; // 0x395(0x01)
	bool bFirstPerkCompleteR; // 0x396(0x01)
	char pad_397[0x1]; // 0x397(0x01)
	int32_t SecondColumnSplitCount; // 0x398(0x04)
	struct FMargin RowPadding; // 0x39c(0x10)
	bool bUseLargeFormatNameOnly; // 0x3ac(0x01)
	bool bShowActiveAbilitiesOnly; // 0x3ad(0x01)
	bool bEnableMouseTooltips; // 0x3ae(0x01)
	char pad_3AF[0x1]; // 0x3af(0x01)
	float WrapPerkTextAt; // 0x3b0(0x04)

	void ResetVariables(); // Function PerksList.PerksList_C.ResetVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PerksList.PerksList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnGeneratePerkTier(struct FFortUIPerkTier FortPerkTier, struct UFortPerkTierWidget_NUI* PerkTierWidget); // Function PerksList.PerksList_C.OnGeneratePerkTier // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnGeneratePerk(struct FFortUIPerk FortPerk, struct UFortPerkWidget_NUI* PerkWidget); // Function PerksList.PerksList_C.OnGeneratePerk // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHeroChanged(); // Function PerksList.PerksList_C.OnHeroChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStateChanged(); // Function PerksList.PerksList_C.OnStateChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PerksList(int32_t EntryPoint); // Function PerksList.PerksList_C.ExecuteUbergraph_PerksList // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

