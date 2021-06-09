// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// Size: 0xc20 (Inherited: 0xc08)
struct UGA_DefaultPlayer_Death_C : UGAB_GenericDeath_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc08(0x08)
	struct FGameplayTag FadeCapsuleStWCue; // 0xc10(0x08)
	struct FGameplayTag FadeCapsuleAthenaCue; // 0xc18(0x08)

	void PickDeathMontageSection(); // Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32_t EntryPoint); // Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death // (Final|UbergraphFunction) // @ game+0xda7c34
};

