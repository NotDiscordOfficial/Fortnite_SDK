// WidgetBlueprintGeneratedClass ItemInfoHeaderWidget.ItemInfoHeaderWidget_C
// Size: 0x3e0 (Inherited: 0x2a8)
struct UItemInfoHeaderWidget_C : UFortItemBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UVerticalBox* AlternateBGContainer; // 0x2b0(0x08)
	struct UCommonBorder* AlternateBorder; // 0x2b8(0x08)
	struct UCommonBorder* AlternateRule; // 0x2c0(0x08)
	struct UWidgetSwitcher* BackgroundSwitcher; // 0x2c8(0x08)
	struct UFortCosmeticItemCard_C* Card; // 0x2d0(0x08)
	struct UVerticalBox* CardContainer; // 0x2d8(0x08)
	struct UScrollBox* DetailsScrollBox; // 0x2e0(0x08)
	struct UCommonBorder* HeaderBackground; // 0x2e8(0x08)
	struct UVerticalBox* HeaderBGContainer; // 0x2f0(0x08)
	struct UCommonBorder* HeaderRule; // 0x2f8(0x08)
	struct UItemSeriesOrRarity_C* ItemSeriesOrRarity; // 0x300(0x08)
	struct UCommonTextBlock* LockedTextBlock; // 0x308(0x08)
	struct UImage* LockImage; // 0x310(0x08)
	struct UHorizontalBox* MainHB; // 0x318(0x08)
	struct UCommonTextBlock* NameTextBlock; // 0x320(0x08)
	struct UImage* RarityGlow; // 0x328(0x08)
	struct UImage* RarityTypeSeperatorImage; // 0x330(0x08)
	struct USizeBox* RemainingContainer; // 0x338(0x08)
	struct UCommonTextBlock* RemainingText; // 0x340(0x08)
	struct UCommonRichTextBlock* RichDescriptionBox; // 0x348(0x08)
	struct UCommonBorder* RootBackground; // 0x350(0x08)
	struct UVerticalBox* TextContainer; // 0x358(0x08)
	struct UCommonTextBlock* TypeTextBlock; // 0x360(0x08)
	int32_t RemainingQuantity; // 0x368(0x04)
	bool ShowCard; // 0x36c(0x01)
	bool Locked; // 0x36d(0x01)
	char pad_36E[0x2]; // 0x36e(0x02)
	struct FText LockedReason; // 0x370(0x18)
	bool ShowRemainingQuantity; // 0x388(0x01)
	bool ShowDetails; // 0x389(0x01)
	enum class EFortItemCardSize CardSize; // 0x38a(0x01)
	bool ShowDescription; // 0x38b(0x01)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TMap<enum class EFortItemType, struct FText> ItemAlternateName; // 0x390(0x50)

	struct FText GetAlternateNameForItem(struct UFortItemDefinition* ItemDef); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HasValidItemDefinition(bool HasValidDescription); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateColorRarity(struct FFortColorPalette Colors); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OverrideHeaderAndDescription(struct FText Header, struct FText Description, struct FText ItemType, bool bUseAlternateHeaderBG, enum class EFortRarity Rarity); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateDetailVisibility(); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetScrollWidget(); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateLocked(); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetLocked(bool ShouldShowLocked, struct FText LockReason); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetRemainingQuantity(bool ShouldShowRemainingQuantity, int32_t NewRemainingQuantity); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateRemainingQuantity(); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCard(); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup(bool ShouldShowCard, enum class EFortItemCardSize CardSize, bool ShouldShowDetails, bool ShouldShowDescription); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateNameText(struct UFortItemDefinition* ItemDefinition, int32_t Quantity); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update(struct UFortItemDefinition* ItemDefinition, int32_t Quantity); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnItemDefinitionChanged(); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemInfoHeaderWidget(int32_t EntryPoint); // Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

