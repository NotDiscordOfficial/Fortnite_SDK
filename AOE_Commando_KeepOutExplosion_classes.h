// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// Size: 0x978 (Inherited: 0x5a0)
struct AAOE_Commando_KeepOutExplosion_C : AFortAreaOfEffectCloud {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct UAudioComponent* AOE_Audio_Effect; // 0x5a8(0x08)
	struct UParticleSystemComponent* P_Grenade_Linger; // 0x5b0(0x08)
	struct USphereComponent* DamageArea; // 0x5b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5c0(0x08)
	float Radius; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct FSoundAttenuationSettings AOE_Sound_Attenuation_Based_On_Radius; // 0x5d0(0x3a8)

	void OnRep_Radius(); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Send_Info(float Radius); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32_t EntryPoint); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion // (Final|UbergraphFunction) // @ game+0xda7c34
};

