// BlueprintGeneratedClass GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C
// Size: 0xb08 (Inherited: 0xa70)
struct UGA_Athena_HidingProp_Teleport_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0xa78(0x10)
	struct AB_HidingProp_C* HidingProp; // 0xa88(0x08)
	struct AB_HidingProp_C* TargetTeleporter; // 0xa90(0x08)
	struct FGameplayTagContainer T_HudElementToHide; // 0xa98(0x20)
	struct FGameplayTag TargetPropTeleportingCue; // 0xab8(0x08)
	struct FTimerHandle WobbleHandle; // 0xac0(0x08)
	struct FGameplayTag WobbleCue; // 0xac8(0x08)
	float ServerWorldTime; // 0xad0(0x04)
	struct FGameplayTag EnterCue; // 0xad4(0x08)
	struct FGameplayTag HidingInPropTag; // 0xadc(0x08)
	char pad_AE4[0x4]; // 0xae4(0x04)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xae8(0x20)

	void Added_FD079A2341CDD832DF47CD975DFC3BB3(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_FD079A2341CDD832DF47CD975DFC3BB3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnComplete_EE0FA6804073079396C44591432259C0(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnComplete_EE0FA6804073079396C44591432259C0 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_67FE14EA4DF2D8C2DB494AA89443681B(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_67FE14EA4DF2D8C2DB494AA89443681B // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_CB8220A04B74338E758C11B7371D4630(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_CB8220A04B74338E758C11B7371D4630 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_F96D6DD549939CA425D2D1BE1AD32090(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_F96D6DD549939CA425D2D1BE1AD32090 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void QuestUpdate(struct AFortPawn* Pawn); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.QuestUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Wobble(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Wobble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnPawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GrapplerFailSafe(struct AFortPawn* FortPawn); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.GrapplerFailSafe // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_HidingProp_Teleport(int32_t EntryPoint); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.ExecuteUbergraph_GA_Athena_HidingProp_Teleport // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void NewEventDispatcher_0__DelegateSignature(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

