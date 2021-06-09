// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
// Size: 0x2ac (Inherited: 0x220)
struct ABP_FortniteLobbyLightSwitcher_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct ADirectionalLight* DirectionLight; // 0x230(0x08)
	struct ASkyLight* SkyLight; // 0x238(0x08)
	struct TArray<struct APointLight*> Pointlights; // 0x240(0x10)
	struct AExponentialHeightFog* ExponentialHeightFog; // 0x250(0x08)
	struct ADirectionalLight* DirectionalLight_LowDetailMode; // 0x258(0x08)
	struct TArray<struct AEmitter*> ParticleSystems; // 0x260(0x10)
	bool IsActive; // 0x270(0x01)
	bool DebugLOWQualityLighting; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct ASkyLight* SkyLight_LowDetailMode; // 0x278(0x08)
	struct AExponentialHeightFog* ExponentialHeightfog_LowDetailMode; // 0x280(0x08)
	bool LOW_FX_Setting_Use_MobileLighting; // 0x288(0x01)
	bool IsLightalreadyActive; // 0x289(0x01)
	char pad_28A[0x2]; // 0x28a(0x02)
	struct FLinearColor MPC-ManualSunlightVector; // 0x28c(0x10)
	struct FLinearColor MPC-ManualSunlightColor; // 0x29c(0x10)

	void SetVisiblityofDetailSpecificMeshes(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofDetailSpecificMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetVisiblityofSceneLighting(bool Activate); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EnableLobbySetLighting(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisableLobbySetLighting(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSettings(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32_t EntryPoint); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

