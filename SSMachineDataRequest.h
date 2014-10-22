@interface SSMachineDataRequest : SSRequest
{
	id _accountID;
	id _actionData;
	id _actionName;
	BOOL _waitsForPurchaseOperations;
}

+ initWithURLResponse:
+ setAccountIdentifier:
+ dealloc
+ setActionName:
+ accountIdentifier
+ initWithXPCEncoding:
+ copyXPCEncoding
+ startWithCompletionBlock:
+ actionData
+ actionName
+ setActionData:
+ setWaitsForPurchaseOperations:
+ waitsForPurchaseOperations
- initWithURLResponse:
- setAccountIdentifier:
- dealloc
- setActionName:
- accountIdentifier
- initWithXPCEncoding:
- copyXPCEncoding
- startWithCompletionBlock:
- actionData
- actionName
- setActionData:
- setWaitsForPurchaseOperations:
- waitsForPurchaseOperations
@end
