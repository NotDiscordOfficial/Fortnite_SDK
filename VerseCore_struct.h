// ScriptStruct VerseCore.VUIRuntimeInputMapping
// Size: 0x08 (Inherited: 0x00)
struct FVUIRuntimeInputMapping {
	struct UFunction* VerseFunction; // 0x00(0x08)
};

// ScriptStruct VerseCore.VUIRuntimeEventMapping
// Size: 0x10 (Inherited: 0x00)
struct FVUIRuntimeEventMapping {
	struct UFunction* VerseFunction; // 0x00(0x08)
	struct UFunction* VUIFunction; // 0x08(0x08)
};

// ScriptStruct VerseCore.VUIRuntimeMapping
// Size: 0x30 (Inherited: 0x00)
struct FVUIRuntimeMapping {
	struct UFunction* CallableFunction; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct VerseCore.VUIDynamicEventBindingData
// Size: 0x40 (Inherited: 0x00)
struct FVUIDynamicEventBindingData {
	struct FName FunctionNameToBind; // 0x00(0x08)
	struct FMemberReference ExternalSourceReference; // 0x08(0x38)
};

