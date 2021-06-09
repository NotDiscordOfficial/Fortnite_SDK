// Enum EntityActor.EEntityActorReplicationRelevancyBucketType
enum class EEntityActorReplicationRelevancyBucketType : uint8 {
	UseVisualCullDistanceForReplicationRelevancy,
	SmallReplicationRelevancy,
	MediumReplicationRelevancy,
	LargeReplicationRelevancy,
	MaxTargetRangeReplicationRelevancy,
	ImportantReplicationRelevancy,
	CustomReplicationRelevancy,
	EEntityActorReplicationRelevancyBucketType_MAX,
};

// Enum EntityActor.EEntityActorReplicationOverrideType
enum class EEntityActorReplicationOverrideType : uint8 {
	AutoReplication,
	DoNotReplicate,
	ReplicateAlways,
	Static_Spatial,
	Dynamic_Spatial,
	Dormancy_Spatial,
	EEntityActorReplicationOverrideType_MAX,
};

// Enum EntityActor.EDefaultAnimationMode
enum class EDefaultAnimationMode : uint8 {
	UseAnimationBlueprint,
	UseAnimationAsset,
	UseCustomMode,
	EDefaultAnimationMode_MAX,
};

// Enum EntityActor.EDefaultStaticMesh
enum class EDefaultStaticMesh : uint8 {
	Cube,
	Sphere,
	Cylinder,
	Cone,
	Plane,
	EDefaultStaticMesh_MAX,
};

// Enum EntityActor.ESimObjectRepNodeMapping
enum class ESimObjectRepNodeMapping : uint8 {
	NotReplicated,
	RelevantAllInsidePlayspace,
	Spatial_Static,
	Spatial_Dynamic,
	Spatial_Dormancy,
	ESimObjectRepNodeMapping_MAX,
};

