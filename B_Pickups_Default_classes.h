// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// Size: 0x4c8 (Inherited: 0x49c)
struct AB_Pickups_Default_C : AB_Pickups_Parent_C {
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UStaticMeshComponent* sm_rare_pickup; // 0x4a8(0x08)
	struct USpotLightComponent* SpotLight; // 0x4b0(0x08)
	struct UStaticMeshComponent* Background; // 0x4b8(0x08)
	struct UFXSystemComponent* ParticleSystem; // 0x4c0(0x08)

	void Set Initial BKGD Param(struct UMaterialInstanceDynamic* Mid); // Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup Light(); // Function B_Pickups_Default.B_Pickups_Default_C.Setup Light // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTossed(); // Function B_Pickups_Default.B_Pickups_Default_C.OnTossed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPickedUp(struct AFortPawn* PickupTarget); // Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HideBackgroundAndSpotlight(); // Function B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Pickups_Default(int32_t EntryPoint); // Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

