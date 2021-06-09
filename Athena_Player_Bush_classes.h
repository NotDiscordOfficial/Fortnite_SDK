// BlueprintGeneratedClass Athena_Player_Bush.Athena_Player_Bush_C
// Size: 0x900 (Inherited: 0x8b0)
struct AAthena_Player_Bush_C : ABuildingGameplayActorBalloon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8b0(0x08)
	struct UStaticMeshComponent* SM_Bush; // 0x8b8(0x08)
	struct USceneComponent* Scene; // 0x8c0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x8c8(0x08)
	float TotalDamage; // 0x8d0(0x04)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct FScalableFloat MaxHealth; // 0x8d8(0x28)

	void CheckInstIsOwner(struct AActor* DamageCauser, struct AActor* Owner); // Function Athena_Player_Bush.Athena_Player_Bush_C.CheckInstIsOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Athena_Player_Bush.Athena_Player_Bush_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Player_Bush.Athena_Player_Bush_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Athena_Player_Bush.Athena_Player_Bush_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Player_Bush.Athena_Player_Bush_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void RemoveBush(); // Function Athena_Player_Bush.Athena_Player_Bush_C.RemoveBush // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_Player_Bush(int32_t EntryPoint); // Function Athena_Player_Bush.Athena_Player_Bush_C.ExecuteUbergraph_Athena_Player_Bush // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

