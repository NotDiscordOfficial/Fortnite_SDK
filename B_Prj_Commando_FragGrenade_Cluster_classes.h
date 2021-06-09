// BlueprintGeneratedClass B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
// Size: 0x8c4 (Inherited: 0x880)
struct AB_Prj_Commando_FragGrenade_Cluster_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0x888(0x08)
	struct UAudioComponent* Audio1; // 0x890(0x08)
	struct USoundBase* BounceSound; // 0x898(0x08)
	struct UParticleSystem* P_Explosion; // 0x8a0(0x08)
	struct USoundBase* ExplosionSound; // 0x8a8(0x08)
	struct FVector ExplosionLocation; // 0x8b0(0x0c)
	float MinExplosionDelay; // 0x8bc(0x04)
	float MaxExplosionDelay; // 0x8c0(0x04)

	void OnStop(struct FHitResult Hit); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32_t EntryPoint); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

