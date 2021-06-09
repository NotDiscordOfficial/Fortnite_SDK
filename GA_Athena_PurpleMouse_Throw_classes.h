// BlueprintGeneratedClass GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C
// Size: 0xe60 (Inherited: 0xe04)
struct UGA_Athena_PurpleMouse_Throw_C : UGA_Athena_Consumable_Throw_Parent_C {
	char pad_E04[0x4]; // 0xe04(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe08(0x08)
	struct FScalableFloat RectSize; // 0xe10(0x28)
	struct FScalableFloat Range; // 0xe38(0x28)

	void GetPlayer(struct AActor* PlayerOrVehicle, struct AActor* Player); // Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.GetPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_PurpleMouse_Throw(int32_t EntryPoint); // Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.ExecuteUbergraph_GA_Athena_PurpleMouse_Throw // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

