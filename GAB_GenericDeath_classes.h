// BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
// Size: 0xc08 (Inherited: 0xa70)
struct UGAB_GenericDeath_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UAnimMontage* DeathMontage; // 0xa78(0x08)
	struct FName DeathMontageSectionName; // 0xa80(0x08)
	struct FVector DeathHitDirection; // 0xa88(0x0c)
	struct FHitResult DeathHitResult; // 0xa94(0x88)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct FGameplayTagContainer DamageTags; // 0xb20(0x20)
	struct FGameplayTagContainer SpawnDroneTags; // 0xb40(0x20)
	struct UAnimMontage* Front; // 0xb60(0x08)
	struct UAnimMontage* Left; // 0xb68(0x08)
	struct UAnimMontage* Right; // 0xb70(0x08)
	struct UAnimMontage* Back; // 0xb78(0x08)
	struct UAnimMontage* Head_Front; // 0xb80(0x08)
	struct UAnimMontage* Head_Left; // 0xb88(0x08)
	struct UAnimMontage* Head_Right; // 0xb90(0x08)
	struct UAnimMontage* Head_Back; // 0xb98(0x08)
	int32_t FrontSectionNameCount; // 0xba0(0x04)
	int32_t LeftSectionNameCount; // 0xba4(0x04)
	int32_t RightSectionNameCount; // 0xba8(0x04)
	int32_t BackSectionNameCount; // 0xbac(0x04)
	int32_t Head_FrontSectionNameCount; // 0xbb0(0x04)
	int32_t Head_LeftSectionNameCount; // 0xbb4(0x04)
	int32_t Head_RightSectionNameCount; // 0xbb8(0x04)
	int32_t Head_BackSectionNameCount; // 0xbbc(0x04)
	struct FName FrontMontageSectionPrefix; // 0xbc0(0x08)
	struct FName BackMontageSectionPrefix; // 0xbc8(0x08)
	struct FName LeftMontageSectionPrefix; // 0xbd0(0x08)
	struct FName RightMontageSectionPrefix; // 0xbd8(0x08)
	struct FName HeadFrontMontageSectionPrefix; // 0xbe0(0x08)
	struct FName HeadBackMontageSectionPrefix; // 0xbe8(0x08)
	struct FName HeadLeftMontageSectionPrefix; // 0xbf0(0x08)
	struct FName HeadRightMontageSectionPrefix; // 0xbf8(0x08)
	struct FGameplayTag TeleportOutCue; // 0xc00(0x08)

	void GetRandomSectionName(int32_t MaxNumberOfSections, struct FName OriginalSectionName, struct FName SectionName); // Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData); // Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PickDeathMontageSection(); // Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_GenericDeath(int32_t EntryPoint); // Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

