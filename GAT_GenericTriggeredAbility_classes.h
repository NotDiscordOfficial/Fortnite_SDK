// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// Size: 0xb4a (Inherited: 0xa81)
struct UGAT_GenericTriggeredAbility_C : UGAT_TriggeredAbility_C {
	char pad_A81[0x7]; // 0xa81(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa88(0x08)
	struct FGameplayEventData EventData; // 0xa90(0xb0)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xb40(0x08)
	bool isAutoCommitted; // 0xb48(0x01)
	bool isStaminaLockedOut; // 0xb49(0x01)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int32_t EntryPoint); // Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

