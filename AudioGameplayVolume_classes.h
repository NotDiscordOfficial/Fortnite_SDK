// Class AudioGameplayVolume.AudioGameplayVolume
// Size: 0x268 (Inherited: 0x258)
struct AAudioGameplayVolume : AVolume {
	struct UAudioGameplayVolumeProxy* Proxy; // 0x258(0x08)
	bool bEnabled; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)

	void SetEnabled(bool bNewEnabled); // Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x40fdf30
	void OnRep_bEnabled(); // Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled // (Native|Protected) // @ game+0x40fb6c0
};

// Class AudioGameplayVolume.AudioGameplayVolumeProxy
// Size: 0x30 (Inherited: 0x28)
struct UAudioGameplayVolumeProxy : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class AudioGameplayVolume.AGVShapeProxy
// Size: 0x30 (Inherited: 0x30)
struct UAGVShapeProxy : UAudioGameplayVolumeProxy {
};

// Class AudioGameplayVolume.AGVTestProxy
// Size: 0x30 (Inherited: 0x30)
struct UAGVTestProxy : UAudioGameplayVolumeProxy {
};

// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
// Size: 0x118 (Inherited: 0x30)
struct UAudioGameplayVolumeSubsystem : UAudioEngineSubsystem {
	char pad_30[0xe8]; // 0x30(0xe8)
};

