// WidgetBlueprintGeneratedClass AthenaLobby_S17_SeasonalResources.AthenaLobby_S17_SeasonalResources_C
// Size: 0x2d0 (Inherited: 0x2a8)
struct UAthenaLobby_S17_SeasonalResources_C : UFortGlobalSeasonResourceWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UAthenaGlobalCashHorizontal_C* AthenaGlobalCashHorizontal; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image_2; // 0x2c0(0x08)
	struct UMoreInfo_Ressources_Button_C* MoreInfo_Ressources_Button_68; // 0x2c8(0x08)

	void OnStylePointsRewardsSet(int32_t Rewards); // Function AthenaLobby_S17_SeasonalResources.AthenaLobby_S17_SeasonalResources_C.OnStylePointsRewardsSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBattleStarRewardsSet(int32_t Rewards); // Function AthenaLobby_S17_SeasonalResources.AthenaLobby_S17_SeasonalResources_C.OnBattleStarRewardsSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function AthenaLobby_S17_SeasonalResources.AthenaLobby_S17_SeasonalResources_C.BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaLobby_S17_SeasonalResources(int32_t EntryPoint); // Function AthenaLobby_S17_SeasonalResources.AthenaLobby_S17_SeasonalResources_C.ExecuteUbergraph_AthenaLobby_S17_SeasonalResources // (Final|UbergraphFunction) // @ game+0xda7c34
};

