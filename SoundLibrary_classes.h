// Class SoundLibrary.SoundLibraryContext
// Size: 0x30 (Inherited: 0x28)
struct USoundLibraryContext : UObject {
	struct AActor* Actor; // 0x28(0x08)
};

// Class SoundLibrary.SoundLibraryAnimContext
// Size: 0x60 (Inherited: 0x30)
struct USoundLibraryAnimContext : USoundLibraryContext {
	struct FSoundLibraryAnimContextSettings AnimSettings; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UAnimSequenceBase* Animation; // 0x50(0x08)
	float AnimRate; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	void ConfigureContext(struct AActor* OwningActor, struct UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings InSettings); // Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x40fc1f8
};

// Class SoundLibrary.AnimNotifyState_SoundLibrary
// Size: 0x78 (Inherited: 0x30)
struct UAnimNotifyState_SoundLibrary : UAnimNotifyState {
	struct USoundLibraryContext* SoundContext; // 0x30(0x08)
	struct TArray<struct UAudioComponent*> PlayingComps; // 0x38(0x10)
	struct FSoundLibraryPlaySoundResult PlaybackResult; // 0x48(0x30)
};

// Class SoundLibrary.SoundLibraryComponent
// Size: 0xd8 (Inherited: 0xb0)
struct USoundLibraryComponent : UActorComponent {
	struct FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0xb0(0x10)
	struct TArray<struct USoundLibrary*> SoundLibraries; // 0xc0(0x10)
	bool bAutoEnable; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	void Enable(); // Function SoundLibrary.SoundLibraryComponent.Enable // (Native|Public|BlueprintCallable) // @ game+0x1dd3120
	void Disable(); // Function SoundLibrary.SoundLibraryComponent.Disable // (Native|Public|BlueprintCallable) // @ game+0x40fc37c
};

// Class SoundLibrary.SoundLibrarySubsystem
// Size: 0x120 (Inherited: 0x30)
struct USoundLibrarySubsystem : UWorldSubsystem {
	char pad_30[0xf0]; // 0x30(0xf0)

	void RemoveLibrary(struct AActor* Actor, struct USoundLibrary* Library); // Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x40fc5f8
	void RemoveLibraries(struct AActor* Actor, struct TArray<struct USoundLibrary*> Libraries); // Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x12a32d8
	void PlaySound(struct USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult OutResults); // Function SoundLibrary.SoundLibrarySubsystem.PlaySound // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x40fc4cc
	void EnableEventsForActor(struct AActor* Actor); // Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor // (Final|Native|Public|BlueprintCallable) // @ game+0x40fc430
	void DisableEventsForActor(struct AActor* Actor); // Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor // (Final|Native|Public|BlueprintCallable) // @ game+0x40fc394
	void AddLibrary(struct AActor* Actor, struct USoundLibrary* Library); // Function SoundLibrary.SoundLibrarySubsystem.AddLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x40fbe58
	void AddLibraries(struct AActor* Actor, struct TArray<struct USoundLibrary*> Libraries); // Function SoundLibrary.SoundLibrarySubsystem.AddLibraries // (Final|Native|Public|BlueprintCallable) // @ game+0x12a34f8
};

// Class SoundLibrary.SimpleSoundLibraryContext
// Size: 0x40 (Inherited: 0x30)
struct USimpleSoundLibraryContext : USoundLibraryContext {
	struct FSimpleSoundLibraryContextSettings Settings; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)

	void ConfigureContext(struct AActor* OwningActor, struct FSimpleSoundLibraryContextSettings InSettings); // Function SoundLibrary.SimpleSoundLibraryContext.ConfigureContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x40fc0e8
};

// Class SoundLibrary.AttachedSoundLibraryContext
// Size: 0x40 (Inherited: 0x30)
struct UAttachedSoundLibraryContext : USoundLibraryContext {
	struct FAttachedSoundLibraryContextSettings Settings; // 0x30(0x10)

	void ConfigureContext(struct AActor* OwningActor, struct FAttachedSoundLibraryContextSettings InSettings); // Function SoundLibrary.AttachedSoundLibraryContext.ConfigureContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x40fbfe0
};

// Class SoundLibrary.SoundLibrary
// Size: 0xb0 (Inherited: 0x28)
struct USoundLibrary : UObject {
	struct TMap<struct FGameplayTag, struct TSoftObjectPtr<struct USoundBase>> Sounds; // 0x28(0x50)
	struct TArray<struct USoundBase*> LoadedSoundObjects; // 0x78(0x10)
	char pad_88[0x28]; // 0x88(0x28)
};

