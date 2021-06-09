// SolarisGeneratedClass Core_event.Context_event$_wait
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_event$_wait : Utask {
	struct Uevent* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Core_event.Context_event$_wait.Update // (Native|Public|HasOutParms) // @ game+0x430bc2c
};

// SolarisGeneratedClass Core_event.event
// Size: 0x80 (Inherited: 0x28)
struct Uevent : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FDelegate __verse_0xCF07E51C__wait; // 0x38(0x10)
	struct FDelegate __verse_0xADC8B0D2_getWaitCount; // 0x28(0x10)
	struct FDelegate __verse_0x69276CE3_signal; // 0x48(0x10)
	char pad_68[0x18]; // 0x68(0x18)

	void signal(); // Function Core_event.event.signal // (Native|Public|BlueprintCallable) // @ game+0x430c5d8
	int32_t getWaitCount(); // Function Core_event.event.getWaitCount // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c2c0
	struct Utask* _wait(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Core_event.event._wait // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function Core_event.event.$InitCDO // (None) // @ game+0xda7c34
};

