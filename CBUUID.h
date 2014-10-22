@interface CBUUID : NSObject
{
	id _data;
	struct _range;
}

+ initWithCFUUID:
+ initWithNSUUID:
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ data
+ initWithData:
+ initWithString:
- initWithCFUUID:
- initWithNSUUID:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- data
- initWithData:
- initWithString:
@end
