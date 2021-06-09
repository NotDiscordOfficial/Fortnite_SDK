// BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C
// Size: 0xda3 (Inherited: 0xc90)
struct AB_TargetTrack_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct USphereComponent* ProximityTrigger; // 0xc98(0x08)
	struct UAudioComponent* Target_Move_Loop_Cue; // 0xca0(0x08)
	struct UAudioComponent* Target_Move_Stop_Cue; // 0xca8(0x08)
	struct UAudioComponent* Target_Move_Start_Cue; // 0xcb0(0x08)
	struct UToyOptionsComponent_C* ToyOptionsComponent; // 0xcb8(0x08)
	struct USceneComponent* TargetAttachPoint; // 0xcc0(0x08)
	struct UStaticMeshComponent* SM_Target_Track; // 0xcc8(0x08)
	float TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC; // 0xcd0(0x04)
	enum class ETimelineDirection TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC; // 0xcd4(0x01)
	char pad_CD5[0x3]; // 0xcd5(0x03)
	struct UTimelineComponent* TargetMovement; // 0xcd8(0x08)
	struct FTransform BaseTransformForTarget; // 0xce0(0x30)
	float LengthScaleSetting; // 0xd10(0x04)
	float DelayAtEndSetting; // 0xd14(0x04)
	float ProximityTriggerSizeSetting; // 0xd18(0x04)
	float InitialMovementDelaySetting; // 0xd1c(0x04)
	float TrackSpeedSetting; // 0xd20(0x04)
	bool IsCurrentlyMoving; // 0xd24(0x01)
	bool AtStartPoint; // 0xd25(0x01)
	bool LoopingSetting; // 0xd26(0x01)
	char pad_D27[0x1]; // 0xd27(0x01)
	int32_t RotationSetting; // 0xd28(0x04)
	char pad_D2C[0x4]; // 0xd2c(0x04)
	struct AB_ShootingTarget_Master_C* AttachedTarget; // 0xd30(0x08)
	struct TSoftObjectPtr<struct UStaticMesh> LeftRightTargetBaseMesh; // 0xd38(0x28)
	struct TSoftObjectPtr<struct UStaticMesh> ForwardBackwardTargetBaseMesh; // 0xd60(0x28)
	struct TArray<struct UPrimitiveComponent*> NewVar_1; // 0xd88(0x10)
	bool IsTargetUp; // 0xd98(0x01)
	char CurrentMovementState; // 0xd99(0x01)
	char pad_D9A[0x2]; // 0xd9a(0x02)
	int32_t Audio Speed Parameter; // 0xd9c(0x04)
	char LeftToRightmovementState; // 0xda0(0x01)
	char RightToLeftMovementState; // 0xda1(0x01)
	char StopMovementState; // 0xda2(0x01)

	struct TArray<struct UMeshComponent*> GetMeshComponents(); // Function B_TargetTrack.B_TargetTrack_C.GetMeshComponents // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct UStaticMesh* GetCollisionStaticMesh(); // Function B_TargetTrack.B_TargetTrack_C.GetCollisionStaticMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Set Audio Speed Sound(float Target Speed); // Function B_TargetTrack.B_TargetTrack_C.Set Audio Speed Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_CurrentMovementState(); // Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentMovementState // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMovementState(char State); // Function B_TargetTrack.B_TargetTrack_C.SetMovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateLerpedPosition(float Alpha); // Function B_TargetTrack.B_TargetTrack_C.UpdateLerpedPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_CurrentLerpValue(); // Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentLerpValue // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateForRepNotify(); // Function B_TargetTrack.B_TargetTrack_C.UpdateForRepNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_IsCurrentlyMoving(); // Function B_TargetTrack.B_TargetTrack_C.OnRep_IsCurrentlyMoving // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_CurrentDirection(); // Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_IsTargetUp(); // Function B_TargetTrack.B_TargetTrack_C.OnRep_IsTargetUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_ServerMoveStartTime(); // Function B_TargetTrack.B_TargetTrack_C.OnRep_ServerMoveStartTime // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTrackLength(); // Function B_TargetTrack.B_TargetTrack_C.SetTrackLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTargetRotationAndBaseMesh(); // Function B_TargetTrack.B_TargetTrack_C.SetTargetRotationAndBaseMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float CalculatePlayRate(); // Function B_TargetTrack.B_TargetTrack_C.CalculatePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetFinalDestinationOfTarget(struct FVector Destination); // Function B_TargetTrack.B_TargetTrack_C.GetFinalDestinationOfTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TargetMovement__FinishedFunc(); // Function B_TargetTrack.B_TargetTrack_C.TargetMovement__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TargetMovement__UpdateFunc(); // Function B_TargetTrack.B_TargetTrack_C.TargetMovement__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(struct UObject* Loaded); // Function B_TargetTrack.B_TargetTrack_C.OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_3C01053C48BCC07B689033B6DB9706E0(struct UObject* Loaded); // Function B_TargetTrack.B_TargetTrack_C.OnLoaded_3C01053C48BCC07B689033B6DB9706E0 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_TargetTrack.B_TargetTrack_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void MoveTarget(); // Function B_TargetTrack.B_TargetTrack_C.MoveTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature(); // Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature(); // Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void AttachedTargetKnockedDown(); // Function B_TargetTrack.B_TargetTrack_C.AttachedTargetKnockedDown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopTargetMovement(); // Function B_TargetTrack.B_TargetTrack_C.StopTargetMovement // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttachedTargetPoppedUp(); // Function B_TargetTrack.B_TargetTrack_C.AttachedTargetPoppedUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReverseTargetMovement(); // Function B_TargetTrack.B_TargetTrack_C.ReverseTargetMovement // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AsyncLoadTargetBase(); // Function B_TargetTrack.B_TargetTrack_C.AsyncLoadTargetBase // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_TargetTrack.B_TargetTrack_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void InitializeSettings(); // Function B_TargetTrack.B_TargetTrack_C.InitializeSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_TargetTrack.B_TargetTrack_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Move Target Audio(); // Function B_TargetTrack.B_TargetTrack_C.Move Target Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stop Move Target Audio(); // Function B_TargetTrack.B_TargetTrack_C.Stop Move Target Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_TargetTrack.B_TargetTrack_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_TargetTrack(int32_t EntryPoint); // Function B_TargetTrack.B_TargetTrack_C.ExecuteUbergraph_B_TargetTrack // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

