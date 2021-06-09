// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// Size: 0xaa9 (Inherited: 0xa99)
struct UGAT_ActiveAbility_Hero_C : UGAT_ActiveAbility_C {
	char pad_A99[0x7]; // 0xa99(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	bool UseHeroLoadoutSystem; // 0xaa8(0x01)

	void CommitAbilityWithEvent(bool Passed); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32_t EntryPoint); // Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero // (Final|UbergraphFunction) // @ game+0xda7c34
};

