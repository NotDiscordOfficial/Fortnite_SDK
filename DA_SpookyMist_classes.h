// BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C
// Size: 0xec8 (Inherited: 0xe88)
struct ADA_SpookyMist_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe88(0x08)
	struct FTimerHandle CanCancelTimer; // 0xe90(0x08)
	struct FScalableFloat CancelDelay; // 0xe98(0x28)
	struct AFortPlayerPawn* PlayerPawn; // 0xec0(0x08)

	void BPPressSecondaryFire(struct AFortDecoHelper* FortDecoHelper); // Function DA_SpookyMist.DA_SpookyMist_C.BPPressSecondaryFire // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_SpookyMist.DA_SpookyMist_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BPOnUnEquip(); // Function DA_SpookyMist.DA_SpookyMist_C.BPOnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BPReleaseSecondaryFire(struct AFortDecoHelper* FortDecoHelper); // Function DA_SpookyMist.DA_SpookyMist_C.BPReleaseSecondaryFire // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CanCancel(); // Function DA_SpookyMist.DA_SpookyMist_C.CanCancel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function DA_SpookyMist.DA_SpookyMist_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void On DBNO(); // Function DA_SpookyMist.DA_SpookyMist_C.On DBNO // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DA_SpookyMist(int32_t EntryPoint); // Function DA_SpookyMist.DA_SpookyMist_C.ExecuteUbergraph_DA_SpookyMist // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

