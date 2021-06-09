// Class ImagePlate.ImagePlate
// Size: 0x228 (Inherited: 0x220)
struct AImagePlate : AActor {
	struct UImagePlateComponent* ImagePlate; // 0x220(0x08)
};

// Class ImagePlate.ImagePlateComponent
// Size: 0x510 (Inherited: 0x450)
struct UImagePlateComponent : UPrimitiveComponent {
	struct FImagePlateParameters Plate; // 0x448(0x38)
	char pad_488[0x88]; // 0x488(0x88)

	void SetImagePlate(struct FImagePlateParameters Plate); // Function ImagePlate.ImagePlateComponent.SetImagePlate // (Final|Native|Public|BlueprintCallable) // @ game+0x3fc2b98
	void OnRenderTextureChanged(); // Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged // (Final|Native|Public) // @ game+0x3fc2b84
	struct FImagePlateParameters GetPlate(); // Function ImagePlate.ImagePlateComponent.GetPlate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fc2b44
};

// Class ImagePlate.ImagePlateSettings
// Size: 0x38 (Inherited: 0x28)
struct UImagePlateSettings : UObject {
	struct FString ProxyName; // 0x28(0x10)
};

// Class ImagePlate.ImagePlateFileSequence
// Size: 0x50 (Inherited: 0x28)
struct UImagePlateFileSequence : UObject {
	struct FDirectoryPath SequencePath; // 0x28(0x10)
	struct FString FileWildcard; // 0x38(0x10)
	float FrameRate; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class ImagePlate.ImagePlateFrustumComponent
// Size: 0x450 (Inherited: 0x450)
struct UImagePlateFrustumComponent : UPrimitiveComponent {
};

// Class ImagePlate.MovieSceneImagePlateSection
// Size: 0xf8 (Inherited: 0xe8)
struct UMovieSceneImagePlateSection : UMovieSceneSection {
	struct UImagePlateFileSequence* FileSequence; // 0xe8(0x08)
	bool bReuseExistingTexture; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// Class ImagePlate.MovieSceneImagePlateTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneImagePlateTrack : UMovieScenePropertyTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

