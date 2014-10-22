@interface NSSQLBindVariable : NSObject
{
	int _cd_rc;
	id _value;
	unsigned int _sqlType;
	unsigned int _index;
	long long _int64;
	id _attributeDescription;
}

+ sqlType
+ initWithInt64:sqlType:
+ initWithValue:sqlType:attributeDescription:
+ initWithUnsignedInt:sqlType:
+ attributeDescription
+ setInt64:
+ setUnsignedInt:
+ int64
+ unsignedInt
+ hasObjectValue
+ release
+ retain
+ dealloc
+ retainCount
+ setValue:
+ value
+ _tryRetain
+ _isDeallocating
+ index
+ setIndex:
- sqlType
- initWithInt64:sqlType:
- initWithValue:sqlType:attributeDescription:
- initWithUnsignedInt:sqlType:
- attributeDescription
- setInt64:
- setUnsignedInt:
- int64
- unsignedInt
- hasObjectValue
- release
- retain
- dealloc
- retainCount
- setValue:
- value
- _tryRetain
- _isDeallocating
- index
- setIndex:
@end
