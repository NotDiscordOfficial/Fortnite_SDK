// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// Size: 0x2fd0 (Inherited: 0x2f29)
struct ANPC_Pawn_Wildlife_Parent_C : ANPC_Pawn_Parent_C {
	char pad_2F29[0x7]; // 0x2f29(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f30(0x08)
	struct UNiagaraComponent* Wildlife_FootDust; // 0x2f38(0x08)
	struct UFortPawnComponent_Convert* ConvertComponent; // 0x2f40(0x08)
	SoftClassProperty Layer Idle; // 0x2f48(0x28)
	SoftClassProperty Layer Locomotion; // 0x2f70(0x28)
	SoftClassProperty Layer Jump; // 0x2f98(0x28)
	char LeaderTeam; // 0x2fc0(0x01)
	char pad_2FC1[0x7]; // 0x2fc1(0x07)
	struct USoundEffectSourcePresetChain* VocalSourceEffectChainOverride; // 0x2fc8(0x08)

	void AttachAndApplyVocalFX(struct FSoundLibraryPlaySoundResult SoundLibraryResult); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Water Splash at Water Surface(struct AFortWaterBodyActor* Water Body, bool Enter Water); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsValidAutoFireTarget(struct AActor* Attacker); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Play Sound Lib(struct FGameplayTag Event Name); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTamingIndicator(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_LeaderTeam(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(struct UObject* Loaded); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LinkAnimationLayers(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AsyncLinkAnimationLayer(SoftClassProperty AnimationLayer); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(struct AFortPawn* InstigatorPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void NPC AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void NPC LeaderSet(bool Success?, struct AActor* Leader); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(struct FSoundLibraryPlaySoundResult Results, struct USoundLibraryContext* Context); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32_t EntryPoint); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

