@interface SKUILoadGratisEligibilityOperation : NSOperation
{
	id _bundleIDs;
	id _clientContext;
	id _dispatchQueue;
	id _outputBlock;
}

+ setOutputBlock:
+ init
+ main
+ initWithBundleIdentifiers:clientContext:
+ outputBlock
+ _bodyData
+ .cxx_destruct
- setOutputBlock:
- init
- main
- initWithBundleIdentifiers:clientContext:
- outputBlock
- _bodyData
- .cxx_destruct
@end
