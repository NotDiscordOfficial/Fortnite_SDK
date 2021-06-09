// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// Size: 0x3408 (Inherited: 0x3340)
struct APlayerPawn_Generic_Parent_C : AFortPlayerPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3340(0x08)
	struct TArray<struct UMaterialInterface*> Default Weapon Materials; // 0x3348(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x3358(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHatMaterials; // 0x3368(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x3378(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x3388(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x3398(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x33a8(0x10)
	struct UPostProcessComponent* PlayerPostProcessFX; // 0x33b8(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x33c0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials_ALL; // 0x33d0(0x10)
	int32_t WaterCounter; // 0x33e0(0x04)
	char pad_33E4[0x4]; // 0x33e4(0x04)
	struct AActor* CurrentWaterMeshActor; // 0x33e8(0x08)
	bool IsInWater; // 0x33f0(0x01)
	char pad_33F1[0x3]; // 0x33f1(0x03)
	float Time when you'll be able to splash again; // 0x33f4(0x04)
	struct FMulticastInlineDelegate OnOverlapWaterVolume; // 0x33f8(0x10)

	void ReceiveBeginPlay(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Entered Water Volume(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Player Creates a Splash(struct FTransform NewTransform); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReinitializeWeaponMaterials(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32_t EntryPoint); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, struct AFortPlayerPawn* Pawn, struct AActor* Water); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

