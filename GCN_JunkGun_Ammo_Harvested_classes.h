// BlueprintGeneratedClass GCN_JunkGun_Ammo_Harvested.GCN_JunkGun_Ammo_Harvested_C
// Size: 0x47c (Inherited: 0x458)
struct AGCN_JunkGun_Ammo_Harvested_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	float UpdateTimer; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct FTimerHandle UpdateTimer_TH; // 0x468(0x08)
	struct AB_JunkGun_C* WeaponReference; // 0x470(0x08)
	float TimeBeforeCleanUp; // 0x478(0x04)

	void UpdateMuzzleLocation(); // Function GCN_JunkGun_Ammo_Harvested.GCN_JunkGun_Ammo_Harvested_C.UpdateMuzzleLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_JunkGun_Ammo_Harvested.GCN_JunkGun_Ammo_Harvested_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xda7c34
	void Cleanup(); // Function GCN_JunkGun_Ammo_Harvested.GCN_JunkGun_Ammo_Harvested_C.Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_JunkGun_Ammo_Harvested(int32_t EntryPoint); // Function GCN_JunkGun_Ammo_Harvested.GCN_JunkGun_Ammo_Harvested_C.ExecuteUbergraph_GCN_JunkGun_Ammo_Harvested // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

