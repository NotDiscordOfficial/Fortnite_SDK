// Class FieldSystemEngine.FieldSystemActor
// Size: 0x228 (Inherited: 0x220)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x220(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x520 (Inherited: 0x450)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x448(0x08)
	bool bIsWorldField; // 0x450(0x01)
	bool bIsChaosField; // 0x451(0x01)
	struct TArray<struct TSoftObjectPtr<struct AChaosSolverActor>> SupportedSolvers; // 0x458(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x468(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x498(0x30)
	char pad_4CA[0x56]; // 0x4ca(0x56)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x5d7caf0
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|Native|Public|BlueprintCallable) // @ game+0x26863b4
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d7c8e0
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d7c6ec
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d7c598
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d7c3f0
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d7c29c
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x5d7c0fc
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5d7bfa8
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|Native|Public|BlueprintCallable) // @ game+0x225f8ec
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x5d7be10
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d088
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d130
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xb8 (Inherited: 0xb0)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xb0(0x01)
	enum class EFieldObjectType ObjectType; // 0xb1(0x01)
	enum class EFieldPositionType PositionType; // 0xb2(0x01)
	char pad_B3[0x5]; // 0xb3(0x05)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7cf40
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xb0 (Inherited: 0xb0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d088
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd0 (Inherited: 0xb0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)
	int32_t InteriorValue; // 0xc0(0x04)
	int32_t ExteriorValue; // 0xc4(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5d7d698
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xb8 (Inherited: 0xb0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d898
};

// Class FieldSystemEngine.WaveScalar
// Size: 0xd0 (Inherited: 0xb0)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)
	float WaveLength; // 0xc0(0x04)
	float Period; // 0xc4(0x04)
	enum class EWaveFunctionType Function; // 0xc8(0x01)
	enum class EFieldFalloffType Falloff; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector Position, float WaveLength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1f13170
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xd8 (Inherited: 0xb0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Radius; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	enum class EFieldFalloffType Falloff; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1fd5a60
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xe0 (Inherited: 0xb0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	float Distance; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	struct FVector Normal; // 0xd0(0x0c)
	enum class EFieldFalloffType Falloff; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5d7d384
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x100 (Inherited: 0xb0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0(0x04)
	float MinRange; // 0xb4(0x04)
	float MaxRange; // 0xb8(0x04)
	float Default; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x30)
	enum class EFieldFalloffType Falloff; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5d7cb3c
};

// Class FieldSystemEngine.NoiseField
// Size: 0xf0 (Inherited: 0xb0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0(0x04)
	float MaxRange; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform Transform; // 0xc0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5d7d1d8
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc0 (Inherited: 0xb0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	struct FVector Direction; // 0xb4(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5d7da04
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc0 (Inherited: 0xb0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	struct FVector Position; // 0xb4(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2117cc0
};

// Class FieldSystemEngine.RandomVector
// Size: 0xb8 (Inherited: 0xb0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d898
};

// Class FieldSystemEngine.OperatorField
// Size: 0xd0 (Inherited: 0xb0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UFieldNodeBase* RightField; // 0xb8(0x08)
	struct UFieldNodeBase* LeftField; // 0xc0(0x08)
	enum class EFieldOperationType Operation; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1f2fd98
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xb8 (Inherited: 0xb0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d95c
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xb8 (Inherited: 0xb0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d95c
};

// Class FieldSystemEngine.CullingField
// Size: 0xc8 (Inherited: 0xb0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb0(0x08)
	struct UFieldNodeBase* Field; // 0xb8(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7cdf4
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xb0 (Inherited: 0xb0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5d7d948
};

