// SolarisGeneratedClass Core_sticky_event.Context_sticky_event$_wait
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_sticky_event$_wait : Utask {
	struct Usticky_event* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Core_sticky_event.Context_sticky_event$_wait.Update // (Native|Public|HasOutParms) // @ game+0x430bc5c
};

// SolarisGeneratedClass Core_sticky_event.sticky_event
// Size: 0xa8 (Inherited: 0x80)
struct Usticky_event : Uevent {
	char pad_80[0x10]; // 0x80(0x10)
	struct FDelegate __verse_0x38BA290B_clearSignal; // 0x90(0x10)
	struct FDelegate __verse_0x5625867B_isSignaled; // 0x80(0x10)

	void signal(); // Function Core_sticky_event.sticky_event.signal // (Native|Public|BlueprintCallable) // @ game+0x430c5ec
	char isSignaled(); // Function Core_sticky_event.sticky_event.isSignaled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c30c
	void clearSignal(); // Function Core_sticky_event.sticky_event.clearSignal // (Native|Public|BlueprintCallable) // @ game+0x430bd40
	struct Utask* _wait(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Core_sticky_event.sticky_event._wait // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Usticky_event* Create(); // Function Core_sticky_event.sticky_event.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf24
	void $InitCDO(); // Function Core_sticky_event.sticky_event.$InitCDO // (None) // @ game+0xda7c34
};

