// BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C
// Size: 0x7f8 (Inherited: 0x7e0)
struct ALoginCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x7e8(0x08)
	struct UCameraComponent* LoginCamera_1; // 0x7f0(0x08)

	void OnActivated(struct AFortPlayerController* PlayerController); // Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint); // Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

