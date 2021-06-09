// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// Size: 0xb72 (Inherited: 0xaa9)
struct UGAT_CommandoActiveAbility_C : UGAT_ActiveAbility_Hero_C {
	char pad_AA9[0x7]; // 0xaa9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab0(0x08)
	struct FGameplayEventData Event Data; // 0xab8(0xb0)
	struct AFortPawn* CommandoPlayerPawn; // 0xb68(0x08)
	bool isAutoCommitted; // 0xb70(0x01)
	bool isStaminaLockedOut; // 0xb71(0x01)

	void K2_ActivateAbility(); // Function GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int32_t EntryPoint); // Function GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.ExecuteUbergraph_GAT_CommandoActiveAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

