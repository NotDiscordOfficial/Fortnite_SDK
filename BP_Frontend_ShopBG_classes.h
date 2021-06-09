// BlueprintGeneratedClass BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// Size: 0x2f8 (Inherited: 0x220)
struct ABP_Frontend_ShopBG_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StandardBackgroundPlane1; // 0x228(0x08)
	struct UStaticMeshComponent* StandardBackgroundPlane; // 0x230(0x08)
	struct UStaticMeshComponent* Cone; // 0x238(0x08)
	struct UStaticMeshComponent* Plane; // 0x240(0x08)
	struct USceneComponent* Scene; // 0x248(0x08)
	struct UStaticMeshComponent* BackgroundTexturePlane; // 0x250(0x08)
	struct UStaticMeshComponent* VeryLargeBackgroundPlane; // 0x258(0x08)
	struct USceneComponent* Scene_Signal; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct FRotator Rot_Intro; // 0x270(0x0c)
	struct FRotator NextRot; // 0x27c(0x0c)
	struct FRotator Rot_1; // 0x288(0x0c)
	struct FRotator Rot_3; // 0x294(0x0c)
	float PlayRate; // 0x2a0(0x04)
	struct FRotator Rot_IntroStart; // 0x2a4(0x0c)
	bool bHasEvent; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float YInitial; // 0x2b4(0x04)
	float YEnd; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x2c0(0x08)
	struct ACMSLobbyDirector_C* CMSDirector; // 0x2c8(0x08)
	struct FString BPEnvName; // 0x2d0(0x10)
	bool ShopEntered; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FTimerHandle DonutSeqTimerHandle; // 0x2e8(0x08)
	struct AActor* DomeObstruction; // 0x2f0(0x08)

	void SetDynamicBG(struct UTexture* InTexture); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableDynamicShopBG(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetDynamicEnvironmentEvent(struct FString InPresetEnvName); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DebugShopBG(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleRequestHide(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleItemShopEntered(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleStoreEntered(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetDonut(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Frontend_ShopBG(int32_t EntryPoint); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

