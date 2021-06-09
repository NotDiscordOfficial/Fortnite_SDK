// SolarisGeneratedClass Entity_Physics_physics_trace.Context_physics_trace$_WaitPhysicsTrace
// Size: 0xc0 (Inherited: 0xa8)
struct UContext_physics_trace$_WaitPhysicsTrace : Utask {
	struct Uphysics_trace* _Self; // 0xa8(0x08)
	struct TArray<struct Uhit_result*> _RetVal; // 0xb0(0x10)

	int32_t Update(); // Function Entity_Physics_physics_trace.Context_physics_trace$_WaitPhysicsTrace.Update // (Native|Public|HasOutParms) // @ game+0x434757c
};

// SolarisGeneratedClass Entity_Physics_physics_trace.physics_trace
// Size: 0xe0 (Inherited: 0x28)
struct Uphysics_trace : UObject {
	struct FDelegate __verse_0x1201D2BA__WaitPhysicsTrace; // 0x28(0x10)
	struct FDelegate __verse_0x20A1E9D0_initPhysicsTrace; // 0x38(0x10)
	char pad_48[0x98]; // 0x48(0x98)

	void initPhysicsTrace(struct UObject* __verse_0x9866B8E7_contextObject, enum class PhysicsTraceCategory __verse_0x8D8FA293_traceCategory, enum class PhysicsTraceType __verse_0xA0F73428_traceType, enum class PhysicsTraceShape __verse_0x30682E54_traceShape, enum class PhysicsTraceChannel __verse_0x54D810ED_traceChannel, struct Uvector3* __verse_0xA0F336DD_start, struct Uvector3* __verse_0xAA0F01BA_end, char __verse_0x598FB218_ignoreCallingEntity, struct Uvector3* __verse_0x55F5C86E_traceExtent, float __verse_0x159DEA67_traceRadius, struct FString __verse_0xD1A8CE6F_profileName); // Function Entity_Physics_physics_trace.physics_trace.initPhysicsTrace // (Native|Public|BlueprintCallable) // @ game+0x4347e68
	struct Utask* _WaitPhysicsTrace(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Entity_Physics_physics_trace.physics_trace._WaitPhysicsTrace // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function Entity_Physics_physics_trace.physics_trace.$InitCDO // (None) // @ game+0xda7c34
};

