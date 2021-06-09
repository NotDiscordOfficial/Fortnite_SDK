// SolarisGeneratedClass Diagnostics_diagnostics.diagnostics
// Size: 0x28 (Inherited: 0x28)
struct Udiagnostics : UObject {

	void logToScreen(enum class diagnostics_log_level __verse_0x5B36F6B3_vLogLevel, struct FString __verse_0x5A4551A8_channel, struct FString __verse_0xD212B012_message, struct UColor* __verse_0x65678AC7_Color, float __verse_0x2EF20D38_duration); // Function Diagnostics_diagnostics.diagnostics.logToScreen // (Native|Static|Public|BlueprintCallable) // @ game+0x4347f5c
	void logMsg(struct FString __verse_0xD212B012_message); // Function Diagnostics_diagnostics.diagnostics.logMsg // (Static|Public|BlueprintCallable) // @ game+0xda7c34
	void logCallstackToScreen(struct UColor* __verse_0x65678AC7_Color, float __verse_0x2EF20D38_duration); // Function Diagnostics_diagnostics.diagnostics.logCallstackToScreen // (Native|Static|Public|BlueprintCallable) // @ game+0x4347f54
	void logCallstack(); // Function Diagnostics_diagnostics.diagnostics.logCallstack // (Native|Static|Public|BlueprintCallable) // @ game+0x203d3e0
	void Log(enum class diagnostics_log_level __verse_0x5B36F6B3_vLogLevel, struct FString __verse_0x5A4551A8_channel, struct FString __verse_0xD212B012_message); // Function Diagnostics_diagnostics.diagnostics.Log // (Native|Static|Public|BlueprintCallable) // @ game+0x4347f64
	void $InitCDO(); // Function Diagnostics_diagnostics.diagnostics.$InitCDO // (None) // @ game+0xda7c34
};

