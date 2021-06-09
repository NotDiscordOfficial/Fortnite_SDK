// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// Size: 0x3fb0 (Inherited: 0x3ed0)
struct APlayerPawn_Athena_Generic_Parent_C : AFortPlayerPawnAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3ed0(0x08)
	struct TArray<struct UMaterialInterface*> Default Weapon Materials; // 0x3ed8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x3ee8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHatMaterials; // 0x3ef8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x3f08(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x3f18(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x3f28(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x3f38(0x10)
	struct UPostProcessComponent* PlayerPostProcessFX; // 0x3f48(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x3f50(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials_ALL; // 0x3f60(0x10)
	struct FMulticastInlineDelegate ShootingTargetReactToJump; // 0x3f70(0x10)
	struct FMulticastInlineDelegate OnPlayHit; // 0x3f80(0x10)
	struct FMulticastInlineDelegate OnEnteredVehicleDispatcher; // 0x3f90(0x10)
	struct FMulticastInlineDelegate OnExitedVehicleDispatcher; // 0x3fa0(0x10)

	void ReceiveBeginPlay(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredVehicle(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedVehicle(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnJumped(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32_t EntryPoint); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnExitedVehicleDispatcher__DelegateSignature(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredVehicleDispatcher__DelegateSignature(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayHit__DelegateSignature(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShootingTargetReactToJump__DelegateSignature(struct AFortPlayerPawnAthena* JumpingPlayer); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

