@interface __NSCFData : NSMutableData
{
	Array _cfinfo;
	unsigned int _rc;
	long long _length;
	long long _capacity;
	pointer _bytesDeallocator;
	char *_bytes;
}

+ release
+ retain
+ isEqual:
+ hash
+ retainCount
+ length
+ bytes
+ copyWithZone:
+ _tryRetain
+ _isDeallocating
+ setLength:
+ mutableBytes
+ finalize
- release
- retain
- isEqual:
- hash
- retainCount
- length
- bytes
- copyWithZone:
- _tryRetain
- _isDeallocating
- setLength:
- mutableBytes
- finalize
@end
