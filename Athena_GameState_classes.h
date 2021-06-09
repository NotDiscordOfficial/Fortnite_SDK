// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// Size: 0x2cd8 (Inherited: 0x2cc0)
struct AAthena_GameState_C : AFortGameStateBR {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2cc0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2cc8(0x08)
	struct USoundBase* Victory_Royale_Sound; // 0x2cd0(0x08)

	void OnWinnerAnnounced(); // Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_GameState(int32_t EntryPoint); // Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState // (Final|UbergraphFunction) // @ game+0xda7c34
};

