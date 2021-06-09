// BlueprintGeneratedClass B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
// Size: 0xc4 (Inherited: 0xb0)
struct UB_GasPump_Valet_Component_C : UGameFrameworkComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool FoundCloseFuelIndicator; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FName Gas Pump Icon Enabled; // 0xbc(0x08)

	void ReceiveBeginPlay(); // Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_GasPump_Valet_Component(int32_t EntryPoint); // Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ExecuteUbergraph_B_GasPump_Valet_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

