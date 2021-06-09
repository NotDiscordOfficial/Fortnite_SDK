// SolarisGeneratedClass VUI_vui_base.vui_base
// Size: 0x188 (Inherited: 0x28)
struct Uvui_base : UObject {
	struct FDelegate __verse_0xFBB6266A_BeginPlay; // 0x28(0x10)
	char pad_38[0x90]; // 0x38(0x90)
	struct FDelegate __verse_0xE3437F5C_FindObjectOfType; // 0xc8(0x10)
	struct FDelegate __verse_0xD305C55D_FindObjectsOfType; // 0xd8(0x10)
	char pad_E8[0x60]; // 0xe8(0x60)
	struct FDelegate __verse_0x933BF039_GetAngularVelocity; // 0x148(0x10)
	struct FDelegate __verse_0xA6205E7A_GetPosition; // 0xe8(0x10)
	struct FDelegate __verse_0x76CC58EE_GetRotation; // 0x108(0x10)
	struct FDelegate __verse_0xDA4849D2_GetVelocity; // 0x128(0x10)
	struct FDelegate __verse_0xD35E27C7_OnPlayerConnect; // 0xa8(0x10)
	struct FDelegate __verse_0x4BF80EE9_OnPlayerDisconnect; // 0xb8(0x10)
	struct FDelegate __verse_0xCE61550C_SetAngularVelocity; // 0x158(0x10)
	struct FDelegate __verse_0xCD4DEE1D_SetPosition; // 0xf8(0x10)
	struct FDelegate __verse_0x1DA1E889_SetRotation; // 0x118(0x10)
	struct FDelegate __verse_0xB125F9B5_SetVelocity; // 0x138(0x10)
	struct FDelegate __verse_0x35571AFB_SpawnAt; // 0x78(0x10)
	struct FDelegate __verse_0xF94F40BE_SpawnVUI; // 0x68(0x10)
	struct FDelegate __verse_0xB5CD05C2_SphereOverlap; // 0x168(0x10)
	struct FDelegate __verse_0x754E6BF7_Tick; // 0x38(0x10)
	struct FDelegate __verse_0x10803341_VUI_Event; // 0x48(0x10)
	struct FDelegate __verse_0xBBAB5BB2_VUI_Input; // 0x58(0x10)
	struct FDelegate __verse_0x96D523DB_VUI_OnPossess; // 0x88(0x10)
	struct FDelegate __verse_0x93C3FA4C_VUI_OnUnpossess; // 0x98(0x10)

	void VUI_OnUnpossess(struct Uvui_player_controller* __verse_0x995129C4_Controller); // Function VUI_vui_base.vui_base.VUI_OnUnpossess // (Public|BlueprintCallable) // @ game+0xda7c34
	void VUI_OnPossess(struct Uvui_player_controller* __verse_0x995129C4_Controller); // Function VUI_vui_base.vui_base.VUI_OnPossess // (Public|BlueprintCallable) // @ game+0xda7c34
	void VUI_Input(); // Function VUI_vui_base.vui_base.VUI_Input // (Native|Public|BlueprintCallable) // @ game+0x203d3e0
	void VUI_Event(); // Function VUI_vui_base.vui_base.VUI_Event // (Native|Public|BlueprintCallable) // @ game+0x203d3e0
	void Tick(float __verse_0xE346DED5_dt); // Function VUI_vui_base.vui_base.Tick // (Public|BlueprintCallable) // @ game+0xda7c34
	struct TArray<struct Uvui_base*> SphereOverlap(struct Uvector3* __verse_0xA82B0967_Position, float __verse_0xE34F9FAC_Radius, struct UObject* __verse_0x72E298E9_Type); // Function VUI_vui_base.vui_base.SphereOverlap // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43474b8
	void SpawnVUI(struct Uvui_base* __verse_0x5C20106F_v); // Function VUI_vui_base.vui_base.SpawnVUI // (Native|Public|BlueprintCallable) // @ game+0x43474b0
	void SpawnAt(struct Uvui_base* __verse_0x5C20106F_v, struct Uvector3* __verse_0x7AF6BB5D_position, struct Uvector3* __verse_0xAA1ABDC9_rotation); // Function VUI_vui_base.vui_base.SpawnAt // (Native|Public|BlueprintCallable) // @ game+0x4347498
	void SetVelocity(struct Uvector3* __verse_0x069EACF5_velocity); // Function VUI_vui_base.vui_base.SetVelocity // (Native|Public|BlueprintCallable) // @ game+0x4347488
	void SetRotation(struct Uvector3* __verse_0xAA1ABDC9_rotation); // Function VUI_vui_base.vui_base.SetRotation // (Native|Public|BlueprintCallable) // @ game+0x4347480
	void SetPosition(struct Uvector3* __verse_0x7AF6BB5D_position); // Function VUI_vui_base.vui_base.SetPosition // (Native|Public|BlueprintCallable) // @ game+0x4347478
	void SetAngularVelocity(struct Uvector3* __verse_0xAA1ABDC9_rotation); // Function VUI_vui_base.vui_base.SetAngularVelocity // (Native|Public|BlueprintCallable) // @ game+0x4347470
	void OnPlayerDisconnect(struct Uvui_player_controller* __verse_0x995129C4_Controller); // Function VUI_vui_base.vui_base.OnPlayerDisconnect // (Public|BlueprintCallable) // @ game+0xda7c34
	void OnPlayerConnect(struct Uvui_player_controller* __verse_0x995129C4_Controller); // Function VUI_vui_base.vui_base.OnPlayerConnect // (Public|BlueprintCallable) // @ game+0xda7c34
	struct Uvector3* GetVelocity(); // Function VUI_vui_base.vui_base.GetVelocity // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347394
	struct Uvector3* GetRotation(); // Function VUI_vui_base.vui_base.GetRotation // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347308
	struct Uvector3* GetPosition(); // Function VUI_vui_base.vui_base.GetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434727c
	struct Uvector3* GetAngularVelocity(); // Function VUI_vui_base.vui_base.GetAngularVelocity // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43470f8
	struct TArray<struct Uvui_base*> FindObjectsOfType(struct UObject* __verse_0x72E298E9_Type); // Function VUI_vui_base.vui_base.FindObjectsOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43470d0
	struct Uvui_base* FindObjectOfType(struct UObject* __verse_0x72E298E9_Type); // Function VUI_vui_base.vui_base.FindObjectOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43470c8
	void BeginPlay(); // Function VUI_vui_base.vui_base.BeginPlay // (Public|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function VUI_vui_base.vui_base.$InitCDO // (None) // @ game+0xda7c34
};

