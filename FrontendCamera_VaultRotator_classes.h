// BlueprintGeneratedClass FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
// Size: 0x7f8 (Inherited: 0x7e0)
struct AFrontendCamera_VaultRotator_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UCameraComponent* LoginCamera_1; // 0x7e8(0x08)
	struct AVaultRotator_C* ActiveVaultRotator; // 0x7f0(0x08)

	void SetVaultRotatorLighting(struct FName ItemRotatorTag); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnActivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FrontendCamera_VaultRotator(int32_t EntryPoint); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

