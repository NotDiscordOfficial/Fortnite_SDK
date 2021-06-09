// Class VersePlayspace.PlayspaceComponentVerseWrapper
// Size: 0xb8 (Inherited: 0xb0)
struct UPlayspaceComponentVerseWrapper : UPlayspaceComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class VersePlayspace.PlayspaceConfigComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UPlayspaceConfigComponent : UPlayspaceComponent {
	struct UEntityActorPlayerComponent* PlayerComponentClass; // 0xb0(0x08)
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class VersePlayspace.VersePlayspaceObjectHack
// Size: 0x28 (Inherited: 0x28)
struct UVersePlayspaceObjectHack : UObject {
};

