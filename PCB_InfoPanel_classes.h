// WidgetBlueprintGeneratedClass PCB_InfoPanel.PCB_InfoPanel_C
// Size: 0x318 (Inherited: 0x2b0)
struct UPCB_InfoPanel_C : UFortPCBInfoPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UImage* BoltL; // 0x2b8(0x08)
	struct UImage* BoltR; // 0x2c0(0x08)
	struct UImage* Border; // 0x2c8(0x08)
	struct UImage* CrownGlow; // 0x2d0(0x08)
	struct UImage* HandGlow; // 0x2d8(0x08)
	struct UImage* HeaderGlow; // 0x2e0(0x08)
	struct UImage* IconGlow; // 0x2e8(0x08)
	struct UImage* Image_10; // 0x2f0(0x08)
	struct UImage* Image_11; // 0x2f8(0x08)
	struct UImage* PCBIcon; // 0x300(0x08)
	struct UCommonTextBlock* Text_Body; // 0x308(0x08)
	struct UCommonTextBlock* Text_Header; // 0x310(0x08)

	void CmsDataRead(); // Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PCB_InfoPanel(int32_t EntryPoint); // Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

