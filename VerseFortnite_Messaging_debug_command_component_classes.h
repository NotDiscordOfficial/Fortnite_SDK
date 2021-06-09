// SolarisGeneratedClass VerseFortnite_Messaging_debug_command_component.Context_debug_command_component$_WaitForCommand
// Size: 0xd0 (Inherited: 0xa8)
struct UContext_debug_command_component$_WaitForCommand : Utask {
	struct Udebug_command_component* _Self; // 0xa8(0x08)
	struct FString __verse_0x9494AC60_CommandId; // 0xb0(0x10)
	struct FString _RetVal; // 0xc0(0x10)

	int32_t Update(); // Function VerseFortnite_Messaging_debug_command_component.Context_debug_command_component$_WaitForCommand.Update // (Native|Public|HasOutParms) // @ game+0x430bafc
};

// SolarisGeneratedClass VerseFortnite_Messaging_debug_command_component.debug_command_component
// Size: 0xe0 (Inherited: 0x60)
struct Udebug_command_component : UEntityComponent {
	struct FDelegate __verse_0x6436A933__WaitForCommand; // 0x60(0x10)
	char pad_70[0x70]; // 0x70(0x70)

	struct Utask* _WaitForCommand(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState, struct FString __verse_0x9494AC60_CommandId); // Function VerseFortnite_Messaging_debug_command_component.debug_command_component._WaitForCommand // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void $InitCDO(); // Function VerseFortnite_Messaging_debug_command_component.debug_command_component.$InitCDO // (None) // @ game+0xda7c34
};

