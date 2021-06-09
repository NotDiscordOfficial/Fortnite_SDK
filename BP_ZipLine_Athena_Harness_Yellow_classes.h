// BlueprintGeneratedClass BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
// Size: 0x358 (Inherited: 0x314)
struct ABP_ZipLine_Athena_Harness_Yellow_C : ABP_ZipLine_Athena_Harness_C {
	char pad_314[0x4]; // 0x314(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNiagaraComponent* NS_Zipline_Pulley_SpeedLines_Converted; // 0x320(0x08)
	struct UNiagaraComponent* NS_Zipline_Speedline; // 0x328(0x08)
	float Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE; // 0x330(0x04)
	enum class ETimelineDirection Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* Alpha; // 0x338(0x08)
	float Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501; // 0x340(0x04)
	enum class ETimelineDirection Spark__Direction_A812B2F04CB78DDF352B84A578861501; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct UTimelineComponent* spark; // 0x348(0x08)
	float BeginLocation_z; // 0x350(0x04)
	float Location; // 0x354(0x04)

	void Spark__FinishedFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Spark__UpdateFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Alpha__FinishedFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Alpha__UpdateFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateZiplineFX(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.UpdateZiplineFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Begin Z(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Update Begin Z // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetBlue(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ResetBlue // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32_t EntryPoint); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

