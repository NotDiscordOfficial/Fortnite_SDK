// SolarisGeneratedClass VerseFortnite_team_stat_values.team_stat_values
// Size: 0xf0 (Inherited: 0x68)
struct Uteam_stat_values : Ustat_container {
	char pad_68[0x80]; // 0x68(0x80)
	int32_t __verse_0x28201082_team; // 0xe8(0x04)
	struct FDelegate __verse_0xF0C17E29_getPlayerStat; // 0x78(0x10)
	struct FDelegate __verse_0xA73274BD_incrementPlayerStat; // 0x88(0x10)
	struct FDelegate __verse_0x10E8467F_setPlayerStat; // 0x68(0x10)

	void setPlayerStat(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x00827935_newValue); // Function VerseFortnite_team_stat_values.team_stat_values.setPlayerStat // (Native|Public|BlueprintCallable) // @ game+0x430c5a0
	char incrementPlayerStat(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x8461104C_increase); // Function VerseFortnite_team_stat_values.team_stat_values.incrementPlayerStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c2ec
	int32_t getPlayerStat(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x8C4546BB_statIndex); // Function VerseFortnite_team_stat_values.team_stat_values.getPlayerStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c098
	void $InitCDO(); // Function VerseFortnite_team_stat_values.team_stat_values.$InitCDO // (None) // @ game+0xda7c34
};

