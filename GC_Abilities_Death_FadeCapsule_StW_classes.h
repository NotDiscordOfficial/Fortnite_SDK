// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
// Size: 0x488 (Inherited: 0x458)
struct AGC_Abilities_Death_FadeCapsule_StW_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	float CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x460(0x04)
	enum class ETimelineDirection CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct UTimelineComponent* CapsuleFadeTL; // 0x468(0x08)
	float Starting Min Capsule Shadow Vis; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMesh; // 0x478(0x10)

	void SkeletalMeshSetup(struct AFortPlayerPawn* FortPawn); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.SkeletalMeshSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CapsuleFadeTL__FinishedFunc(); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void CapsuleFadeTL__UpdateFunc(); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32_t EntryPoint); // Function GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

