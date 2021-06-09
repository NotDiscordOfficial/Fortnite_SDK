// BlueprintGeneratedClass B_HeldObjectSocketManager.B_HeldObjectSocketManager_C
// Size: 0x8da (Inherited: 0x898)
struct AB_HeldObjectSocketManager_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8a0(0x08)
	struct TArray<struct AB_HeldObjectSocket_C*> HeldObjectSockets; // 0x8a8(0x10)
	struct TArray<struct FGameplayTagContainer> CurrentTags; // 0x8b8(0x10)
	struct TArray<struct FGameplayTagContainer> DefaultCorrectTags; // 0x8c8(0x10)
	bool CombinationCorrect; // 0x8d8(0x01)
	bool SocketOrderMatters; // 0x8d9(0x01)

	void OnRep_CombinationCorrect(); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnRep_CombinationCorrect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckTagMatches(); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.CheckTagMatches // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void VerifyHeldObjectTags(struct TArray<struct FGameplayTagContainer> CorrectTags, struct TArray<struct FGameplayTagContainer> CurrentTags, bool OrderMatters, bool IsValidMatch); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.VerifyHeldObjectTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateHeldObjectTags(struct AB_HeldObjectSocket_C* ChangedSocket); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.UpdateHeldObjectTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCombinationCorrect(); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnCombinationCorrect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HeldObjectSocketManager(int32_t EntryPoint); // Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ExecuteUbergraph_B_HeldObjectSocketManager // (Final|UbergraphFunction) // @ game+0xda7c34
};

