@interface BBAssertion : NSObject
{
	id _delegate;
	id _identifier;
	usigned long long _transactionID;
}

+ dealloc
+ identifier
+ initWithDelegate:identifier:
+ increaseOrIgnoreTransactionID:
+ transactionID
- dealloc
- identifier
- initWithDelegate:identifier:
- increaseOrIgnoreTransactionID:
- transactionID
@end
