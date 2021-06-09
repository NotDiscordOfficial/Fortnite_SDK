// SolarisGeneratedClass VerseFortnite_StormController_storm_controller_component.storm_controller_component
// Size: 0xe8 (Inherited: 0x70)
struct Ustorm_controller_component : UEntityFortniteStormControllerComponent {
	char pad_70[0x60]; // 0x70(0x60)
	float __verse_0xA5122212_startRadius; // 0xd0(0x04)
	float __verse_0xE6BD5D91_boundsRadius; // 0xd4(0x04)
	struct TArray<struct Ustorm_phase*> __verse_0xC2790393_phases; // 0xd8(0x10)
	struct FDelegate __verse_0x58F88F27_exists; // 0xc0(0x10)
	struct FDelegate __verse_0x05BBF0C5_pause; // 0x90(0x10)
	struct FDelegate __verse_0xB82C4366_reset; // 0xa0(0x10)
	struct FDelegate __verse_0xCF04583D_setBattleRoyalePhases; // 0xb0(0x10)
	struct FDelegate __verse_0xA0F336DD_start; // 0x70(0x10)
	struct FDelegate __verse_0xBEE4AD5F_stop; // 0x80(0x10)

	void Stop(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.Stop // (Native|Public|BlueprintCallable) // @ game+0x430c65c
	void Start(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.Start // (Native|Public|BlueprintCallable) // @ game+0x430c628
	void setBattleRoyalePhases(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.setBattleRoyalePhases // (Public|BlueprintCallable) // @ game+0xda7c34
	void Reset(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.Reset // (Public|BlueprintCallable) // @ game+0xda7c34
	void Pause(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.Pause // (Native|Public|BlueprintCallable) // @ game+0x430c368
	char Exists(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.Exists // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bfb8
	void $InitCDO(); // Function VerseFortnite_StormController_storm_controller_component.storm_controller_component.$InitCDO // (None) // @ game+0xda7c34
};

