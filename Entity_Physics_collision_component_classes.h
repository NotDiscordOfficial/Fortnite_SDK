// SolarisGeneratedClass Entity_Physics_collision_component.collision_component
// Size: 0x240 (Inherited: 0x100)
struct Ucollision_component : UEntityActorCollisionComponent {
	char pad_100[0x40]; // 0x100(0x40)
	struct FDelegate __verse_0xDCAD0856__WaitBeginOverlap; // 0x140(0x10)
	struct FDelegate __verse_0x0B4DAA92__WaitEndOverlap; // 0x150(0x10)
	struct FDelegate __verse_0x280DC8C0__WaitHit; // 0x130(0x10)
	char pad_170[0x60]; // 0x170(0x60)
	struct FDelegate __verse_0x7B2D3AFB_getCollisionProfileName; // 0x1d0(0x10)
	struct FDelegate __verse_0x28BD92C5_getEnabled; // 0x120(0x10)
	struct FDelegate __verse_0x029A140D_getGravityEnabled; // 0x170(0x10)
	struct FDelegate __verse_0xF326902F_getMovable; // 0x1f0(0x10)
	struct FDelegate __verse_0x448BA442_getSendHitEventsOnCollide; // 0x190(0x10)
	struct FDelegate __verse_0x306A3DF8_getSendOverlapEvents; // 0x1b0(0x10)
	struct FDelegate __verse_0x81830FDB_getUseContinuousCollisionDetection; // 0x210(0x10)
	struct FDelegate __verse_0xEE948161_setCollisionProfileName; // 0x1c0(0x10)
	struct FDelegate __verse_0xE8A9FD3D_setCustomDegreeOfFreedomConstrain; // 0x230(0x10)
	struct FDelegate __verse_0x8F64196D_setDegreeOfFreedomContraint; // 0x220(0x10)
	struct FDelegate __verse_0x09FDF4E1_setEnabled; // 0x110(0x10)
	struct FDelegate __verse_0xAE61FFA7_setGravityEnabled; // 0x160(0x10)
	struct FDelegate __verse_0xD266F60B_setMovable; // 0x1e0(0x10)
	struct FDelegate __verse_0xA5E7927B_setSendHitEventsOnCollide; // 0x180(0x10)
	struct FDelegate __verse_0x758DAB91_setSendOverlapEvents; // 0x1a0(0x10)
	struct FDelegate __verse_0x4BA9FB64_setUseContinuousCollisionDetection; // 0x200(0x10)

	void setUseContinuousCollisionDetection(char __verse_0xD79DBFC5_UseCCD); // Function Entity_Physics_collision_component.collision_component.setUseContinuousCollisionDetection // (Native|Public|BlueprintCallable) // @ game+0x43480dc
	void setSendOverlapEvents(char __verse_0xD2175A3C_EnableOverlapEvents); // Function Entity_Physics_collision_component.collision_component.setSendOverlapEvents // (Native|Public|BlueprintCallable) // @ game+0x43480ac
	void setSendHitEventsOnCollide(char __verse_0x9FB5B901_EnableHitEvents); // Function Entity_Physics_collision_component.collision_component.setSendHitEventsOnCollide // (Native|Public|BlueprintCallable) // @ game+0x43480a4
	void setMovable(char __verse_0xD261A0E8_IsMovable); // Function Entity_Physics_collision_component.collision_component.setMovable // (Native|Public|BlueprintCallable) // @ game+0x4348084
	void setGravityEnabled(char __verse_0x322B83BC_EnableGravity); // Function Entity_Physics_collision_component.collision_component.setGravityEnabled // (Native|Public|BlueprintCallable) // @ game+0x434805c
	void SetEnabled(char __verse_0xD50E43B9_InIsEnabled); // Function Entity_Physics_collision_component.collision_component.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x4348044
	void setDegreeOfFreedomContraint(enum class DOFMovementMode __verse_0xC6FC7EEF_MovementMode); // Function Entity_Physics_collision_component.collision_component.setDegreeOfFreedomContraint // (Native|Public|BlueprintCallable) // @ game+0x4348034
	void setCustomDegreeOfFreedomConstrain(struct Uvector3* __verse_0x64488B5B_CustomMovementPlaneNormal); // Function Entity_Physics_collision_component.collision_component.setCustomDegreeOfFreedomConstrain // (Native|Public|BlueprintCallable) // @ game+0x434801c
	void SetCollisionProfileName(struct FString __verse_0x29B886CB_CollisionProfile); // Function Entity_Physics_collision_component.collision_component.SetCollisionProfileName // (Native|Public|BlueprintCallable) // @ game+0x4348014
	char getUseContinuousCollisionDetection(); // Function Entity_Physics_collision_component.collision_component.getUseContinuousCollisionDetection // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347d78
	char getSendOverlapEvents(); // Function Entity_Physics_collision_component.collision_component.getSendOverlapEvents // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347cd0
	char getSendHitEventsOnCollide(); // Function Entity_Physics_collision_component.collision_component.getSendHitEventsOnCollide // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347c78
	char getMovable(); // Function Entity_Physics_collision_component.collision_component.getMovable // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347bd8
	char getGravityEnabled(); // Function Entity_Physics_collision_component.collision_component.getGravityEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347b5c
	char getEnabled(); // Function Entity_Physics_collision_component.collision_component.getEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347b34
	struct FString GetCollisionProfileName(); // Function Entity_Physics_collision_component.collision_component.GetCollisionProfileName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347aa0
	struct Utask* _WaitHit(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Entity_Physics_collision_component.collision_component._WaitHit // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _WaitEndOverlap(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Entity_Physics_collision_component.collision_component._WaitEndOverlap // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _WaitBeginOverlap(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Entity_Physics_collision_component.collision_component._WaitBeginOverlap // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function Entity_Physics_collision_component.collision_component.$InitCDO // (None) // @ game+0xda7c34
};

// SolarisGeneratedClass Entity_Physics_collision_component.Context_collision_component$_WaitBeginOverlap
// Size: 0xb8 (Inherited: 0xa8)
struct UContext_collision_component$_WaitBeginOverlap : Utask {
	struct Ucollision_component* _Self; // 0xa8(0x08)
	struct Uoverlap_result* _RetVal; // 0xb0(0x08)

	int32_t Update(); // Function Entity_Physics_collision_component.Context_collision_component$_WaitBeginOverlap.Update // (Native|Public|HasOutParms) // @ game+0x4347510
};

// SolarisGeneratedClass Entity_Physics_collision_component.Context_collision_component$_WaitEndOverlap
// Size: 0xb8 (Inherited: 0xa8)
struct UContext_collision_component$_WaitEndOverlap : Utask {
	struct Ucollision_component* _Self; // 0xa8(0x08)
	struct Uoverlap_result* _RetVal; // 0xb0(0x08)

	int32_t Update(); // Function Entity_Physics_collision_component.Context_collision_component$_WaitEndOverlap.Update // (Native|Public|HasOutParms) // @ game+0x4347534
};

// SolarisGeneratedClass Entity_Physics_collision_component.Context_collision_component$_WaitHit
// Size: 0xb8 (Inherited: 0xa8)
struct UContext_collision_component$_WaitHit : Utask {
	struct Ucollision_component* _Self; // 0xa8(0x08)
	struct Uhit_result* _RetVal; // 0xb0(0x08)

	int32_t Update(); // Function Entity_Physics_collision_component.Context_collision_component$_WaitHit.Update // (Native|Public|HasOutParms) // @ game+0x4347558
};

