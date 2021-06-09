// BlueprintGeneratedClass GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C
// Size: 0x818 (Inherited: 0x7d0)
struct AGCNL_MegaStorm_DamageRing_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float Timeline_1_StormDamage_20EF97A841793BC1BC17A38E68D1694B; // 0x7d8(0x04)
	enum class ETimelineDirection Timeline_1__Direction_20EF97A841793BC1BC17A38E68D1694B; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct UTimelineComponent* Timeline_2; // 0x7e0(0x08)
	float Timeline_0_StormDamage_217AB728482679C9E1B9D281A03AF2D6; // 0x7e8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_217AB728482679C9E1B9D281A03AF2D6; // 0x7ec(0x01)
	char pad_7ED[0x3]; // 0x7ed(0x03)
	struct UTimelineComponent* Timeline_1; // 0x7f0(0x08)
	struct UParticleSystemComponent* StormDamageFX; // 0x7f8(0x08)
	float RawMagnitude; // 0x800(0x04)
	char pad_804[0x4]; // 0x804(0x04)
	struct ASafeZoneIndicator_C* SafeZoneIndicator; // 0x808(0x08)
	struct USoundBase* OnDamageSound; // 0x810(0x08)

	void Timeline_0__FinishedFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_1__FinishedFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_1__UpdateFunc(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Reset(); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_MegaStorm_DamageRing(int32_t EntryPoint); // Function GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C.ExecuteUbergraph_GCNL_MegaStorm_DamageRing // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

