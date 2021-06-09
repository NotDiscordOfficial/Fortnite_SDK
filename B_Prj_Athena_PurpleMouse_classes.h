// BlueprintGeneratedClass B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C
// Size: 0x912 (Inherited: 0x900)
struct AB_Prj_Athena_PurpleMouse_C : AB_Prj_Athena_BGASpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x900(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x908(0x08)
	char Team; // 0x910(0x01)
	bool TeamHasBeenSet; // 0x911(0x01)

	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater); // Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SpawnBGA_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetTeam(char Team); // Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.SetTeam // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_PurpleMouse(int32_t EntryPoint); // Function B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C.ExecuteUbergraph_B_Prj_Athena_PurpleMouse // (Final|UbergraphFunction) // @ game+0xda7c34
};

