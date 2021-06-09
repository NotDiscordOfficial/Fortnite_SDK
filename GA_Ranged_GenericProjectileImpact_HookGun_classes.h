// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C
// Size: 0xaf0 (Inherited: 0xab1)
struct UGA_Ranged_GenericProjectileImpact_HookGun_C : UGA_Ranged_GenericDamage_C {
	char pad_AB1[0x7]; // 0xab1(0x07)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xab8(0x20)
	struct FGameplayTag RopeActiveTag; // 0xad8(0x08)
	struct UFortQuestItemDefinition* QuestItem; // 0xae0(0x08)
	struct FName ObjBackendName; // 0xae8(0x08)

	void Overflow(struct UFortWorldItem* Item Dropped); // Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.Overflow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_OnEndAbility // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_CommitExecute(); // Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_CommitExecute // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

