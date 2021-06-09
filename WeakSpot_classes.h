// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// Size: 0x318 (Inherited: 0x280)
struct AWeakSpot_C : ABuildingWeakSpot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* ConnectTheDotsComponent; // 0x288(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x290(0x08)
	struct UCapsuleComponent* CollisionComponent; // 0x298(0x08)
	float ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x2a0(0x04)
	enum class ETimelineDirection ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* ScaleDownParticleTL; // 0x2a8(0x08)
	struct USoundBase* SpawnSound; // 0x2b0(0x08)
	struct FVector Particle Location; // 0x2b8(0x0c)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct USoundBase*> Crack sounds; // 0x2c8(0x10)
	float ConnectTheDotsWidth; // 0x2d8(0x04)
	float ConnectTheDotsDuration; // 0x2dc(0x04)
	float ConnectTheDotsTimeoutFromPreviousHit; // 0x2e0(0x04)
	float ConnectTheDotsDurationScale; // 0x2e4(0x04)
	float ConnectTheDotsMaxDuration; // 0x2e8(0x04)
	float ConnectTheDotsTileScale; // 0x2ec(0x04)
	float ConnectTheDotsMinLength; // 0x2f0(0x04)
	float ConnectTheDotsMaxLength; // 0x2f4(0x04)
	struct UParticleSystem* DamageTemplate; // 0x2f8(0x08)
	struct UParticleSystem* IdleTemplate; // 0x300(0x08)
	struct UMaterialInstanceDynamic* ConnectMID; // 0x308(0x08)
	struct FTimerHandle HideMeshTimer; // 0x310(0x08)

	void UserConstructionScript(); // Function WeakSpot.WeakSpot_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScaleDownParticleTL__FinishedFunc(); // Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ScaleDownParticleTL__UpdateFunc(); // Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnFadeOut(); // Function WeakSpot.WeakSpot_C.OnFadeOut // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStartDirectionEffect(); // Function WeakSpot.WeakSpot_C.OnStartDirectionEffect // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHit(); // Function WeakSpot.WeakSpot_C.OnHit // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HideMesh(); // Function WeakSpot.WeakSpot_C.HideMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WeakSpot(int32_t EntryPoint); // Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

