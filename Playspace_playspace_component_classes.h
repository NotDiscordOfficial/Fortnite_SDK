// SolarisGeneratedClass Playspace_playspace_component.Context_playspace_component$_WaitForMatchEnd
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_playspace_component$_WaitForMatchEnd : Utask {
	struct Uplayspace_component* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Playspace_playspace_component.Context_playspace_component$_WaitForMatchEnd.Update // (Native|Public|HasOutParms) // @ game+0x430bb30
};

// SolarisGeneratedClass Playspace_playspace_component.Context_playspace_component$_WaitForMatchStart
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_playspace_component$_WaitForMatchStart : Utask {
	struct Uplayspace_component* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Playspace_playspace_component.Context_playspace_component$_WaitForMatchStart.Update // (Native|Public|HasOutParms) // @ game+0x430bb54
};

// SolarisGeneratedClass Playspace_playspace_component.Context_playspace_component$_WaitForPlayerAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UContext_playspace_component$_WaitForPlayerAdded : Utask {
	struct Uplayspace_component* _Self; // 0xa8(0x08)
	struct Uplayer_component* _RetVal; // 0xb0(0x08)

	int32_t Update(); // Function Playspace_playspace_component.Context_playspace_component$_WaitForPlayerAdded.Update // (Native|Public|HasOutParms) // @ game+0x430bb9c
};

// SolarisGeneratedClass Playspace_playspace_component.Context_playspace_component$_WaitForPlayerRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UContext_playspace_component$_WaitForPlayerRemoved : Utask {
	struct Uplayspace_component* _Self; // 0xa8(0x08)
	struct Uplayer_component* _RetVal; // 0xb0(0x08)

	int32_t Update(); // Function Playspace_playspace_component.Context_playspace_component$_WaitForPlayerRemoved.Update // (Native|Public|HasOutParms) // @ game+0x430bbe4
};

// SolarisGeneratedClass Playspace_playspace_component.Context_playspace_component$_WaitForSetupComplete
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_playspace_component$_WaitForSetupComplete : Utask {
	struct Uplayspace_component* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Playspace_playspace_component.Context_playspace_component$_WaitForSetupComplete.Update // (Native|Public|HasOutParms) // @ game+0x430bc08
};

// SolarisGeneratedClass Playspace_playspace_component.playspace_component
// Size: 0x130 (Inherited: 0x60)
struct Uplayspace_component : UEntityComponent {
	char pad_60[0x80]; // 0x60(0x80)
	struct FDelegate __verse_0x96D0E740_SetPlayerComponentClass; // 0xe0(0x10)
	struct FDelegate __verse_0x66E55C73__WaitForMatchEnd; // 0xa0(0x10)
	struct FDelegate __verse_0x02C9FA03__WaitForMatchStart; // 0x90(0x10)
	struct FDelegate __verse_0x1A0E3913__WaitForPlayerAdded; // 0xb0(0x10)
	struct FDelegate __verse_0x006B9484__WaitForPlayerRemoved; // 0xc0(0x10)
	struct FDelegate __verse_0x65F3E0B1__WaitForSetupComplete; // 0x80(0x10)
	struct FDelegate __verse_0x758B439E_getPlayerCount; // 0x70(0x10)
	struct FDelegate __verse_0x38D1719A_getPlayers; // 0x60(0x10)
	struct FDelegate __verse_0xB7164D29_setQueueUserForRespawnWhenAdded; // 0xd0(0x10)

	void setQueueUserForRespawnWhenAdded(char __verse_0xD0767376_spawnWhenAdded); // Function Playspace_playspace_component.playspace_component.setQueueUserForRespawnWhenAdded // (Native|Public|BlueprintCallable) // @ game+0x3ce2684
	struct TArray<struct Uplayer_component*> getPlayers(enum class PlayerType __verse_0x72E298E9_Type); // Function Playspace_playspace_component.playspace_component.getPlayers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c0a8
	int32_t GetPlayerCount(enum class PlayerType __verse_0x72E298E9_Type); // Function Playspace_playspace_component.playspace_component.GetPlayerCount // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c088
	struct Utask* _WaitForSetupComplete(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Playspace_playspace_component.playspace_component._WaitForSetupComplete // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _WaitForPlayerRemoved(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Playspace_playspace_component.playspace_component._WaitForPlayerRemoved // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _WaitForPlayerAdded(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Playspace_playspace_component.playspace_component._WaitForPlayerAdded // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _WaitForMatchStart(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Playspace_playspace_component.playspace_component._WaitForMatchStart // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* _WaitForMatchEnd(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Playspace_playspace_component.playspace_component._WaitForMatchEnd // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void SetPlayerComponentClass(struct UObject* __verse_0x3F21770B_ComponentType); // Function Playspace_playspace_component.playspace_component.SetPlayerComponentClass // (Native|Public|BlueprintCallable) // @ game+0x430b950
	void $InitCDO(); // Function Playspace_playspace_component.playspace_component.$InitCDO // (None) // @ game+0xda7c34
};

