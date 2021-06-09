// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
// Size: 0x310 (Inherited: 0x2f8)
struct UFortCosmeticItemCard_C : UFortCosmeticItemCard {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* Anim-Hover; // 0x300(0x08)
	struct UMaterialInstanceDynamic* ImageMaterial_NewItemCard; // 0x308(0x08)

	void HandleUpdateRarity(struct FFortColorPalette RarityColors); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateEnhanced(bool bEnhanced); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateItemCardMaterial(struct UMaterialInterface* Material); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateItemCardIcon(struct UTexture2D* Icon); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateSeriesOrRarityColors(struct FFortColorPalette ColorPalette); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSizeChanged(float InCardWidth); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnHover(); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUnhover(); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortCosmeticItemCard(int32_t EntryPoint); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

