// BlueprintGeneratedClass GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
// Size: 0xe58 (Inherited: 0xa70)
struct UGAB_InterrogatePlayer_Reveal_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xa80(0x08)
	struct AFortPlayerPawn* InterrogatedPlayer; // 0xa88(0x08)
	struct UAnimMontage* Anim_Reveal; // 0xa90(0x08)
	struct UAnimMontage* Anim_End; // 0xa98(0x08)
	struct FName RevealHolster; // 0xaa0(0x08)
	struct FGameplayTag GC_Reveal; // 0xaa8(0x08)
	struct FScalableFloat MarkDurationPlayer; // 0xab0(0x28)
	struct FScalableFloat MarkDurationNPC; // 0xad8(0x28)
	struct FScalableFloat MarkRadius; // 0xb00(0x28)
	struct TArray<struct AActor*> SquadmatesToMark; // 0xb28(0x10)
	struct FTimerHandle Timer_Reveal; // 0xb38(0x08)
	struct FGameplayTag T_NPC; // 0xb40(0x08)
	float RevealDuration; // 0xb48(0x04)
	float EndAbilityDelay; // 0xb4c(0x04)
	float SweepDelay; // 0xb50(0x04)
	bool Cancelled; // 0xb54(0x01)
	bool Ending; // 0xb55(0x01)
	char pad_B56[0x2]; // 0xb56(0x02)
	struct FString IndicatorGroup; // 0xb58(0x10)
	struct UFortCameraMode* CameraMode; // 0xb68(0x08)
	struct TArray<struct AActor*> ActorsToMark; // 0xb70(0x10)
	struct FGameplayTagContainer T_ReticleHUD; // 0xb80(0x20)
	struct FGameplayTagContainer NPCTagsToMark; // 0xba0(0x20)
	struct FGameplayTagContainer ChestTagsToMark; // 0xbc0(0x20)
	struct FGameplayTagContainer GameplayItemTagsToMark; // 0xbe0(0x20)
	struct FName ParticleSystemParamName; // 0xc00(0x08)
	struct UParticleSystem* IndicatedPS; // 0xc08(0x08)
	struct USoundBase* IndicatedSound; // 0xc10(0x08)
	struct FVector PSOffset; // 0xc18(0x0c)
	struct FName PSVectorParamName; // 0xc24(0x08)
	struct FVector PSDBNOOffset; // 0xc2c(0x0c)
	struct FName EnemyStencilName; // 0xc38(0x08)
	struct FName TreasureChestStencilName; // 0xc40(0x08)
	float StepTime; // 0xc48(0x04)
	bool testbool; // 0xc4c(0x01)
	char pad_C4D[0x3]; // 0xc4d(0x03)
	struct FScalableFloat EnemyStencilID; // 0xc50(0x28)
	struct FScalableFloat StencilStepTime; // 0xc78(0x28)
	struct FScalableFloat bUseDefaultStencil; // 0xca0(0x28)
	struct FScalableFloat IndicatorStepTime; // 0xcc8(0x28)
	struct FGameplayTagQuery NPCGameplayTagQuery; // 0xcf0(0x48)
	struct FIndicatedActorData IndicatedActorDataPlayers; // 0xd38(0xb0)
	struct FStenciledActorData StenciledActorDataPlayers; // 0xde8(0x70)

	void GAB_InterrogatePlayer_Reveal_AutoGenFunc(struct AActor* IndicatedActor); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GAB_InterrogatePlayer_Reveal_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleReticleVisibility(bool Hide); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Reveal(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndAbilityCleanup(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitAbility(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDied_Event_2(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnDied_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndInterrogation(); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32_t EntryPoint); // Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

