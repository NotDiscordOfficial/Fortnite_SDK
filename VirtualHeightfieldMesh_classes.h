// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
// Size: 0x70 (Inherited: 0x28)
struct UHeightfieldMinMaxTexture : UObject {
	struct UTexture2D* Texture; // 0x28(0x08)
	struct UTexture2D* LodBiasTexture; // 0x30(0x08)
	struct UTexture2D* LodBiasMinMaxTexture; // 0x38(0x08)
	int32_t MaxCPULevels; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FVector2D> TextureData; // 0x48(0x10)
	struct FIntPoint TextureDataSize; // 0x58(0x08)
	struct TArray<int32_t> TextureDataMips; // 0x60(0x10)
};

// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionHeightfieldMinMaxTexture : UMaterialExpression {
	struct UHeightfieldMinMaxTexture* MinMaxTexture; // 0x40(0x08)
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
// Size: 0x228 (Inherited: 0x220)
struct AVirtualHeightfieldMesh : AActor {
	struct UVirtualHeightfieldMeshComponent* VirtualHeightfieldMeshComponent; // 0x220(0x08)
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
// Size: 0x4c0 (Inherited: 0x450)
struct UVirtualHeightfieldMeshComponent : UPrimitiveComponent {
	struct TSoftObjectPtr<struct ARuntimeVirtualTextureVolume> VirtualTexture; // 0x448(0x28)
	struct ARuntimeVirtualTextureVolume* VirtualTextureRef; // 0x470(0x08)
	struct UObject* VirtualTextureThumbnail; // 0x478(0x08)
	bool bCopyBoundsButton; // 0x480(0x01)
	struct UHeightfieldMinMaxTexture* MinMaxTexture; // 0x488(0x08)
	int32_t NumMinMaxTextureBuildLevels; // 0x490(0x04)
	bool bBuildMinMaxTextureButton; // 0x494(0x01)
	char pad_496[0x2]; // 0x496(0x02)
	struct UMaterialInterface* Material; // 0x498(0x08)
	float Lod0ScreenSize; // 0x4a0(0x04)
	float Lod0Distribution; // 0x4a4(0x04)
	float LodDistribution; // 0x4a8(0x04)
	float LodBiasScale; // 0x4ac(0x04)
	int32_t NumForceLoadLods; // 0x4b0(0x04)
	int32_t NumOcclusionLods; // 0x4b4(0x04)
	bool bHiddenInEditor; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)

	void GatherHideFlags(bool InOutHidePrimitivesInEditor, bool InOutHidePrimitivesInGame); // Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags // (Final|Native|Protected|HasOutParms|Const) // @ game+0x42f2458
};

