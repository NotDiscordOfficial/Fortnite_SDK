// BlueprintGeneratedClass B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C
// Size: 0x3ac (Inherited: 0x290)
struct AB_Athena_FloppingRabbit_Wire_C : AFortHookGunRope {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct USceneComponent* HookOffset; // 0x298(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2a0(0x08)
	struct UStaticMeshComponent* Hook; // 0x2a8(0x08)
	struct USceneComponent* ItemSocket; // 0x2b0(0x08)
	float Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x2b8(0x04)
	enum class ETimelineDirection Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* Tight; // 0x2c0(0x08)
	float Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8; // 0x2c8(0x04)
	float Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8; // 0x2cc(0x04)
	enum class ETimelineDirection Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UTimelineComponent* Reel In; // 0x2d8(0x08)
	struct APrj_Athena_FloppingRabbit_C* Projectile Actor; // 0x2e0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x2e8(0x08)
	struct USoundBase* ReelSound; // 0x2f0(0x08)
	struct USoundBase* ReattachSound; // 0x2f8(0x08)
	struct FGameplayTag RopeActiveTag; // 0x300(0x08)
	struct FGameplayTag BlockIncomingPickups; // 0x308(0x08)
	struct FGameplayTagContainer Change Equipment Tag; // 0x310(0x20)
	float ReelinPlayRate; // 0x330(0x04)
	struct FGameplayTag T_Stop; // 0x334(0x08)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct UAnimMontage* ReelMontage; // 0x340(0x08)
	bool Toss; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct FVector HookRelativeStartingLoc; // 0x34c(0x0c)
	struct FRotator HookRelativeStartingRot; // 0x358(0x0c)
	bool CatchParticleOn; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UAnimMontage* ReelWeaponMontage; // 0x368(0x08)
	struct FGameplayTagContainer T_FlopperSpawn; // 0x370(0x20)
	struct USoundBase* Sound_Pickup; // 0x390(0x08)
	struct TArray<struct AFortPickup*> PickedUpPickups; // 0x398(0x10)
	float RopeWidth; // 0x3a8(0x04)

	void OnRep_CatchParticleOn(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnRep_CatchParticleOn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Reel In__FinishedFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Reel In__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Reel In__UpdateFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Reel In__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Tight__FinishedFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Tight__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Tight__UpdateFunc(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.Tight__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4(struct FName NotifyName); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TightenRope(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.TightenRope // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayMontage(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.PlayMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DropAndDestroy(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.DropAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttachNonFishingPickups(struct AFortPickup* InputPin); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.AttachNonFishingPickups // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartReeling(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.StartReeling // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ActivateProjectileMovmentComponent(struct UActorComponent* Target); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ActivateProjectileMovmentComponent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Athena_FloppingRabbit_Wire(int32_t EntryPoint); // Function B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C.ExecuteUbergraph_B_Athena_FloppingRabbit_Wire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

