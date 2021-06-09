// SolarisGeneratedClass Core_pulse_event.Context_pulse_event$_wait
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_pulse_event$_wait : Utask {
	struct Upulse_event* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Core_pulse_event.Context_pulse_event$_wait.Update // (Native|Public|HasOutParms) // @ game+0x430bc2c
};

// SolarisGeneratedClass Core_pulse_event.pulse_event
// Size: 0x80 (Inherited: 0x80)
struct Upulse_event : Uevent {

	void signal(); // Function Core_pulse_event.pulse_event.signal // (Native|Public|BlueprintCallable) // @ game+0x430c5d8
	struct Utask* _wait(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Core_pulse_event.pulse_event._wait // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Upulse_event* Create(); // Function Core_pulse_event.pulse_event.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bef0
	void $InitCDO(); // Function Core_pulse_event.pulse_event.$InitCDO // (None) // @ game+0xda7c34
};

