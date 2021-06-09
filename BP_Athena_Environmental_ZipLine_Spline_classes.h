// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C
// Size: 0xaf8 (Inherited: 0xa60)
struct ABP_Athena_Environmental_ZipLine_Spline_C : AFortAthenaSplineZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa60(0x08)
	struct UStaticMesh* SplineStaticMesh; // 0xa68(0x08)
	float TangentSmoothStrength; // 0xa70(0x04)
	bool AutoSmoothTangents; // 0xa74(0x01)
	enum class ESplineMeshAxis ForwardMeshAxis; // 0xa75(0x01)
	char pad_A76[0x2]; // 0xa76(0x02)
	struct FVector MotorOffset; // 0xa78(0x0c)
	char pad_A84[0x4]; // 0xa84(0x04)
	struct AActor* PoleA; // 0xa88(0x08)
	struct AActor* PoleB; // 0xa90(0x08)
	struct FVector PoleASocketLocation; // 0xa98(0x0c)
	struct FVector PoleBSocketLocation; // 0xaa4(0x0c)
	int32_t LowerPointID; // 0xab0(0x04)
	int32_t HigherPointID; // 0xab4(0x04)
	struct FVector HigherEndLocation; // 0xab8(0x0c)
	struct FVector LowerEndLocation; // 0xac4(0x0c)
	float AutoLinearFactorLow; // 0xad0(0x04)
	float AutoLinearFactorHigh; // 0xad4(0x04)
	float AutoSplineTangentLengthCoef; // 0xad8(0x04)
	float AutoSplineTangentHorizCoef; // 0xadc(0x04)
	float AutoSplineTangentVertCoef; // 0xae0(0x04)
	bool Auto Set Spline Ends; // 0xae4(0x01)
	bool Auto Set Spline Mids; // 0xae5(0x01)
	char pad_AE6[0x2]; // 0xae6(0x02)
	struct TArray<struct UMaterialInstanceDynamic*> SplineMaterials; // 0xae8(0x10)

	void GetAutoHorizAndVertVectors(struct FVector highVector, struct FVector LowVector, struct FVector VertVec, struct FVector HorizVec); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.GetAutoHorizAndVertVectors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Calc Auto Location At Alpha(float InAlpha, bool DrawDebug, struct FVector PointLocation); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.Calc Auto Location At Alpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32_t ID); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetSplinePositionAndTangent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculatePositionOfPoles(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.CalculatePositionOfPoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AutoSmoothTanget(struct FVector Tangent, struct FVector PointA, struct FVector PointB, struct FVector SmoothedTangent); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AutoSmoothTanget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void AddSplineMeshSegment(struct USplineMeshComponent* SplineMeshSegment); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AddSplineMeshSegment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayerAttachedToZipline(struct AFortPlayerPawn* PlayerPawn); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerAttachedToZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayerDetachedFromZipline(struct AFortPlayerPawn* PlayerPawn); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerDetachedFromZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline(int32_t EntryPoint); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline // (Final|UbergraphFunction) // @ game+0xda7c34
};

