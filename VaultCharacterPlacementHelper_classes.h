// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// Size: 0x2a0 (Inherited: 0x220)
struct AVaultCharacterPlacementHelper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Floor; // 0x228(0x08)
	struct UStaticMeshComponent* CharacterPlacement; // 0x230(0x08)
	struct USceneComponent* Root; // 0x238(0x08)
	struct FTransform OriginalTransform; // 0x240(0x30)
	struct FVector OffsetTranslate; // 0x270(0x0c)
	struct FRotator OffsetRotate; // 0x27c(0x0c)
	bool Athena; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnZoomLevelUpdated; // 0x290(0x10)

	void UpdatePosition For Camera(enum class EFrontEndCamera FrontEndCamera); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SubGameChanged_Event_1(enum class ESubGame SubGame); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int32_t EntryPoint); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnZoomLevelUpdated__DelegateSignature(float CurrentZoomLevel); // Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

