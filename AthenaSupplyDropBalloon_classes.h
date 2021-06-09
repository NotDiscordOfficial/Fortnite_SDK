// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// Size: 0xbb8 (Inherited: 0xb78)
struct AAthenaSupplyDropBalloon_C : AFortAthenaSupplyDropBalloon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb78(0x08)
	struct UFortHealthBarComponent* FortHealthBar; // 0xb80(0x08)
	bool CrateDestroyed; // 0xb88(0x01)
	char pad_B89[0x7]; // 0xb89(0x07)
	struct FMulticastInlineDelegate OnBalloonDestroyed; // 0xb90(0x10)
	struct USoundBase* BalloonPopSound; // 0xba0(0x08)
	struct UParticleSystem* BalloonPopFX; // 0xba8(0x08)
	struct UGameplayEffect* GE_DamageReduction; // 0xbb0(0x08)

	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int32_t EntryPoint); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ExecuteUbergraph_AthenaSupplyDropBalloon // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnBalloonDestroyed__DelegateSignature(); // Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnBalloonDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

