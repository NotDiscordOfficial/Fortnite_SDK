// BlueprintGeneratedClass GA_Ranged_Damage_LlamaRoasterV3.GA_Ranged_Damage_LlamaRoasterV3_C
// Size: 0xac8 (Inherited: 0xab1)
struct UGA_Ranged_Damage_LlamaRoasterV3_C : UGA_Ranged_GenericDamage_C {
	char pad_AB1[0x7]; // 0xab1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab8(0x08)
	struct FGameplayTag Gameplay Cue Tag; // 0xac0(0x08)

	void K2_CommitExecute(); // Function GA_Ranged_Damage_LlamaRoasterV3.GA_Ranged_Damage_LlamaRoasterV3_C.K2_CommitExecute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ranged_Damage_LlamaRoasterV3.GA_Ranged_Damage_LlamaRoasterV3_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Ranged_Damage_LlamaRoasterV3(int32_t EntryPoint); // Function GA_Ranged_Damage_LlamaRoasterV3.GA_Ranged_Damage_LlamaRoasterV3_C.ExecuteUbergraph_GA_Ranged_Damage_LlamaRoasterV3 // (Final|UbergraphFunction) // @ game+0xda7c34
};

