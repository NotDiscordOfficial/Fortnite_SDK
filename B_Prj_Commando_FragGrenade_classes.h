// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// Size: 0xb78 (Inherited: 0x880)
struct AB_Prj_Commando_FragGrenade_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x888(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0x890(0x08)
	struct UStaticMeshComponent* Mesh; // 0x898(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0x8a0(0x08)
	struct UParticleSystemComponent* Effect_Distance; // 0x8a8(0x08)
	struct UParticleSystem* P_Explosion; // 0x8b0(0x08)
	struct USoundBase* Cue_DistantSound; // 0x8b8(0x08)
	struct USoundBase* Cue_CloseSound; // 0x8c0(0x08)
	float ExplosionRadius; // 0x8c8(0x04)
	int32_t NumberOfBouncesTillExplode; // 0x8cc(0x04)
	int32_t CurrentNumberOfBounces; // 0x8d0(0x04)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct USoundBase* Cue_GrenadeFuseSound; // 0x8d8(0x08)
	float BouncePawnAgainstPawnGravityScale; // 0x8e0(0x04)
	char pad_8E4[0x4]; // 0x8e4(0x04)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0x8e8(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0x8f0(0x08)
	int32_t MaxClusterGrenades; // 0x8f8(0x04)
	struct FGameplayTag EC_ClusterExplosion; // 0x8fc(0x08)
	bool bHasCluster; // 0x904(0x01)
	char pad_905[0x3]; // 0x905(0x03)
	struct AFortProjectileBase* Prj_Cluster; // 0x908(0x08)
	struct FFortGameplayEffectContainerSpec ClusterContainerSpec; // 0x910(0xb8)
	bool bHasKeepOut; // 0x9c8(0x01)
	char pad_9C9[0x7]; // 0x9c9(0x07)
	struct FFortGameplayEffectContainerSpec KeepOutContainerSpec; // 0x9d0(0xb8)
	struct AFortAreaOfEffectCloud* AOE_KeepOut; // 0xa88(0x08)
	bool bHasClusterTactical; // 0xa90(0x01)
	char pad_A91[0x7]; // 0xa91(0x07)
	struct FFortGameplayEffectContainerSpec Cluster_Tactical_Container_Spec; // 0xa98(0xb8)
	struct FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0xb50(0x20)
	struct FGameplayTag T_Event_GrenadeExploded; // 0xb70(0x08)

	void SpawnKeepOut(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnClusters(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float CalcGrenadeSpeed(float Angle); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnRep_StoredHit(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Stop_Rotation(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void On Destroy Grenade(struct AActor* DestroyedActor); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind Destroy Grenade(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Force On Exploded Effects(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Unbind Destroy Grenade(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerDoExplsoion(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CheckKeepOutAndCluster(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SendExplodedEvent(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SendExplodedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32_t EntryPoint); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

