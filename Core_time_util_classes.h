// SolarisGeneratedClass Core_time_util.Context_time_util$_wait
// Size: 0xac (Inherited: 0xa8)
struct UContext_time_util$_wait : Utask {
	float __verse_0x06F35629_seconds; // 0xa8(0x04)

	int32_t Update(); // Function Core_time_util.Context_time_util$_wait.Update // (Native|Public|HasOutParms) // @ game+0x43475dc
};

// SolarisGeneratedClass Core_time_util.Context_time_util$_waitForever
// Size: 0xa8 (Inherited: 0xa8)
struct UContext_time_util$_waitForever : Utask {

	int32_t Update(); // Function Core_time_util.Context_time_util$_waitForever.Update // (Native|Public|HasOutParms) // @ game+0x43475a0
};

// SolarisGeneratedClass Core_time_util.Context_time_util$_waitNext
// Size: 0xa8 (Inherited: 0xa8)
struct UContext_time_util$_waitNext : Utask {

	int32_t Update(); // Function Core_time_util.Context_time_util$_waitNext.Update // (Native|Public|HasOutParms) // @ game+0x43475b8
};

// SolarisGeneratedClass Core_time_util.time_util
// Size: 0x28 (Inherited: 0x28)
struct Utime_util : UObject {

	float GetServerTime(); // Function Core_time_util.time_util.GetServerTime // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347d0c
	struct Utask* _waitNext(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Core_time_util.time_util._waitNext // (Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _waitForever(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Core_time_util.time_util._waitForever // (Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _wait(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState, float __verse_0x06F35629_seconds); // Function Core_time_util.time_util._wait // (Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function Core_time_util.time_util.$InitCDO // (None) // @ game+0xda7c34
};

