// Class ChaosCloth.ChaosClothConfig
// Size: 0xe0 (Inherited: 0x28)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UniformMass; // 0x2c(0x04)
	float TotalMass; // 0x30(0x04)
	float Density; // 0x34(0x04)
	float MinPerParticleMass; // 0x38(0x04)
	struct FChaosClothWeightedValue EdgeStiffnessWeighted; // 0x3c(0x08)
	struct FChaosClothWeightedValue BendingStiffnessWeighted; // 0x44(0x08)
	bool bUseBendingElements; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FChaosClothWeightedValue AreaStiffnessWeighted; // 0x50(0x08)
	float VolumeStiffness; // 0x58(0x04)
	struct FChaosClothWeightedValue TetherStiffness; // 0x5c(0x08)
	struct FChaosClothWeightedValue TetherScale; // 0x64(0x08)
	bool bUseGeodesicDistance; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float ShapeTargetStiffness; // 0x70(0x04)
	float CollisionThickness; // 0x74(0x04)
	float FrictionCoefficient; // 0x78(0x04)
	bool bUseCCD; // 0x7c(0x01)
	bool bUseSelfCollisions; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float SelfCollisionThickness; // 0x80(0x04)
	bool bUseLegacyBackstop; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float DampingCoefficient; // 0x88(0x04)
	bool bUsePointBasedWindModel; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FChaosClothWeightedValue Drag; // 0x90(0x08)
	struct FChaosClothWeightedValue Lift; // 0x98(0x08)
	bool bUseGravityOverride; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float GravityScale; // 0xa4(0x04)
	struct FVector Gravity; // 0xa8(0x0c)
	struct FChaosClothWeightedValue AnimDriveStiffness; // 0xb4(0x08)
	struct FChaosClothWeightedValue AnimDriveDamping; // 0xbc(0x08)
	struct FVector LinearVelocityScale; // 0xc4(0x0c)
	float AngularVelocityScale; // 0xd0(0x04)
	float FictitiousAngularScale; // 0xd4(0x04)
	bool bUseTetrahedralConstraints; // 0xd8(0x01)
	bool bUseThinShellVolumeConstraints; // 0xd9(0x01)
	bool bUseContinuousCollisionDetection; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x38 (Inherited: 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28(0x04)
	int32_t SubdivisionCount; // 0x2c(0x04)
	bool bUseLocalSpaceSimulation; // 0x30(0x01)
	bool bUseXPBDConstraints; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x40 (Inherited: 0x30)
struct UChaosClothingInteractor : UClothingInteractor {
	char pad_30[0x10]; // 0x30(0x10)

	void SetWind(struct FVector2D Drag, struct FVector2D Lift, float AirDensity, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetWind // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1876194
	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1875ec8
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x437245c
	void SetMaterial(struct FVector2D EdgeStiffness, struct FVector2D BendingStiffness, struct FVector2D AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterial // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1876720
	void SetLongRangeAttachmentLinear(float TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x43723bc
	void SetLongRangeAttachment(struct FVector2D TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x187668c
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x187602c
	void SetDamping(float DampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping // (Final|Native|Public|BlueprintCallable) // @ game+0x1876354
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x18763f4
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear // (Final|Native|Public|BlueprintCallable) // @ game+0x437231c
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x18765ac
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x43721cc
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x43720d0
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xa0 (Inherited: 0x90)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_90[0x10]; // 0x90(0x10)
};

