// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// Size: 0x258 (Inherited: 0x220)
struct AHBOnboardingFlow_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UFortQuestItemDefinition* PlayPeriodicEventMovieQuest; // 0x230(0x08)
	bool bPlayedPeriodicEventMovie; // 0x238(0x01)
	bool bHasRecheckedNeedToPlayPeriodicEventMovie; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct FDataTableRowHandle PlayPeriodicEventCineObjective; // 0x240(0x10)
	struct AFortClientAnnouncement* PeriodicEventMovieAnnouncementClass; // 0x250(0x08)

	void GetCampaignQuestManager(struct UFortQuestManager* QuestManager); // Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RecheckNeedToPlayEventMovie(bool WaitingToCheckAgain); // Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool NeedsToPlayEventMovie(); // Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33(); // Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33(); // Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D(); // Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D(); // Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D(); // Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePlayEventCine(); // Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleClientEvent_PlayEventMovie(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent ClientEvent); // Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartFlow(); // Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HBOnboardingFlow(int32_t EntryPoint); // Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

