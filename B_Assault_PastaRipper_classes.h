// BlueprintGeneratedClass B_Assault_PastaRipper.B_Assault_PastaRipper_C
// Size: 0x1400 (Inherited: 0x13c0)
struct AB_Assault_PastaRipper_C : AB_Assault_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	bool Is Targeting; // 0x13c8(0x01)
	char pad_13C9[0x7]; // 0x13c9(0x07)
	struct USoundBase* TransformIntoADSAudio; // 0x13d0(0x08)
	struct FLinearColor ADSColor; // 0x13d8(0x10)
	struct USoundBase* TransformOutOfADSAudio; // 0x13e8(0x08)
	struct FLinearColor Hipfire Color; // 0x13f0(0x10)

	void OnSetTargeting(bool bNewIsTargeting); // Function B_Assault_PastaRipper.B_Assault_PastaRipper_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Assault_PastaRipper.B_Assault_PastaRipper_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Assault_PastaRipper(int32_t EntryPoint); // Function B_Assault_PastaRipper.B_Assault_PastaRipper_C.ExecuteUbergraph_B_Assault_PastaRipper // (Final|UbergraphFunction) // @ game+0xda7c34
};

