// BlueprintGeneratedClass BP_SafeZoneStorm.BP_SafeZoneStorm_C
// Size: 0x393 (Inherited: 0x248)
struct ABP_SafeZoneStorm_C : AFortSafeZoneStorm {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UStaticMeshComponent* SM_CloudBottomBlend; // 0x250(0x08)
	struct UStaticMeshComponent* SM_CloudRing_Mobile; // 0x258(0x08)
	struct UStaticMeshComponent* SM_CloudRingTopBlend; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Storm_ScreenEffect; // 0x268(0x08)
	struct UPostProcessComponent* PostProcess; // 0x270(0x08)
	struct UBoxComponent* Box; // 0x278(0x08)
	struct UStaticMeshComponent* CloudsOuterRing; // 0x280(0x08)
	struct UStaticMeshComponent* StaticMesh10; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMesh9; // 0x290(0x08)
	struct UStaticMeshComponent* StaticMesh8; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMesh7; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMesh6; // 0x2a8(0x08)
	struct UStaticMeshComponent* StaticMesh5; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh4; // 0x2b8(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x2c0(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x2c8(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2d0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2d8(0x08)
	struct UStaticMeshComponent* StormQuadMain16; // 0x2e0(0x08)
	struct UStaticMeshComponent* StormQuadMain15; // 0x2e8(0x08)
	struct UStaticMeshComponent* StormQuadMain1; // 0x2f0(0x08)
	struct UStaticMeshComponent* StormQuadMain13; // 0x2f8(0x08)
	struct UStaticMeshComponent* StormQuadMain12; // 0x300(0x08)
	struct UStaticMeshComponent* StormQuadMain11; // 0x308(0x08)
	struct UStaticMeshComponent* StormQuadMain10; // 0x310(0x08)
	struct UStaticMeshComponent* StormQuadMain9; // 0x318(0x08)
	struct UStaticMeshComponent* StormQuadMain8; // 0x320(0x08)
	struct UStaticMeshComponent* StormQuadMain7; // 0x328(0x08)
	struct UStaticMeshComponent* StormQuadMain6; // 0x330(0x08)
	struct UStaticMeshComponent* StormQuadMain5; // 0x338(0x08)
	struct UStaticMeshComponent* StormQuadMain4; // 0x340(0x08)
	struct UStaticMeshComponent* StormQuadMain3; // 0x348(0x08)
	struct UStaticMeshComponent* StormQuadMain2; // 0x350(0x08)
	struct UStaticMeshComponent* StormQuadMain14; // 0x358(0x08)
	struct UStaticMeshComponent* StormRings; // 0x360(0x08)
	struct UStaticMeshComponent* StormQuadMain; // 0x368(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x370(0x08)
	bool MobileMode; // 0x378(0x01)
	bool ShowStorm; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	float StormSize; // 0x37c(0x04)
	float StormBias; // 0x380(0x04)
	struct FVector StormCenter; // 0x384(0x0c)
	bool UseNewStorm; // 0x390(0x01)
	bool UseSeason11Storm; // 0x391(0x01)
	bool UseVolumetricStorm; // 0x392(0x01)

	void UserConstructionScript(); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void MobileClouds(bool Mobile); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowClouds(float Amount); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowStormScreenEffect(bool Show); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_SafeZoneStorm(int32_t EntryPoint); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm // (Final|UbergraphFunction) // @ game+0xda7c34
};

