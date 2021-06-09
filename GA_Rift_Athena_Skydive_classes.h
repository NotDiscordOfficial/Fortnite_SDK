// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// Size: 0xb58 (Inherited: 0xa70)
struct UGA_Rift_Athena_Skydive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UAnimMontage* FallingAnimation; // 0xa78(0x08)
	float Hangtimee; // 0xa80(0x04)
	char pad_A84[0x4]; // 0xa84(0x04)
	struct USkeletalMeshComponent* VehicleSkelMesh; // 0xa88(0x08)
	struct FScalableFloat HangTime; // 0xa90(0x28)
	struct FGameplayTag EventTag; // 0xab8(0x08)
	struct FScalableFloat KickFromVehicle?; // 0xac0(0x28)
	struct USoundBase* LocalPlayerSound; // 0xae8(0x08)
	struct UGameplayEffect* GameplayCueGE; // 0xaf0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xaf8(0x08)
	bool bHolstered; // 0xb00(0x01)
	char pad_B01[0x3]; // 0xb01(0x03)
	struct FName RiftSkydiveHolster; // 0xb04(0x08)
	struct FVector ImpulseStrength; // 0xb0c(0x0c)
	bool bNeedsInputEnable; // 0xb18(0x01)
	char pad_B19[0x7]; // 0xb19(0x07)
	struct FTimerHandle SafetyTimer; // 0xb20(0x08)
	struct FVector NewVar_1; // 0xb28(0x0c)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct FGameplayTagContainer UnblockTagsIfPassenger; // 0xb38(0x20)

	void RemoveSkydivingGameplayEffect(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.RemoveSkydivingGameplayEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCancelled_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCompleted_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_C39EFBAB480B446A6927009E5953EC41(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.Added_C39EFBAB480B446A6927009E5953EC41 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetPlayerToSkydive(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.SetPlayerToSkydive // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDestroyed_Event_1(struct AActor* DestroyedActor); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnDestroyed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnEnteredWater(struct AFortPlayerPawn* FortPlayerPawn); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnLanded(struct FHitResult Hit); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleForceEnd(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.HandleForceEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int32_t EntryPoint); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

