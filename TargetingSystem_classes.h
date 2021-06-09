// Class TargetingSystem.AsyncAction_PerformTargeting
// Size: 0x68 (Inherited: 0x30)
struct UAsyncAction_PerformTargeting : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnReady; // 0x30(0x10)
	struct UTargetingPreset* TargetingPreset; // 0x40(0x08)
	struct AActor* SourceActor; // 0x48(0x08)
	struct TArray<struct AActor*> InitialTargets; // 0x50(0x10)
	char bUseAsyncTargeting : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	struct UAsyncAction_PerformTargeting* PerformTargetingRequest(struct AActor* SourceActor, struct UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting); // Function TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ffd000
	struct UAsyncAction_PerformTargeting* PerformFilteringRequest(struct AActor* SourceActor, struct UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, struct TArray<struct AActor*> InTargets); // Function TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ffcd54
};

// Class TargetingSystem.TargetingTask
// Size: 0x28 (Inherited: 0x28)
struct UTargetingTask : UObject {
};

// Class TargetingSystem.TargetingFilterTask_BasicFilterTemplate
// Size: 0x28 (Inherited: 0x28)
struct UTargetingFilterTask_BasicFilterTemplate : UTargetingTask {
};

// Class TargetingSystem.TargetingFilterTask_ActorClass
// Size: 0x48 (Inherited: 0x28)
struct UTargetingFilterTask_ActorClass : UTargetingFilterTask_BasicFilterTemplate {
	struct TArray<struct UObject*> RequiredActorClassFilters; // 0x28(0x10)
	struct TArray<struct UObject*> IgnoredActorClassFilters; // 0x38(0x10)
};

// Class TargetingSystem.TargetingFilterTask_SortByDistance
// Size: 0x30 (Inherited: 0x28)
struct UTargetingFilterTask_SortByDistance : UTargetingTask {
	char bAscending : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class TargetingSystem.TargetingPreset
// Size: 0x40 (Inherited: 0x30)
struct UTargetingPreset : UDataAsset {
	struct FTargetingTaskSet TargetingTaskSet; // 0x30(0x10)
};

// Class TargetingSystem.TargetingSelectionTask_AOE
// Size: 0xa0 (Inherited: 0x28)
struct UTargetingSelectionTask_AOE : UTargetingTask {
	enum class ETargetingAOEShape ShapeType; // 0x28(0x01)
	enum class ECollisionChannel CollisionChannel; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FCollisionProfileName CollisionProfileName; // 0x2c(0x08)
	char bIgnoreSourceActor : 1; // 0x34(0x01)
	char bIgnoreInstigatorActor : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector HalfExtent; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FScalableFloat Radius; // 0x48(0x28)
	struct FScalableFloat HalfHeight; // 0x70(0x28)
	struct FName ComponentTag; // 0x98(0x08)

	struct FVector GetSourceOffset(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3ffc600
	struct FVector GetSourceLocation(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3ffc478
};

// Class TargetingSystem.TargetingSelectionTask_SourceActor
// Size: 0x28 (Inherited: 0x28)
struct UTargetingSelectionTask_SourceActor : UTargetingTask {
};

// Class TargetingSystem.TargetingSelectionTask_Trace
// Size: 0xa8 (Inherited: 0x28)
struct UTargetingSelectionTask_Trace : UTargetingTask {
	enum class ETargetingTraceType TraceType; // 0x28(0x01)
	enum class ETraceTypeQuery TraceChannel; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FCollisionProfileName CollisionProfileName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FScalableFloat DefaultSweptTraceRadius; // 0x38(0x28)
	struct FScalableFloat DefaultTraceLength; // 0x60(0x28)
	struct FVector DefaultSourceOffset; // 0x88(0x0c)
	struct FVector ExplicitTraceDirection; // 0x94(0x0c)
	char bComplexTrace : 1; // 0xa0(0x01)
	char bIgnoreSourceActor : 1; // 0xa0(0x01)
	char bIgnoreInstigatorActor : 1; // 0xa0(0x01)
	char pad_A0_3 : 5; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	float GetTraceLength(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3ffcca0
	struct FVector GetTraceDirection(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3ffcbdc
	float GetSweptTraceRadius(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3ffc788
	struct FVector GetSourceOffset(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3ffc6c4
	struct FVector GetSourceLocation(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3ffc53c
	void GetAdditionalActorsToIgnore(struct FTargetingRequestHandle TargetingHandle, struct TArray<struct AActor*> OutAdditionalActorsToIgnore); // Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3ffc34c
};

// Class TargetingSystem.TargetingSubsystem
// Size: 0x50 (Inherited: 0x30)
struct UTargetingSubsystem : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct FTargetingRequestHandle> AsyncTargetingRequests; // 0x40(0x10)

	void StartAsyncTargetingRequest(struct UTargetingPreset* TargetingPreset, struct FTargetingSourceContext InSourceContext, struct FDelegate CompletionDynamicDelegate); // Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ffd134
	struct FTargetingSourceContext GetTargetingSourceContext(struct FTargetingRequestHandle TargetingHandle); // Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ffca70
	void GetTargetingResultsActors(struct FTargetingRequestHandle TargetingHandle, struct TArray<struct AActor*> Targets); // Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3ffc83c
	void ExecuteTargetingRequest(struct UTargetingPreset* TargetingPreset, struct FTargetingSourceContext InSourceContext, struct FDelegate CompletionDynamicDelegate); // Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x3ffc18c
};

