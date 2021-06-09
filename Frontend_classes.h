// BlueprintGeneratedClass Frontend.Frontend_C
// Size: 0x250 (Inherited: 0x238)
struct AFrontend_C : AFortLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	bool NewLobby; // 0x240(0x01)
	bool NewVar_1; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct AHBOnboardingFlow_C* HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x248(0x08)

	void PlaySpeech(struct FString Filename, int32_t SampleRate, struct USoundWave* AssetFile); // Function Frontend.Frontend_C.PlaySpeech // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMatchStarted(); // Function Frontend.Frontend_C.OnMatchStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EnableTutorial(); // Function Frontend.Frontend_C.EnableTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Frontend(int32_t EntryPoint); // Function Frontend.Frontend_C.ExecuteUbergraph_Frontend // (Final|UbergraphFunction) // @ game+0xda7c34
};

