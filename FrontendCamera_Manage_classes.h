// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
// Size: 0x7f0 (Inherited: 0x7e0)
struct AFrontendCamera_Manage_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UCameraComponent* LoginCamera_1; // 0x7e8(0x08)

	void OnActivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Manage.FrontendCamera_Manage_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FrontendCamera_Manage(int32_t EntryPoint); // Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

