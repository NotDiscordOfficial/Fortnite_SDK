// Enum RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8 {
	Input,
	Output,
	Invalid,
	ERigVMParameterType_MAX,
};

// Enum RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8 {
	Execute_0_Operands,
	Execute_1_Operands,
	Execute_2_Operands,
	Execute_3_Operands,
	Execute_4_Operands,
	Execute_5_Operands,
	Execute_6_Operands,
	Execute_7_Operands,
	Execute_8_Operands,
	Execute_9_Operands,
	Execute_10_Operands,
	Execute_11_Operands,
	Execute_12_Operands,
	Execute_13_Operands,
	Execute_14_Operands,
	Execute_15_Operands,
	Execute_16_Operands,
	Execute_17_Operands,
	Execute_18_Operands,
	Execute_19_Operands,
	Execute_20_Operands,
	Execute_21_Operands,
	Execute_22_Operands,
	Execute_23_Operands,
	Execute_24_Operands,
	Execute_25_Operands,
	Execute_26_Operands,
	Execute_27_Operands,
	Execute_28_Operands,
	Execute_29_Operands,
	Execute_30_Operands,
	Execute_31_Operands,
	Execute_32_Operands,
	Execute_33_Operands,
	Execute_34_Operands,
	Execute_35_Operands,
	Execute_36_Operands,
	Execute_37_Operands,
	Execute_38_Operands,
	Execute_39_Operands,
	Execute_40_Operands,
	Execute_41_Operands,
	Execute_42_Operands,
	Execute_43_Operands,
	Execute_44_Operands,
	Execute_45_Operands,
	Execute_46_Operands,
	Execute_47_Operands,
	Execute_48_Operands,
	Execute_49_Operands,
	Execute_50_Operands,
	Execute_51_Operands,
	Execute_52_Operands,
	Execute_53_Operands,
	Execute_54_Operands,
	Execute_55_Operands,
	Execute_56_Operands,
	Execute_57_Operands,
	Execute_58_Operands,
	Execute_59_Operands,
	Execute_60_Operands,
	Execute_61_Operands,
	Execute_62_Operands,
	Execute_63_Operands,
	Execute_64_Operands,
	Zero,
	BoolFalse,
	BoolTrue,
	Copy,
	Increment,
	Decrement,
	Equals,
	NotEquals,
	JumpAbsolute,
	JumpForward,
	JumpBackward,
	JumpAbsoluteIf,
	JumpForwardIf,
	JumpBackwardIf,
	ChangeType,
	Exit,
	BeginBlock,
	EndBlock,
	Invalid,
	ERigVMOpCode_MAX,
};

// Enum RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8 {
	Input,
	Output,
	IO,
	Visible,
	Hidden,
	Invalid,
	ERigVMPinDirection_MAX,
};

// Enum RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8 {
	Plain,
	String,
	Name,
	Struct,
	Invalid,
	ERigVMRegisterType_MAX,
};

// Enum RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8 {
	Work,
	Literal,
	External,
	Invalid,
	ERigVMMemoryType_MAX,
};

// ScriptStruct RigVM.RigVMExecuteContext
// Size: 0x58 (Inherited: 0x00)
struct FRigVMExecuteContext {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct RigVM.RigVMStruct
// Size: 0x08 (Inherited: 0x00)
struct FRigVMStruct {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct RigVM.RigVMParameter
// Size: 0x30 (Inherited: 0x00)
struct FRigVMParameter {
	enum class ERigVMParameterType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
	int32_t RegisterIndex; // 0x0c(0x04)
	struct FString CPPType; // 0x10(0x10)
	struct UScriptStruct* ScriptStruct; // 0x20(0x08)
	struct FName ScriptStructPath; // 0x28(0x08)
};

// ScriptStruct RigVM.RigVMByteCode
// Size: 0x30 (Inherited: 0x00)
struct FRigVMByteCode {
	struct TArray<char> ByteCode; // 0x00(0x10)
	int32_t NumInstructions; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FRigVMByteCodeEntry> Entries; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct RigVM.RigVMByteCodeEntry
// Size: 0x0c (Inherited: 0x00)
struct FRigVMByteCodeEntry {
	struct FName Name; // 0x00(0x08)
	int32_t InstructionIndex; // 0x08(0x04)
};

// ScriptStruct RigVM.RigVMInstructionArray
// Size: 0x10 (Inherited: 0x00)
struct FRigVMInstructionArray {
	struct TArray<struct FRigVMInstruction> Instructions; // 0x00(0x10)
};

// ScriptStruct RigVM.RigVMInstruction
// Size: 0x10 (Inherited: 0x00)
struct FRigVMInstruction {
	uint64_t ByteCodeIndex; // 0x00(0x08)
	enum class ERigVMOpCode OpCode; // 0x08(0x01)
	char OperandAlignment; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct RigVM.RigVMBaseOp
// Size: 0x01 (Inherited: 0x00)
struct FRigVMBaseOp {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct RigVM.RigVMUnaryOp
// Size: 0x08 (Inherited: 0x01)
struct FRigVMUnaryOp : FRigVMBaseOp {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct RigVM.RigVMChangeTypeOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMChangeTypeOp : FRigVMUnaryOp {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct RigVM.RigVMJumpIfOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMJumpIfOp : FRigVMUnaryOp {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct RigVM.RigVMJumpOp
// Size: 0x08 (Inherited: 0x01)
struct FRigVMJumpOp : FRigVMBaseOp {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct RigVM.RigVMComparisonOp
// Size: 0x14 (Inherited: 0x01)
struct FRigVMComparisonOp : FRigVMBaseOp {
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct RigVM.RigVMCopyOp
// Size: 0x0e (Inherited: 0x01)
struct FRigVMCopyOp : FRigVMBaseOp {
	char pad_1[0xd]; // 0x01(0x0d)
};

// ScriptStruct RigVM.RigVMBinaryOp
// Size: 0x0e (Inherited: 0x01)
struct FRigVMBinaryOp : FRigVMBaseOp {
	char pad_1[0xd]; // 0x01(0x0d)
};

// ScriptStruct RigVM.RigVMExecuteOp
// Size: 0x04 (Inherited: 0x01)
struct FRigVMExecuteOp : FRigVMBaseOp {
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct RigVM.RigVMSlice
// Size: 0x0c (Inherited: 0x00)
struct FRigVMSlice {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct RigVM.RigVMMemoryContainer
// Size: 0xa0 (Inherited: 0x00)
struct FRigVMMemoryContainer {
	bool bUseNameMap; // 0x00(0x01)
	enum class ERigVMMemoryType MemoryType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FRigVMRegister> Registers; // 0x08(0x10)
	struct TArray<struct FRigVMRegisterOffset> RegisterOffsets; // 0x18(0x10)
	struct TArray<char> Data; // 0x28(0x10)
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x38(0x10)
	struct TMap<struct FName, int32_t> NameMap; // 0x48(0x50)
	bool bEncounteredErrorDuringLoad; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct RigVM.RigVMRegisterOffset
// Size: 0x48 (Inherited: 0x00)
struct FRigVMRegisterOffset {
	struct TArray<int32_t> Segments; // 0x00(0x10)
	enum class ERigVMRegisterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName CPPType; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UScriptStruct* ScriptStruct; // 0x20(0x08)
	struct UScriptStruct* ParentScriptStruct; // 0x28(0x08)
	int32_t ArrayIndex; // 0x30(0x04)
	uint16_t ElementSize; // 0x34(0x02)
	char pad_36[0x2]; // 0x36(0x02)
	struct FString CachedSegmentPath; // 0x38(0x10)
};

// ScriptStruct RigVM.RigVMRegister
// Size: 0x24 (Inherited: 0x00)
struct FRigVMRegister {
	enum class ERigVMRegisterType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ByteIndex; // 0x04(0x04)
	uint16_t ElementSize; // 0x08(0x02)
	uint16_t ElementCount; // 0x0a(0x02)
	uint16_t SliceCount; // 0x0c(0x02)
	char AlignmentBytes; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	uint16_t TrailingBytes; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	struct FName Name; // 0x14(0x08)
	int32_t ScriptStructIndex; // 0x1c(0x04)
	bool bIsArray; // 0x20(0x01)
	bool bIsDynamic; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct RigVM.RigVMOperand
// Size: 0x06 (Inherited: 0x00)
struct FRigVMOperand {
	enum class ERigVMMemoryType MemoryType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t RegisterIndex; // 0x02(0x02)
	uint16_t RegisterOffset; // 0x04(0x02)
};

// ScriptStruct RigVM.RigVMStatistics
// Size: 0x2c (Inherited: 0x00)
struct FRigVMStatistics {
	uint32_t BytesForCDO; // 0x00(0x04)
	uint32_t BytesPerInstance; // 0x04(0x04)
	struct FRigVMMemoryStatistics LiteralMemory; // 0x08(0x0c)
	struct FRigVMMemoryStatistics WorkMemory; // 0x14(0x0c)
	uint32_t BytesForCaching; // 0x20(0x04)
	struct FRigVMByteCodeStatistics ByteCode; // 0x24(0x08)
};

// ScriptStruct RigVM.RigVMByteCodeStatistics
// Size: 0x08 (Inherited: 0x00)
struct FRigVMByteCodeStatistics {
	uint32_t InstructionCount; // 0x00(0x04)
	uint32_t DataBytes; // 0x04(0x04)
};

// ScriptStruct RigVM.RigVMMemoryStatistics
// Size: 0x0c (Inherited: 0x00)
struct FRigVMMemoryStatistics {
	uint32_t RegisterCount; // 0x00(0x04)
	uint32_t DataBytes; // 0x04(0x04)
	uint32_t TotalBytes; // 0x08(0x04)
};

