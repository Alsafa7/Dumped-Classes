@interface ACDataclassAction : NSObject
{
	BOOL _isDestructive;
	long long _type;
}

+ initWithType:destructivity:
+ isDestructive
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ type
- initWithType:destructivity:
- isDestructive
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- type
@end
