// BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
// Size: 0x270 (Inherited: 0x220)
struct AVaultWeaponPlacementHelper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* CUBE; // 0x228(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Sparkle; // 0x230(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Swirl02; // 0x238(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Swirl01; // 0x240(0x08)
	struct UStaticMeshComponent* CharacterPlacement; // 0x248(0x08)
	struct USceneComponent* Root; // 0x250(0x08)
	struct UStaticMesh* Mesh; // 0x258(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x260(0x10)

	void GetFrontendAnimInstance(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeContextEvents(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ItemRez(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VaultWeaponPlacementHelper(int32_t EntryPoint); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper // (Final|UbergraphFunction) // @ game+0xda7c34
	void NewEventDispatcher_0__DelegateSignature(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

