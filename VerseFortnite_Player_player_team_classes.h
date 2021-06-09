// SolarisGeneratedClass VerseFortnite_Player_player_team.player_team
// Size: 0x28 (Inherited: 0x28)
struct Uplayer_team : UObject {

	char SetTeam(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.SetTeam // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c5c8
	int32_t pickTeam(struct Uplayer_component* __verse_0x9F1D658F_player, int32_t __verse_0x4C33EE27_preferredTeamIndex); // Function VerseFortnite_Player_player_team.player_team.pickTeam // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c3b4
	int32_t GetTeamSize(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.GetTeamSize // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c250
	struct TArray<struct Uplayer_component*> GetTeamMembers(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.GetTeamMembers // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c248
	int32_t GetTeamLevel(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.GetTeamLevel // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c240
	int32_t GetTeamExperience(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.GetTeamExperience // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c238
	struct UColor* GetTeamColor(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.GetTeamColor // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c230
	int32_t GetTeam(struct Uplayer_component* __verse_0x9F1D658F_player); // Function VerseFortnite_Player_player_team.player_team.GetTeam // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c260
	char containsHumanPlayers(struct UObject* __verse_0x9866B8E7_contextObject, int32_t __verse_0x022B3627_teamIndex); // Function VerseFortnite_Player_player_team.player_team.containsHumanPlayers // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd60
	void $InitCDO(); // Function VerseFortnite_Player_player_team.player_team.$InitCDO // (None) // @ game+0xda7c34
};

