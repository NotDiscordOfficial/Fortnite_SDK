// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
// Size: 0x854 (Inherited: 0x7d0)
struct AGC_Generic_AdrenalineRush_DirectHeal_Latent_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7; // 0x7d8(0x04)
	float HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7; // 0x7dc(0x04)
	enum class ETimelineDirection HealthSweep__Direction_AEAC519D4817261537105281CD9192C7; // 0x7e0(0x01)
	char pad_7E1[0x7]; // 0x7e1(0x07)
	struct UTimelineComponent* HealthSweep; // 0x7e8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Duplicate MIDs; // 0x7f0(0x10)
	struct USkeletalMeshComponent* Duplicate Head; // 0x800(0x08)
	struct USkeletalMeshComponent* Duplicate Body; // 0x808(0x08)
	struct USkeletalMeshComponent* Duplicate Hat; // 0x810(0x08)
	struct USkeletalMeshComponent* Duplicate Backpack; // 0x818(0x08)
	struct USkeletalMeshComponent* Duplicate Charm; // 0x820(0x08)
	struct USkeletalMeshComponent* Duplicate Face; // 0x828(0x08)
	struct FLinearColor Adrenaline Rush Color Outer Direct; // 0x830(0x10)
	struct FLinearColor Adrenaline Rush Color Inner Direct; // 0x840(0x10)
	float Adrenaline Rush WPO Offset; // 0x850(0x04)

	void Toggle Mesh Visibility(bool Visibility); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Toggle Mesh Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Duplicate Meshes(struct AFortPlayerPawn* Player Pawn); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Duplicate Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Adrenaline Rush Visibility(bool Visible, struct AFortPlayerPawn* Player Pawn); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.Set Adrenaline Rush Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HealthSweep__FinishedFunc(); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void HealthSweep__UpdateFunc(); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.HealthSweep__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int32_t EntryPoint); // Function GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

