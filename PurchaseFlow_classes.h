// Class PurchaseFlow.PurchaseFlowJSBridge
// Size: 0x38 (Inherited: 0x28)
struct UPurchaseFlowJSBridge : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void RequestClose(struct FString CloseInfo); // Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose // (Final|Native|Public) // @ game+0x405a328
	void Receipt(struct FPurchaseFlowReceiptParam Receipt); // Function PurchaseFlow.PurchaseFlowJSBridge.Receipt // (Final|Native|Public) // @ game+0x405a1b8
	bool LaunchValidatedExternalBrowserUrl(struct FString AllowedBrowserID, struct FString URL); // Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl // (Final|Native|Public) // @ game+0x405a050
	bool LaunchExternalBrowserUrl(struct FString URL); // Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl // (Final|Native|Public) // @ game+0x4059f14
	struct FString GetExternalBrowserPath(struct FString BrowserId); // Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath // (Final|Native|Public) // @ game+0x4059e24
	struct FString GetExternalBrowserName(struct FString BrowserId); // Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName // (Final|Native|Public) // @ game+0x4059cc0
	struct FString GetDefaultExternalBrowserID(struct FString URL); // Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID // (Final|Native|Public) // @ game+0x4059bb4
};

