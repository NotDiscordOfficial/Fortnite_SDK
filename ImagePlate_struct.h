// ScriptStruct ImagePlate.ImagePlateParameters
// Size: 0x38 (Inherited: 0x00)
struct FImagePlateParameters {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName TextureParameterName; // 0x08(0x08)
	bool bFillScreen; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D FillScreenAmount; // 0x14(0x08)
	struct FVector2D FixedSize; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture* RenderTexture; // 0x28(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x30(0x08)
};

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieSceneImagePlateSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x18)
	struct FMovieSceneImagePlateSectionParams Params; // 0x38(0x18)
};

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionParams
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneImagePlateSectionParams {
	struct FFrameNumber SectionStartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UImagePlateFileSequence* FileSequence; // 0x08(0x08)
	bool bReuseExistingTexture; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

