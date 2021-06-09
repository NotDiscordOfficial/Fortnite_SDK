// SolarisGeneratedClass VerseFortnite_stat_container.stat_container
// Size: 0x68 (Inherited: 0x28)
struct Ustat_container : UObject {
	struct FDelegate __verse_0xC04E4DC9_getStatValue; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct FDelegate __verse_0xC5FEDAC9_incrementStat; // 0x48(0x10)
	struct FDelegate __verse_0xF23C7652_setStatValue; // 0x38(0x10)

	char SetStatValue(int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x00827935_newValue); // Function VerseFortnite_stat_container.stat_container.SetStatValue // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c5b8
	char incrementStat(int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x38A8B410_incrementAmount); // Function VerseFortnite_stat_container.stat_container.incrementStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c2f4
	int32_t GetStatValue(int32_t __verse_0x8C4546BB_statIndex); // Function VerseFortnite_stat_container.stat_container.GetStatValue // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c070
	void $InitCDO(); // Function VerseFortnite_stat_container.stat_container.$InitCDO // (None) // @ game+0xda7c34
};

