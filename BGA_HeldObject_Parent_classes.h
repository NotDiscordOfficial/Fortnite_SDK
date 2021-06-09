// BlueprintGeneratedClass BGA_HeldObject_Parent.BGA_HeldObject_Parent_C
// Size: 0xa70 (Inherited: 0x898)
struct ABGA_HeldObject_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x8a0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x8a8(0x08)
	struct UFortHeldObjectComponent* FortHeldObject; // 0x8b0(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x8b8(0x08)
	struct UCapsuleComponent* Capsule; // 0x8c0(0x08)
	int32_t RepStartMoving; // 0x8c8(0x04)
	struct FGameplayTag GC_HitPlayer; // 0x8cc(0x08)
	struct FGameplayTag GC_HitWorld; // 0x8d4(0x08)
	struct FGameplayTag GC_Throw; // 0x8dc(0x08)
	struct FGameplayTag GC_EnterWater; // 0x8e4(0x08)
	struct FGameplayTag GC_Pickup; // 0x8ec(0x08)
	struct FGameplayTag GC_Death; // 0x8f4(0x08)
	bool PlayDeathGC; // 0x8fc(0x01)
	bool RepHideActor; // 0x8fd(0x01)
	bool SetHideActorOnDeath; // 0x8fe(0x01)
	bool IsDestructable; // 0x8ff(0x01)
	struct FGameplayTag GC_GenericDeath; // 0x900(0x08)
	float WorldStopSlop; // 0x908(0x04)
	bool AttachToWallsAndCeilings; // 0x90c(0x01)
	char pad_90D[0x3]; // 0x90d(0x03)
	struct TMap<enum class ELinkToDirection, struct FVector> Map_DirectionToRelativeVector; // 0x910(0x50)
	enum class ELinkToDirection DirectionToAttach; // 0x960(0x01)
	char pad_961[0x7]; // 0x961(0x07)
	struct AActor* EmptyAttachLinkActor; // 0x968(0x08)
	struct FTransform AttachRelativeTrans; // 0x970(0x30)
	struct FTransform AttachTransform; // 0x9a0(0x30)
	struct FText FirstInteractString; // 0x9d0(0x18)
	struct FText SecondInteractString; // 0x9e8(0x18)
	float SecondInteractTime; // 0xa00(0x04)
	float FirstInteractTime; // 0xa04(0x04)
	bool EverBeenThrownPlaced; // 0xa08(0x01)
	bool AutoEnableInteractionsOnStop; // 0xa09(0x01)
	bool AlreadySavedDefaultTransform; // 0xa0a(0x01)
	enum class Enum_HeldObject_GenericWeights ObjectWeights; // 0xa0b(0x01)
	bool StopOnFlatSurface; // 0xa0c(0x01)
	char pad_A0D[0x3]; // 0xa0d(0x03)
	struct FGameplayTagContainer ThrownQuestCreditTargetTag; // 0xa10(0x20)
	struct FGameplayTagContainer TC_BlockPickup; // 0xa30(0x20)
	float Hit Velocity Threshold; // 0xa50(0x04)
	bool ShouldKillWhenSpawningUnderwater; // 0xa54(0x01)
	char pad_A55[0x3]; // 0xa55(0x03)
	struct UPrimitiveComponent* HitComponentToAttachTo; // 0xa58(0x08)
	enum class ECollisionResponse CapsuleDefaultCollisionResponseToPawn; // 0xa60(0x01)
	bool RestoreDefaultPawnCollisionOnInteract; // 0xa61(0x01)
	bool IsAttachedToVehicle; // 0xa62(0x01)
	char pad_A63[0x5]; // 0xa63(0x05)
	struct AActor* VehicleAttached; // 0xa68(0x08)

	void UbindPlayerControllerOnUnPosses(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.UbindPlayerControllerOnUnPosses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindPlayerControllerOnUnPosses(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BindPlayerControllerOnUnPosses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Server Only Handle Player Controller OnUnPossess(struct APawn* PlayerPawn); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.Server Only Handle Player Controller OnUnPossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Server Only Handle Attach To Vehicle(struct FVector HitLoc, struct UPrimitiveComponent* HitComponentToAttachTo); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.Server Only Handle Attach To Vehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDetachFromVehicle(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnDetachFromVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAttachedToVehicle(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnAttachedToVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_IsAttachedToVehicle(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_IsAttachedToVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBeenThrownPlaced(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.SetBeenThrownPlaced // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCanFirstInteract(struct AFortPawn* InteractingPawn, bool Return); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.GetCanFirstInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnRep_AttachTransform(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_AttachTransform // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetAttachDefaultTransform(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.SetAttachDefaultTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetAttachComponent(struct USceneComponent* Component); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.GetAttachComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void FindAttachAngle(struct FVector HitLoc); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.FindAttachAngle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_RepHideActor(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_RepHideActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_RepStartMoving(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_RepStartMoving // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnReady_BC2B03BE47B5044C184341970EAD7AAB(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnReady_BC2B03BE47B5044C184341970EAD7AAB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HideActor(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.HideActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PlayGenericDeath(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.PlayGenericDeath // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void AttachSetup(struct FVector Location, struct FVector HitNormal, bool NewParam); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.AttachSetup // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ResetRelativeTransformOnAttach(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ResetRelativeTransformOnAttach // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFirstInteract(struct AFortPawn* Interacting Pawn); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnFirstInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnSecondInteract(struct AFortPawn* InteractingPawn); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnSecondInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnVehicleDestroyed(struct AActor* DestroyedActor); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnVehicleDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_HeldObject_Parent(int32_t EntryPoint); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ExecuteUbergraph_BGA_HeldObject_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

