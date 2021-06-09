// SolarisGeneratedClass VerseFortnite_fort_playspace_component.Context_fort_playspace_component$_WaitForPlayerEliminated
// Size: 0xb8 (Inherited: 0xa8)
struct UContext_fort_playspace_component$_WaitForPlayerEliminated : Utask {
	struct Ufort_playspace_component* _Self; // 0xa8(0x08)
	struct Uplayer_eliminated_result* _RetVal; // 0xb0(0x08)

	int32_t Update(); // Function VerseFortnite_fort_playspace_component.Context_fort_playspace_component$_WaitForPlayerEliminated.Update // (Native|Public|HasOutParms) // @ game+0x430bbc0
};

// SolarisGeneratedClass VerseFortnite_fort_playspace_component.fort_playspace_component
// Size: 0x168 (Inherited: 0x130)
struct Ufort_playspace_component : Uplayspace_component {
	struct FDelegate __verse_0x5B9D64BD__WaitForPlayerEliminated; // 0x130(0x10)
	char pad_140[0x28]; // 0x140(0x28)

	struct Utask* _WaitForPlayerEliminated(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function VerseFortnite_fort_playspace_component.fort_playspace_component._WaitForPlayerEliminated // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function VerseFortnite_fort_playspace_component.fort_playspace_component.$InitCDO // (None) // @ game+0xda7c34
};

