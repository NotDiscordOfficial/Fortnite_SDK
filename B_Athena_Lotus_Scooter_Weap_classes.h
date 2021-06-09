// BlueprintGeneratedClass B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C
// Size: 0x13ec (Inherited: 0x13c0)
struct AB_Athena_Lotus_Scooter_Weap_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	int32_t CurrentAmmo; // 0x13c8(0x04)
	int32_t MarkedPlayerCount; // 0x13cc(0x04)
	struct TArray<struct AActor*> MarkedActors; // 0x13d0(0x10)
	struct UMaterialInstanceDynamic* ScreenMaterial; // 0x13e0(0x08)
	int32_t ScreenCounterIndex; // 0x13e8(0x04)

	void OnRep_MarkedActors(); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnRep_MarkedActors // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnIndicatedActorRemoved(struct AActor* IndicatedActor); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnIndicatedActorRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnIndicatedActorAdded(struct AActor* IndicatedActor); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnIndicatedActorAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_MarkedPlayerCount(); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnRep_MarkedPlayerCount // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Ammo Changed(int32_t LocalCount, int32_t LocalRemaining); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.Ammo Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Athena_Lotus_Scooter_Weap(int32_t EntryPoint); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.ExecuteUbergraph_B_Athena_Lotus_Scooter_Weap // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

