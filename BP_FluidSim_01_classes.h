// BlueprintGeneratedClass BP_FluidSim_01.BP_FluidSim_01_C
// Size: 0x459 (Inherited: 0x220)
struct ABP_FluidSim_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UMaterialInstanceDynamic* RippleSimMID; // 0x230(0x08)
	struct UMaterialInstanceDynamic* RenderNormalsMID; // 0x238(0x08)
	struct UMaterialInstanceDynamic* DisplayMID; // 0x240(0x08)
	struct UMaterialInstanceDynamic* DisplayBottomMID; // 0x248(0x08)
	struct UMaterialInstanceDynamic* CrossSectionMID; // 0x250(0x08)
	struct TArray<struct UTextureRenderTarget2D*> RippleRTs; // 0x258(0x10)
	struct UMaterialInterface* Display Material; // 0x268(0x08)
	float Virtual FPS; // 0x270(0x04)
	int32_t Passes; // 0x274(0x04)
	float TimeAccumulator; // 0x278(0x04)
	float FixedStep; // 0x27c(0x04)
	bool Enabled; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float Fluid Size; // 0x284(0x04)
	int32_t Resolution; // 0x288(0x04)
	enum class FluidBoundary Boundary Condition; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	float Travel Speed; // 0x290(0x04)
	float Damping; // 0x294(0x04)
	struct UTextureRenderTarget2D* NormalRT; // 0x298(0x08)
	struct FVector CutPos; // 0x2a0(0x0c)
	struct FVector PrevLoc; // 0x2ac(0x0c)
	struct FVector PrecLoc2; // 0x2b8(0x0c)
	struct FVector PrevOffset; // 0x2c4(0x0c)
	struct FVector PrevOffset2; // 0x2d0(0x0c)
	struct FVector GridCenter; // 0x2dc(0x0c)
	struct UTextureRenderTarget2D* TempRT; // 0x2e8(0x08)
	struct UTextureRenderTarget2D* ForcesRT; // 0x2f0(0x08)
	float ApplyForces; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct ALandscapeWaterInfo_C* LandscapeWaterInfo; // 0x300(0x08)
	int32_t Renders Per Frame; // 0x308(0x04)
	bool Show Cross Section; // 0x30c(0x01)
	bool Perf Test Mode; // 0x30d(0x01)
	char pad_30E[0x2]; // 0x30e(0x02)
	struct UTextureRenderTarget2D* PerfRT; // 0x310(0x08)
	struct TArray<struct FFluidForceImpulsePerInstanceData> ImpulseForces; // 0x318(0x10)
	struct TMap<struct UActorComponent*, struct FFluidForceDynamicPerInstanceData> DynamicForces; // 0x328(0x50)
	struct TMap<struct UMaterialInterface*, struct UMaterialInstanceDynamic*> ForceParentAndMIDMap; // 0x378(0x50)
	bool Show Simulation Mesh; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UStaticMeshComponent* Fluid Display Mesh; // 0x3d0(0x08)
	struct UStaticMeshComponent* Cross Section Mesh; // 0x3d8(0x08)
	float FluidSizeSquared; // 0x3e0(0x04)
	bool LocalPawnRef; // 0x3e4(0x01)
	bool Debug Text; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	int32_t Pawn Check Every N Frames; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct TMap<struct UActorComponent*, struct FFluidForceDynamicPerInstanceData> ProjectileForces; // 0x3f0(0x50)
	bool Follow Player ; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	int32_t Frames Since Last Active Force; // 0x444(0x04)
	bool Use Terrain Water System; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UMaterialInstanceDynamic* PhysicsForceMID; // 0x450(0x08)
	bool Add Physics Forces; // 0x458(0x01)

	void Get Frames Since Last Active Forces(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Clear Sim from Waterbody MIDs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Remove Projectile Force(struct UActorComponent* Component); // Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Register Projectile Force(struct FFluidForceDynamic Dynamic Fluid Force, struct USceneComponent* Tracked Component); // Function BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetPlayerPawnForces(); // Function BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Validate RTs(bool RTs All Valid); // Function BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Waterbody MID Params(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetLocalPawn(struct APawn* Pawn); // Function BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Draw Dynamic Force(struct UCanvas* Canvas, struct FVector2D Canvas Size, struct FFluidForceDynamicPerInstanceData Dynamic Force Settings); // Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Remove Dynamic Force(struct UActorComponent* Component); // Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Register Dynamic Force(struct FFluidForceDynamic Dynamic Fluid Force, struct USceneComponent* Tracked Component, float WaterLevel); // Function BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Dynamic Forces(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Draw Impulse Force(struct UCanvas* Canvas, struct FVector2D Canvas Size, struct FFluidForceImpulsePerInstanceData Impulse Settings); // Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Impulse Lifetimes(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Apply Fluid Force Impulse(struct FFluidForceImpulse Impulse Settings); // Function BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get LandscapeWaterInfo(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Force MID(struct UMaterialInterface* Parent, struct UMaterialInstanceDynamic* Mid); // Function BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GridMovement(); // Function BP_FluidSim_01.BP_FluidSim_01_C.GridMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupSimMIDs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDisplayMIDs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Convert Force Position(struct FVector Force Location, float Sine Bob, struct FVector UV Location); // Function BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Cycle Render Targets(struct UTextureRenderTarget2D* Current Target); // Function BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Clear RTs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Allocate RTs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReCheckScalability(); // Function BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Release RTs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Release RTs // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FluidGridDebug(); // Function BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_FluidSim_01(int32_t EntryPoint); // Function BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

