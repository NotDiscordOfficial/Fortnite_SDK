// BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C
// Size: 0xf20 (Inherited: 0xe88)
struct ADA_CarminePack_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe88(0x08)
	float PunchPicker; // 0xe90(0x04)
	bool hasLandedAfterBeam; // 0xe94(0x01)
	char pad_E95[0x3]; // 0xe95(0x03)
	struct FGameplayTagContainer Carmine_Ability_Tags; // 0xe98(0x20)
	struct TArray<struct FGameplayTag> StoneTags; // 0xeb8(0x10)
	struct TArray<struct FGameplayTag> GemTags; // 0xec8(0x10)
	int32_t Int; // 0xed8(0x04)
	char pad_EDC[0x4]; // 0xedc(0x04)
	struct FGameplayTagContainer SkydiveCue; // 0xee0(0x20)
	struct FGameplayTagContainer TrailsCue; // 0xf00(0x20)

	void OnRep_StoneTags(); // Function DA_CarminePack.DA_CarminePack_C.OnRep_StoneTags // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_CarminePack.DA_CarminePack_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BPPressSecondaryFire(struct AFortDecoHelper* FortDecoHelper); // Function DA_CarminePack.DA_CarminePack_C.BPPressSecondaryFire // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function DA_CarminePack.DA_CarminePack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Landed(struct FHitResult Hit); // Function DA_CarminePack.DA_CarminePack_C.Landed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindPartchanged(); // Function DA_CarminePack.DA_CarminePack_C.BindPartchanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DA_CarminePack(int32_t EntryPoint); // Function DA_CarminePack.DA_CarminePack_C.ExecuteUbergraph_DA_CarminePack // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

