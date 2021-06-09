// SolarisGeneratedClass VerseFortnite_match_stats.match_stats
// Size: 0x158 (Inherited: 0x68)
struct Umatch_stats : Ustat_container {
	char pad_68[0x90]; // 0x68(0x90)
	struct FDelegate __verse_0xB37CBF7C_Reset; // 0xf8(0x10)
	struct FDelegate __verse_0x34CF11D1_getMatchStat; // 0xd8(0x10)
	struct FDelegate __verse_0xF0C17E29_getPlayerStat; // 0x78(0x10)
	struct FDelegate __verse_0x61A5A2FA_getTeamStat; // 0xa8(0x10)
	struct FDelegate __verse_0xA75330B9_incrementMatchStat; // 0xe8(0x10)
	struct FDelegate __verse_0xA73274BD_incrementPlayerStat; // 0x88(0x10)
	struct FDelegate __verse_0xE5D63029_incrementTeamStat; // 0xb8(0x10)
	struct FDelegate __verse_0x06BD2A4A_setMatchStat; // 0xc8(0x10)
	struct FDelegate __verse_0x10E8467F_setPlayerStat; // 0x68(0x10)
	struct FDelegate __verse_0x0AC8129D_setTeamStat; // 0x98(0x10)

	void setTeamStat(int32_t __verse_0x28201082_team, int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x00827935_newValue); // Function VerseFortnite_match_stats.match_stats.setTeamStat // (Native|Public|BlueprintCallable) // @ game+0x430c5c0
	void setPlayerStat(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x00827935_newValue); // Function VerseFortnite_match_stats.match_stats.setPlayerStat // (Native|Public|BlueprintCallable) // @ game+0x430c598
	void setMatchStat(int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x00827935_newValue); // Function VerseFortnite_match_stats.match_stats.setMatchStat // (Native|Public|BlueprintCallable) // @ game+0x430c588
	char incrementTeamStat(int32_t __verse_0x28201082_team, int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x8461104C_increase); // Function VerseFortnite_match_stats.match_stats.incrementTeamStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c2fc
	char incrementPlayerStat(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x8461104C_increase); // Function VerseFortnite_match_stats.match_stats.incrementPlayerStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c2e4
	char incrementMatchStat(int32_t __verse_0x8C4546BB_statIndex, int32_t __verse_0x8461104C_increase); // Function VerseFortnite_match_stats.match_stats.incrementMatchStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c2dc
	int32_t getTeamStat(int32_t __verse_0x28201082_team, int32_t __verse_0x8C4546BB_statIndex); // Function VerseFortnite_match_stats.match_stats.getTeamStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c258
	int32_t getPlayerStat(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x8C4546BB_statIndex); // Function VerseFortnite_match_stats.match_stats.getPlayerStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c090
	int32_t getMatchStat(int32_t __verse_0x8C4546BB_statIndex); // Function VerseFortnite_match_stats.match_stats.getMatchStat // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c070
	void Reset(); // Function VerseFortnite_match_stats.match_stats.Reset // (Native|Public|BlueprintCallable) // @ game+0x430b8a4
	void $InitCDO(); // Function VerseFortnite_match_stats.match_stats.$InitCDO // (None) // @ game+0xda7c34
};

