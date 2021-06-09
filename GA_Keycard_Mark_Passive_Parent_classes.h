// BlueprintGeneratedClass GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C
// Size: 0xaa4 (Inherited: 0xa70)
struct UGA_Keycard_Mark_Passive_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AActor* LockActorClass; // 0xa78(0x08)
	struct AActor* LockActor; // 0xa80(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa88(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xa90(0x08)
	struct FMarkerID Marker; // 0xa98(0x08)
	float TimeBetweenLines; // 0xaa0(0x04)

	void InitAbility(); // Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.InitAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSync_5619E23F4D1F97AAF6EB6C8A62F04951(); // Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.OnSync_5619E23F4D1F97AAF6EB6C8A62F04951 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DrawTrailToVault(); // Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.DrawTrailToVault // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReplicatedDrawTrailToVault(struct FRotator Rotation); // Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ReplicatedDrawTrailToVault // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent(int32_t EntryPoint); // Function GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C.ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

