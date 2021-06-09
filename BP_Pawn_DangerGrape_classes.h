// BlueprintGeneratedClass BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C
// Size: 0x48b8 (Inherited: 0x48a8)
struct ABP_Pawn_DangerGrape_C : ABP_PlayerPawn_Athena_Phoebe_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x48a8(0x08)
	struct UParticleSystemComponent* Effect_Hologram; // 0x48b0(0x08)

	void ReceiveBeginPlay(); // Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlayResOut_2(); // Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.PlayResOut_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Pawn_DangerGrape(int32_t EntryPoint); // Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.ExecuteUbergraph_BP_Pawn_DangerGrape // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

