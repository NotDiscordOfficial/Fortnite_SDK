// BlueprintGeneratedClass BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C
// Size: 0xa80 (Inherited: 0x898)
struct ABGA_Athena_Lock_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UStaticMeshComponent* Lock; // 0x8a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8a8(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x8b0(0x08)
	struct UBoxComponent* InteractionCollision; // 0x8b8(0x08)
	struct ABuildingActor* AttachedLockActor; // 0x8c0(0x08)
	bool CanFirstInteract; // 0x8c8(0x01)
	bool CanSecondInteract; // 0x8c9(0x01)
	bool CanInteractWhileUnlocked; // 0x8ca(0x01)
	char pad_8CB[0x5]; // 0x8cb(0x05)
	struct FText FirstInteractText; // 0x8d0(0x18)
	struct FText SecondInteractText; // 0x8e8(0x18)
	struct FScalableFloat FirstInteractTime; // 0x900(0x28)
	struct FScalableFloat SecondInteractTime; // 0x928(0x28)
	bool SetLockOnFirstInteract; // 0x950(0x01)
	bool SetLockOnSecondInteract; // 0x951(0x01)
	char pad_952[0x6]; // 0x952(0x06)
	struct AFortPawn* LastInteractingPawn; // 0x958(0x08)
	bool CanMultipleInteract; // 0x960(0x01)
	enum class Enum_Athena_Lock LockState; // 0x961(0x01)
	bool EverInteractSetLock; // 0x962(0x01)
	char pad_963[0x1]; // 0x963(0x01)
	struct FGameplayTag Event_Locked; // 0x964(0x08)
	struct FGameplayTag Event_Unlocked; // 0x96c(0x08)
	bool DoLockCheckFirstInteract; // 0x974(0x01)
	bool DoLockCheckSecondInteract; // 0x975(0x01)
	bool ApplyEffectOnFailCheck; // 0x976(0x01)
	char pad_977[0x1]; // 0x977(0x01)
	struct UGameplayEffect* GE_FailedCheck; // 0x978(0x08)
	float MaxInteractAngle; // 0x980(0x04)
	char pad_984[0x4]; // 0x984(0x04)
	struct FScalableFloat Row_RelockDelay; // 0x988(0x28)
	bool AutoRelock; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)
	struct FScalableFloat Row_SelfInteractEnabled; // 0x9b8(0x28)
	struct FScalableFloat Row_DoNotLockActor; // 0x9e0(0x28)
	struct FMulticastInlineDelegate OnUnlockedDispatcher; // 0xa08(0x10)
	struct FMulticastInlineDelegate OnLockedDispatcher; // 0xa18(0x10)
	bool AutoAttachToParentActors; // 0xa28(0x01)
	bool AutoCloseDoorOnLock; // 0xa29(0x01)
	bool AutoDoorOnUnlock; // 0xa2a(0x01)
	bool AutoOpenContainersOnUnlock; // 0xa2b(0x01)
	bool SetsAllowInteractOnUnlock; // 0xa2c(0x01)
	enum class Enum_MANG_Security_ID Lock ID; // 0xa2d(0x01)
	char pad_A2E[0x2]; // 0xa2e(0x02)
	struct AActor* BlankLinkedActor; // 0xa30(0x08)
	struct UStaticMesh* UnlockedMesh; // 0xa38(0x08)
	struct UMaterialInterface* UnlockedMaterial; // 0xa40(0x08)
	struct UStaticMesh* LockedMesh; // 0xa48(0x08)
	struct UMaterialInterface* LockedMaterial; // 0xa50(0x08)
	bool HasMultipleLocks; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct TArray<struct ABGA_Athena_Lock_Parent_C*> OtherLocksOnActor; // 0xa60(0x10)
	struct FGameplayTag GC_Unlocked; // 0xa70(0x08)
	struct FGameplayTag GC_Locked; // 0xa78(0x08)

	void ExecuteValidGC(struct FGameplayTag GameplayCueTag); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ExecuteValidGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AllLocksUnlocked(bool AllUnlocked); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.AllLocksUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetLockVisuals(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.SetLockVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Lock Set Interact Collision(bool On); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.Lock Set Interact Collision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LockCheck(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool CheckPassed); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_EverInteractSetLock(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_EverInteractSetLock // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_LockState(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_LockState // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnReady_19560710434050E125B3ADA0163CD609(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnReady_19560710434050E125B3ADA0163CD609 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetLock(enum class Enum_Athena_Lock LockState); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.SetLock // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFirstInteract(struct AFortPawn* InteractingPawn); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnFirstInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSecondInteract(struct AFortPawn* InteractingPawn); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnSecondInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLocked(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLocked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUnLocked(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnLocked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HideAndKill(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.HideAndKill // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyFailCheckEffect(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ApplyFailCheckEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TimedRelock(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.TimedRelock // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OpenContainers(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OpenContainers // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LockCloseDoor(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnlockOpenDoor(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.UnlockOpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NotEnabled(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.NotEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ParentActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ParentActorDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FindOtherLocks(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.FindOtherLocks // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupMultipleLocks(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.SetupMultipleLocks // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_Lock_Parent(int32_t EntryPoint); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Lock_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnLockedDispatcher__DelegateSignature(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLockedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUnlockedDispatcher__DelegateSignature(); // Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnlockedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

