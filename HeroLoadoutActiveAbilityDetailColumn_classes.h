// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C
// Size: 0x2c0 (Inherited: 0x288)
struct UHeroLoadoutActiveAbilityDetailColumn_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* ImageLockPerk; // 0x290(0x08)
	struct UImage* ImagePerkIcon; // 0x298(0x08)
	struct USizeBox* PerkIconSizeBox; // 0x2a0(0x08)
	enum class EFortBrushSize Icon Size; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UFortHero* Host Hero; // 0x2b0(0x08)
	struct UFortAbilityKit* AbilityKit; // 0x2b8(0x08)

	void SetAbilityKit(struct UFortAbilityKit* AbilityKit); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsAbilityUnlocked(); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct UFortAbilityKit* GetAbilityKit(); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetHero(struct UFortHero* Hero); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromState(); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromStyle(); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int32_t EntryPoint); // Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn // (Final|UbergraphFunction) // @ game+0xda7c34
};

