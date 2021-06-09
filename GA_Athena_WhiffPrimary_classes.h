// BlueprintGeneratedClass GA_Athena_WhiffPrimary.GA_Athena_WhiffPrimary_C
// Size: 0xc20 (Inherited: 0xc09)
struct UGA_Athena_WhiffPrimary_C : UGA_Athena_MedConsumable_Parent_C {
	char pad_C09[0x7]; // 0xc09(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc10(0x08)
	struct AFortPawn* Pawn; // 0xc18(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_WhiffPrimary.GA_Athena_WhiffPrimary_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMontageTriggeredPostCommitSuccess(); // Function GA_Athena_WhiffPrimary.GA_Athena_WhiffPrimary_C.OnMontageTriggeredPostCommitSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_WhiffPrimary.GA_Athena_WhiffPrimary_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_WhiffPrimary(int32_t EntryPoint); // Function GA_Athena_WhiffPrimary.GA_Athena_WhiffPrimary_C.ExecuteUbergraph_GA_Athena_WhiffPrimary // (Final|UbergraphFunction) // @ game+0xda7c34
};

