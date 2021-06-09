// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C
// Size: 0x3d4 (Inherited: 0x288)
struct UHeroLoadoutActiveAbilityDetailRow_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCommonBorder* Border_Body; // 0x290(0x08)
	struct UCommonLazyImage* Image_Tier; // 0x298(0x08)
	struct UImage* ImageLockPerk; // 0x2a0(0x08)
	struct UImage* ImagePerkIcon; // 0x2a8(0x08)
	struct UCommonWidgetSwitcherLegacy* InfoSwitcher; // 0x2b0(0x08)
	struct UKeybindWidget_C* KeybindWidget; // 0x2b8(0x08)
	struct USizeBox* LargeInfo; // 0x2c0(0x08)
	struct UCommonTextBlock* LargeName; // 0x2c8(0x08)
	struct UOverlay* Overlay_Keybind; // 0x2d0(0x08)
	struct USizeBox* PerkIconSizeBox; // 0x2d8(0x08)
	struct UCommonTextBlock* SmallDescription; // 0x2e0(0x08)
	struct UVerticalBox* SmallInfo; // 0x2e8(0x08)
	struct UCommonTextBlock* SmallName; // 0x2f0(0x08)
	struct UVerticalBox* VerticalBox_TierContent; // 0x2f8(0x08)
	bool IncludeName; // 0x300(0x01)
	bool IncludeDescription; // 0x301(0x01)
	bool UseVerboseDescription; // 0x302(0x01)
	char pad_303[0x5]; // 0x303(0x05)
	struct UCommonTextStyle* UnlockedDisplayNameTextStyle; // 0x308(0x08)
	struct UCommonTextStyle* LockedDisplayNameTextStyle; // 0x310(0x08)
	struct UCommonTextStyle* UnlockedDescriptionTextStyle; // 0x318(0x08)
	struct UCommonTextStyle* LockedDescriptionTextStyle; // 0x320(0x08)
	enum class EFortBrushSize Icon Size; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UFortHero* Host Hero; // 0x330(0x08)
	struct UFortAbilityKit* AbilityKit; // 0x338(0x08)
	struct FSlateBrush EmptyBorderBrush; // 0x340(0x88)
	bool ShowKeybind; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	struct FName BoundAction; // 0x3cc(0x08)

	void SetBorderVisibility(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetTierImage(struct TSoftObjectPtr<struct UTexture2D> NewParam); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetTierImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetDisplayState(bool ShowName, bool ShowDescription, bool UseVerboseDescription); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetDisplayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetAbilityKit(struct UFortAbilityKit* AbilityKit); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetAbilityKit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsAbilityUnlocked(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.IsAbilityUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct UFortAbilityKit* GetAbilityKit(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetAbilityKit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetHero(struct UFortHero* Hero); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetHero // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextStyles(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateTextStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromState(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromStyle(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow(int32_t EntryPoint); // Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow // (Final|UbergraphFunction) // @ game+0xda7c34
};

