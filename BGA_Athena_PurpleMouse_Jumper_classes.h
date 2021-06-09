// BlueprintGeneratedClass BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C
// Size: 0xc10 (Inherited: 0x9be)
struct ABGA_Athena_PurpleMouse_Jumper_C : ABGA_Athena_WithGravity_Parent_C {
	char pad_9BE[0x2]; // 0x9be(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9c0(0x08)
	struct UAudioComponent* Proximity Spin Sound; // 0x9c8(0x08)
	struct UStaticMeshComponent* SM_Cylinder_Beam; // 0x9d0(0x08)
	struct UStaticMeshComponent* VisibleMesh; // 0x9d8(0x08)
	struct USceneComponent* MeshPivot; // 0x9e0(0x08)
	struct UAudioComponent* AmbientHumAudio; // 0x9e8(0x08)
	struct USphereComponent* BeepBlinkTrigger; // 0x9f0(0x08)
	struct USphereComponent* ExplosionTrigger; // 0x9f8(0x08)
	float JumpOut_Rotation_X_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0xa00(0x04)
	float JumpOut_Rotation_Z_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0xa04(0x04)
	float JumpOut_Lifetime_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0xa08(0x04)
	float JumpOut_SpawnRate_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0xa0c(0x04)
	enum class ETimelineDirection JumpOut__Direction_2F05E8C8489AA60C8C830FAFF1B78CA0; // 0xa10(0x01)
	char pad_A11[0x7]; // 0xa11(0x07)
	struct UTimelineComponent* JumpOut; // 0xa18(0x08)
	struct FScalableFloat BeepTriggerRadius; // 0xa20(0x28)
	struct FScalableFloat TriggerRadius; // 0xa48(0x28)
	struct FScalableFloat DamageRadius; // 0xa70(0x28)
	struct FScalableFloat MarkPlayers; // 0xa98(0x28)
	struct FScalableFloat MarkDuration; // 0xac0(0x28)
	struct FScalableFloat TimeToArm; // 0xae8(0x28)
	struct FScalableFloat PlayBeepSoundOnArm; // 0xb10(0x28)
	struct FText InteractText; // 0xb38(0x18)
	bool IsExlode?; // 0xb50(0x01)
	char pad_B51[0x3]; // 0xb51(0x03)
	struct FGameplayTag CameraShakeGC; // 0xb54(0x08)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct TArray<struct AActor*> ActorsInBeepRadius; // 0xb60(0x10)
	bool IsInteract?; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct USoundBase* ExplodeSound; // 0xb78(0x08)
	struct UParticleSystemComponent* BeepParticles; // 0xb80(0x08)
	struct USoundBase* BeepSound; // 0xb88(0x08)
	struct UFortWorldItemDefinition* ItemToPickUpOnDisarm; // 0xb90(0x08)
	struct UGameplayEffect* ExplosionGE; // 0xb98(0x08)
	struct FLinearColor EnemyParticleColor; // 0xba0(0x10)
	struct FLinearColor FriendlyParticleColor; // 0xbb0(0x10)
	struct USoundBase* PickupSound; // 0xbc0(0x08)
	struct FLinearColor EnemyEmissiveColor; // 0xbc8(0x10)
	struct FLinearColor FriendlyEmissiveColor; // 0xbd8(0x10)
	char MyTeam; // 0xbe8(0x01)
	bool Jumped; // 0xbe9(0x01)
	bool TeamHasBeenSet; // 0xbea(0x01)
	char pad_BEB[0x5]; // 0xbeb(0x05)
	struct UFortAbilitySystemComponent* DamageDealingAbilitySystemComponent; // 0xbf0(0x08)
	struct FGameplayEffectContextHandle ExplosionEffectContext; // 0xbf8(0x18)

	struct FVector GetFocusedSocketLocation(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetFocusedSocketLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	bool CanBeSavedToCreativeVolume(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CanBeSavedToCreativeVolume // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void GetAllPawns(struct TArray<struct AActor*> _Array, struct TArray<struct AActor*> _Result); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetAllPawns // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool Is in Infiltration Mode(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Is in Infiltration Mode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Init(struct FVector GravHitNormal); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FilterByLOS(struct TArray<struct AActor*> _Array, struct TArray<struct AActor*> _Result); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.FilterByLOS // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckLOSAgain(struct AActor* ActorToCheckLOSAgainst); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CheckLOSAgain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintCanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Launch(struct FVector LaunchSource, float Amount); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Launch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void JumpOut__FinishedFunc(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void JumpOut__UpdateFunc(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void JumpIntoExplosion(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpIntoExplosion // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SpawnFXSounds(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SpawnFXSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Beep(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Beep // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerBeep(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerBeep // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DetachAndLaunch(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.DetachAndLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Explode(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Explode // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerJumpTimeline(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerJumpTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destroyed(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Destroyed // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void StopBeep(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopBeep // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Damaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Damaged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetExplosionTimer(); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ResetExplosionTimer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void StopSim(struct FHitResult Hit); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopSim // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Pushback(struct FVector V); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Pushback // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInstigatorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnInstigatorDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMyTeam(char Team); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SetMyTeam // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper(int32_t EntryPoint); // Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

