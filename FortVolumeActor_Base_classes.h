// BlueprintGeneratedClass FortVolumeActor_Base.FortVolumeActor_Base_C
// Size: 0x650 (Inherited: 0x620)
struct AFortVolumeActor_Base_C : AFortVolume {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComplexPawnOverlapComponent* BoundsMeshComponent; // 0x628(0x08)
	float TransitionTL_Fade_DD1C029E4A879F5D954A60A7D9770B8A; // 0x630(0x04)
	enum class ETimelineDirection TransitionTL__Direction_DD1C029E4A879F5D954A60A7D9770B8A; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)
	struct UTimelineComponent* TransitionTL; // 0x638(0x08)
	struct UMaterialInstanceDynamic* BoundsMeshMID; // 0x640(0x08)
	struct UMaterialInterface* BoundsMeshSourceMaterial; // 0x648(0x08)

	void TransitionTL__FinishedFunc(); // Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TransitionTL__UpdateFunc(); // Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function FortVolumeActor_Base.FortVolumeActor_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects_2(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function FortVolumeActor_Base.FortVolumeActor_Base_C.OnDeathPlayEffects_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortVolumeActor_Base(int32_t EntryPoint); // Function FortVolumeActor_Base.FortVolumeActor_Base_C.ExecuteUbergraph_FortVolumeActor_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

