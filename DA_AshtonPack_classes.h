// BlueprintGeneratedClass DA_AshtonPack.DA_AshtonPack_C
// Size: 0xf08 (Inherited: 0xe88)
struct ADA_AshtonPack_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe88(0x08)
	float PunchPicker; // 0xe90(0x04)
	bool HasLanded; // 0xe94(0x01)
	char pad_E95[0x3]; // 0xe95(0x03)
	struct FGameplayTagContainer AshtonAbilityTags; // 0xe98(0x20)
	struct FGameplayTagContainer GC_JumpTrails; // 0xeb8(0x20)
	struct FGameplayTagContainer GC_SkydiveTrails; // 0xed8(0x20)
	struct FGameplayTag PrimaryFireEventTag; // 0xef8(0x08)
	struct FGameplayTag SecondaryFireEventTag; // 0xf00(0x08)

	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_AshtonPack.DA_AshtonPack_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BPPressSecondaryFire(struct AFortDecoHelper* FortDecoHelper); // Function DA_AshtonPack.DA_AshtonPack_C.BPPressSecondaryFire // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function DA_AshtonPack.DA_AshtonPack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Landed(struct FHitResult Hit); // Function DA_AshtonPack.DA_AshtonPack_C.Landed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DA_AshtonPack(int32_t EntryPoint); // Function DA_AshtonPack.DA_AshtonPack_C.ExecuteUbergraph_DA_AshtonPack // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

