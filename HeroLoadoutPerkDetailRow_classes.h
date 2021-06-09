// WidgetBlueprintGeneratedClass HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C
// Size: 0x470 (Inherited: 0x288)
struct UHeroLoadoutPerkDetailRow_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Hover; // 0x290(0x08)
	struct UBorder* Border_PerkIcon; // 0x298(0x08)
	struct UImage* ImageLockPerk; // 0x2a0(0x08)
	struct UImage* ImagePerkIcon; // 0x2a8(0x08)
	struct UImage* ImageTier; // 0x2b0(0x08)
	struct UCommonWidgetSwitcherLegacy* InfoSwitcher; // 0x2b8(0x08)
	struct USizeBox* LargeInfo; // 0x2c0(0x08)
	struct UCommonTextBlock* LargeName; // 0x2c8(0x08)
	struct UCommonTextBlock* LevelTextNew; // 0x2d0(0x08)
	struct UOverlay* OverlayLockPerk; // 0x2d8(0x08)
	struct USizeBox* PerkIconSizeBox; // 0x2e0(0x08)
	struct URichTextBlock* RichText_SmallDescription; // 0x2e8(0x08)
	struct UImage* Shadow; // 0x2f0(0x08)
	struct UVerticalBox* SmallInfo; // 0x2f8(0x08)
	struct UCommonTextBlock* SmallName; // 0x300(0x08)
	bool IncludeName; // 0x308(0x01)
	bool IncludeDescription; // 0x309(0x01)
	bool ShouldDisplayAsIgnored; // 0x30a(0x01)
	char pad_30B[0x5]; // 0x30b(0x05)
	struct UCommonTextStyle* UnlockedDisplayNameTextStyle; // 0x310(0x08)
	struct UCommonTextStyle* LockedDisplayNameTextStyle; // 0x318(0x08)
	struct UCommonTextStyle* IgnoredDisplayNameTextStyle; // 0x320(0x08)
	enum class EFortBrushSize Icon Size; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UFortHero* Host Hero; // 0x330(0x08)
	enum class EFortHeroLoadoutPerkType Perk Type To Represent; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float HoverAlphaValue; // 0x33c(0x04)
	float HoverHorizontalOffset; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct FSlateBrush LockedIcon; // 0x348(0x88)
	struct FSlateBrush WarningIcon; // 0x3d0(0x88)
	bool ShouldDisplayWarning; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct UFortTeamPerkItem* Team Perk; // 0x460(0x08)
	struct UFortAbilityKit* Raw Ability Kit; // 0x468(0x08)

	void SetRawAbilityKit(struct UFortAbilityKit* Ability Kit); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetRawAbilityKit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTeamPerk(struct UFortTeamPerkItem* Team Perk); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetTeamPerk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayUnHover(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayHover(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetShouldDisplayWarning(bool InShouldDisplayWarning); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateLockedImage(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateLockedImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayUnhoverCue(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnhoverCue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayHoverCue(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHoverCue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetShouldDisplayAsIgnored(bool InShouldDisplayAsIgnored); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayAsIgnored // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPerkTypeToRepresent(enum class EFortHeroLoadoutPerkType Perk Type); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetPerkTypeToRepresent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsPerkUnlocked(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.IsPerkUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct UFortAbilityKit* GetPerkAbilityKit(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.GetPerkAbilityKit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetHero(struct UFortHero* Hero); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHero // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextStyles(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateTextStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromState(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromStyle(); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetHoverAlphaValue(float NewValue); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverAlphaValue // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHoverHorizontalOffset(float NewValue); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverHorizontalOffset // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HeroLoadoutPerkDetailRow(int32_t EntryPoint); // Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.ExecuteUbergraph_HeroLoadoutPerkDetailRow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

