// BlueprintGeneratedClass GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C
// Size: 0xa98 (Inherited: 0xa81)
struct UGAT_Athena_Enemy_SneakySnowman_C : UGAT_TriggeredAbility_C {
	char pad_A81[0x7]; // 0xa81(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa88(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa90(0x08)

	void Remove Snowman(struct AFortPlayerPawn* PlayerPawn); // Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.Remove Snowman // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman(int32_t EntryPoint); // Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

