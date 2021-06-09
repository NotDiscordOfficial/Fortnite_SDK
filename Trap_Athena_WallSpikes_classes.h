// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
// Size: 0xe80 (Inherited: 0xe74)
struct ATrap_Athena_WallSpikes_C : ATrap_Athena_Spikes_C {
	char pad_E74[0x4]; // 0xe74(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe78(0x08)

	void SetSpikePosition(float NewSpikePosition); // Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.SetSpikePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int32_t EntryPoint); // Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.ExecuteUbergraph_Trap_Athena_WallSpikes // (Final|UbergraphFunction) // @ game+0xda7c34
};

