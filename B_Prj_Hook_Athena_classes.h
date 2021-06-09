// BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C
// Size: 0xc10 (Inherited: 0x938)
struct AB_Prj_Hook_Athena_C : AFortAttachableProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x938(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x940(0x08)
	struct UStaticMeshComponent* ProjectileMesh; // 0x948(0x08)
	struct AFortPawn* Target; // 0x950(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x958(0x08)
	bool HookStopped; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	struct FVector HitLocation; // 0x964(0x0c)
	bool AirControl; // 0x970(0x01)
	char pad_971[0x7]; // 0x971(0x07)
	struct USoundBase* Sound_Stick; // 0x978(0x08)
	struct USoundBase* Sound_StuckToPlayer; // 0x980(0x08)
	float DistanceFromInstigator; // 0x988(0x04)
	char pad_98C[0x4]; // 0x98c(0x04)
	struct USoundBase* Sound_Water; // 0x990(0x08)
	struct USoundBase* TravelSound; // 0x998(0x08)
	struct TArray<struct FToyAngleSelectorInfo> LaunchAngleVariations; // 0x9a0(0x10)
	struct AB_Hookgun_Athena_C* Weapon Actor; // 0x9b0(0x08)
	struct AB_HookGunRope_C* Rope; // 0x9b8(0x08)
	struct FVector PreLaunchVelocity; // 0x9c0(0x0c)
	float FireAImPitch; // 0x9cc(0x04)
	float DownPitchMin; // 0x9d0(0x04)
	float DownPitchMax; // 0x9d4(0x04)
	float AdditionalZ; // 0x9d8(0x04)
	char pad_9DC[0x4]; // 0x9dc(0x04)
	struct USoundBase* Sound_YankBack; // 0x9e0(0x08)
	struct USoundBase* Sound_RopeDestroy; // 0x9e8(0x08)
	struct FGameplayTag RopeActiveTag; // 0x9f0(0x08)
	struct FGameplayTag BlockIncomingPickups; // 0x9f8(0x08)
	struct FVector ImpactNormal; // 0xa00(0x0c)
	char pad_A0C[0x4]; // 0xa0c(0x04)
	struct USoundBase* Sound_Stick2D; // 0xa10(0x08)
	float Offset Distance from Physics Mesh; // 0xa18(0x04)
	float OffsetDistanceFromBone; // 0xa1c(0x04)
	struct AActor* StruckActor; // 0xa20(0x08)
	struct FVector Momentum; // 0xa28(0x0c)
	bool Launchpad; // 0xa34(0x01)
	char pad_A35[0x3]; // 0xa35(0x03)
	struct FVector VehicleVelocity; // 0xa38(0x0c)
	bool ConsumesAmmo; // 0xa44(0x01)
	bool bInHoverboard; // 0xa45(0x01)
	char pad_A46[0x2]; // 0xa46(0x02)
	float Lifespan on Hit; // 0xa48(0x04)
	bool GliderGrappler; // 0xa4c(0x01)
	char pad_A4D[0x3]; // 0xa4d(0x03)
	struct FGameplayTagContainer TC_VehicleIgnorePull; // 0xa50(0x20)
	struct UGameplayEffect* GE_RopeActive; // 0xa70(0x08)
	struct FGameplayTag Event_Returned; // 0xa78(0x08)
	struct FGameplayTag Event_GrappleHit; // 0xa80(0x08)
	struct FGameplayTagContainer T_QuestTag; // 0xa88(0x20)
	struct UAnimMontage* Anim_GrappleHoverboard; // 0xaa8(0x08)
	struct UAnimMontage* Anim_Grapple; // 0xab0(0x08)
	struct UParticleSystem* FX_WaterImpact; // 0xab8(0x08)
	struct UParticleSystem* FX_Reattach; // 0xac0(0x08)
	float ArcGravityOverride; // 0xac8(0x04)
	bool DoesCrouchCheck; // 0xacc(0x01)
	bool HasMinUpwardLaunchVelocity; // 0xacd(0x01)
	char pad_ACE[0x2]; // 0xace(0x02)
	float MinUpwardLaunchVelocity; // 0xad0(0x04)
	char pad_AD4[0x4]; // 0xad4(0x04)
	struct UMatineeCameraShake* CamShake_Grapple; // 0xad8(0x08)
	struct FVector LaunchVelocity; // 0xae0(0x0c)
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct FScalableFloat Row_PlayerArc; // 0xaf0(0x28)
	struct FScalableFloat Row_VehicleArc; // 0xb18(0x28)
	struct FScalableFloat Row_JackleArc; // 0xb40(0x28)
	struct FScalableFloat Row_VehicleForceMultiplier; // 0xb68(0x28)
	struct FScalableFloat Row_JackleForceMultiplier; // 0xb90(0x28)
	struct FScalableFloat Speed; // 0xbb8(0x28)
	struct FScalableFloat LifeSpan; // 0xbe0(0x28)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass; // 0xc08(0x08)

	float GetVehicleLaunchMult(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleLaunchMult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	float GetVehicleArc(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleArc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FVector MomentumCheck(struct FVector A, struct FVector A2); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.MomentumCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GiveQuestCredit(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GiveQuestCredit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnRope(struct AFortPlayerPawn* PlayerPawn, struct AB_HookGunRope_C* RopeSpawned); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.SpawnRope // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void JackalCheck(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.JackalCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleLaunch(bool JumpPadding?); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleLaunch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Momentum(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Momentum // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleMomentum(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleMomentum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleStuckProjectiles(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckProjectiles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_StruckActor(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_StruckActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleStuckSupplyDrop(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckSupplyDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleStuckBuilding(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleStuckVehicle(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSticks(struct UObject* Object, struct UPrimitiveComponent* Component); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleSticks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PickGrappleMontage(float PitchAngle, bool InHoverboard, struct FName SectionName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void PickGrappleMontageSection(float PitchAngle, struct FName SectionName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontageSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnRep_HookStopped(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_HookStopped // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Target(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Target // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculateYankForce(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.CalculateYankForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IncapacitateTarget(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.IncapacitateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleHits(struct FHitResult Hit, struct AActor* Target); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleHits // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayStickSounds(struct FVector Location, struct AActor* HitActor); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PlayStickSounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_0A1B172F45DE2A614770489FAD619748(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_0A1B172F45DE2A614770489FAD619748 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_93AE81F64BBD13E0E55C399F05E160E3(struct FName NotifyName); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_93AE81F64BBD13E0E55C399F05E160E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Travel(struct FVector HitLocation); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Travel // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WeaponCheck(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.WeaponCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void GrappleVehicle(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GrappleVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LaunchCheck(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.LaunchCheck // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Grapple(); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Grapple // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Hook_Athena(int32_t EntryPoint); // Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ExecuteUbergraph_B_Prj_Hook_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

