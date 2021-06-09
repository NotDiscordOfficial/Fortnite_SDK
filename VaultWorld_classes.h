// BlueprintGeneratedClass VaultWorld.VaultWorld_C
// Size: 0x2c9 (Inherited: 0x2c0)
struct AVaultWorld_C : AFortItemPreviewWorld {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	bool bIsPrimaryBackgroundActive; // 0x2c8(0x01)

	void GetVaultRotator(struct AVaultRotator_C* VaultRotator); // Function VaultWorld.VaultWorld_C.GetVaultRotator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetupBackground(struct UTexture2D* LoadedBackgroundTexture, struct FTrackDynamicBackground BackgroundInfo); // Function VaultWorld.VaultWorld_C.OnSetupBackground // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnTransitionBackground(bool bPlayForward); // Function VaultWorld.VaultWorld_C.OnTransitionBackground // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function VaultWorld.VaultWorld_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Function VaultWorld.VaultWorld_C.OnUpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTransitionItemDetails(bool bShowItemDetails); // Function VaultWorld.VaultWorld_C.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VaultWorld(int32_t EntryPoint); // Function VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

