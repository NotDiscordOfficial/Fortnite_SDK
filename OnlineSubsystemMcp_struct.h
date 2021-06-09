// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
// Size: 0x10 (Inherited: 0x00)
struct FJsonToxicityBulkEvaluationResponse {
	struct TArray<bool> isToxic; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
// Size: 0x01 (Inherited: 0x00)
struct FJsonToxicityEvaluationResponse {
	bool toxic; // 0x00(0x01)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
// Size: 0x10 (Inherited: 0x00)
struct FJsonToxicityBulkEvaluationRequest {
	struct TArray<struct FString> texts; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
// Size: 0x10 (Inherited: 0x00)
struct FJsonToxicityEvaluationRequest {
	struct FString Text; // 0x00(0x10)
};

