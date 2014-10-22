@interface BBBulletinUpdate : NSObject
{
	id _bulletin;
	usigned long long _transactionID;
	long long _updateType;
}

+ updateType
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ bulletin
+ transactionID
+ initWithBulletin:updateType:transactionID:
- updateType
- dealloc
- initWithCoder:
- encodeWithCoder:
- bulletin
- transactionID
- initWithBulletin:updateType:transactionID:
@end
