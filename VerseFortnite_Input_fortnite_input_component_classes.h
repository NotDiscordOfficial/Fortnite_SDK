// SolarisGeneratedClass VerseFortnite_Input_fortnite_input_component.Context_fortnite_input_component$_WaitForPlayerAction
// Size: 0xe0 (Inherited: 0xa8)
struct UContext_fortnite_input_component$_WaitForPlayerAction : Utask {
	struct Uplayer_component* __verse_0xE5E3B371_Player; // 0xa8(0x08)
	struct FString __verse_0x38D9A616_Name; // 0xb0(0x10)
	struct FString __verse_0xE109D7CB_Description; // 0xc0(0x10)
	struct TArray<enum class verse_key> __verse_0xC3087AE2_Keys; // 0xd0(0x10)

	int32_t Update(); // Function VerseFortnite_Input_fortnite_input_component.Context_fortnite_input_component$_WaitForPlayerAction.Update // (Native|Public|HasOutParms) // @ game+0x430bb78
};

// SolarisGeneratedClass VerseFortnite_Input_fortnite_input_component.fortnite_input_component
// Size: 0x2f0 (Inherited: 0x250)
struct Ufortnite_input_component : UVerseFortniteInputComponentBase {
	char pad_250[0xa0]; // 0x250(0xa0)

	struct Utask* _WaitForPlayerAction(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState, struct Uplayer_component* __verse_0xE5E3B371_Player, struct FString __verse_0x38D9A616_Name, struct FString __verse_0xE109D7CB_Description, struct TArray<enum class verse_key> __verse_0xC3087AE2_Keys); // Function VerseFortnite_Input_fortnite_input_component.fortnite_input_component._WaitForPlayerAction // (Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void RemoveActionBindingForPlayer(struct Uplayer_component* __verse_0xE5E3B371_Player, struct FString __verse_0x38D9A616_Name); // Function VerseFortnite_Input_fortnite_input_component.fortnite_input_component.RemoveActionBindingForPlayer // (Native|Static|Public|BlueprintCallable) // @ game+0x430b894
	void ClearActionBindingsForPlayer(struct Uplayer_component* __verse_0xE5E3B371_Player); // Function VerseFortnite_Input_fortnite_input_component.fortnite_input_component.ClearActionBindingsForPlayer // (Native|Static|Public|BlueprintCallable) // @ game+0x430b614
	void AddActionBindingForPlayer(struct Uplayer_component* __verse_0xE5E3B371_Player, struct FString __verse_0x38D9A616_Name, struct FString __verse_0xE109D7CB_Description, struct TArray<enum class verse_key> __verse_0xC3087AE2_Keys, struct FDelegate __verse_0x4ACB63DF_Callback); // Function VerseFortnite_Input_fortnite_input_component.fortnite_input_component.AddActionBindingForPlayer // (Native|Static|Public|BlueprintCallable) // @ game+0x430b5d0
	void $InitCDO(); // Function VerseFortnite_Input_fortnite_input_component.fortnite_input_component.$InitCDO // (None) // @ game+0xda7c34
};

