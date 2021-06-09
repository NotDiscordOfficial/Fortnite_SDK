// BlueprintGeneratedClass BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C
// Size: 0xa61 (Inherited: 0x8a0)
struct ABLGA_BattleLab_Parent_C : ABattleLabDeviceGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8a0(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x8a8(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x8b0(0x08)
	struct UFortHeldObjectComponent* FortHeldObject; // 0x8b8(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x8c0(0x08)
	struct UCapsuleComponent* Capsule; // 0x8c8(0x08)
	int32_t RepStartMoving; // 0x8d0(0x04)
	struct FGameplayTag GC_HitPlayer; // 0x8d4(0x08)
	struct FGameplayTag GC_HitWorld; // 0x8dc(0x08)
	struct FGameplayTag GC_Throw; // 0x8e4(0x08)
	struct FGameplayTag GC_EnterWater; // 0x8ec(0x08)
	struct FGameplayTag GC_Pickup; // 0x8f4(0x08)
	struct FGameplayTag GC_Death; // 0x8fc(0x08)
	bool PlayDeathGC; // 0x904(0x01)
	bool RepHideActor; // 0x905(0x01)
	bool SetHideActorOnDeath; // 0x906(0x01)
	bool IsDestructable; // 0x907(0x01)
	struct FGameplayTag GC_GenericDeath; // 0x908(0x08)
	float WorldStopSlop; // 0x910(0x04)
	bool AttachToWallsAndCeilings; // 0x914(0x01)
	char pad_915[0x3]; // 0x915(0x03)
	struct TMap<enum class ELinkToDirection, struct FVector> Map_DirectionToRelativeVector; // 0x918(0x50)
	enum class ELinkToDirection DirectionToAttach; // 0x968(0x01)
	char pad_969[0x7]; // 0x969(0x07)
	struct AActor* EmptyAttachLinkActor; // 0x970(0x08)
	char pad_978[0x8]; // 0x978(0x08)
	struct FTransform AttachRelativeTrans; // 0x980(0x30)
	struct FTransform AttachTransform; // 0x9b0(0x30)
	struct FText FirstInteractString; // 0x9e0(0x18)
	struct FText SecondInteractString; // 0x9f8(0x18)
	float SecondInteractTime; // 0xa10(0x04)
	float FirstInteractTime; // 0xa14(0x04)
	bool EverBeenThrownPlaced; // 0xa18(0x01)
	bool AutoEnableCurieInteractionsOnStop; // 0xa19(0x01)
	bool AlreadySavedDefaultTransform; // 0xa1a(0x01)
	enum class Enum_HeldObject_GenericWeights ObjectWeights; // 0xa1b(0x01)
	char pad_A1C[0x4]; // 0xa1c(0x04)
	struct FMulticastInlineDelegate OnStartedMoving; // 0xa20(0x10)
	struct ABLGA_BattleLab_Parent_C* AttachBaseDevice; // 0xa30(0x08)
	enum class BL_HeldState HeldState; // 0xa38(0x01)
	char pad_A39[0x7]; // 0xa39(0x07)
	struct FGameplayTagContainer TC_BlockPickup; // 0xa40(0x20)
	bool bIsElectricityPropagationDisabled; // 0xa60(0x01)

	void DisableElectricityPropagation(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.DisableElectricityPropagation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableElectricityPropagation(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.EnableElectricityPropagation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_HeldState(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_HeldState // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBeenThrownPlaced(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetBeenThrownPlaced // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCanFirstInteract(struct AFortPawn* InteractingPawn, bool Return); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetCanFirstInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnRep_AttachTransform(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_AttachTransform // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetAttachDefaultTransform(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetAttachDefaultTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetAttachComponent(struct USceneComponent* Component); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetAttachComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void FindAttachAngle(struct FVector HitLoc); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.FindAttachAngle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_RepHideActor(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepHideActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_RepStartMoving(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepStartMoving // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HideActor(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.HideActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlayGenericDeath(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.PlayGenericDeath // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void AttachSetup(struct FVector Location, struct FVector HitNormal, bool NewParam); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.AttachSetup // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ResetRelativeTransformOnAttach(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ResetRelativeTransformOnAttach // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFirstInteract(struct AFortPawn* Interacting Pawn); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnFirstInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnSecondInteract(struct AFortPawn* InteractingPawn); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnSecondInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBaseDeviceStartedMoving(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnBaseDeviceStartedMoving // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnHeldObjectStateChangedClient(enum class BL_HeldState HeldState); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnHeldObjectStateChangedClient // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_9_OnProjectileVelocityReplicated__DelegateSignature(struct FVector ReplicatedVelocity); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_9_OnProjectileVelocityReplicated__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BLGA_BattleLab_Parent(int32_t EntryPoint); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ExecuteUbergraph_BLGA_BattleLab_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnStartedMoving__DelegateSignature(); // Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnStartedMoving__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

