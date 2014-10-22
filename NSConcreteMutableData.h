@interface NSConcreteMutableData : NSMutableData
{
	bit[1] _reserved;
	bit[1] _needToZero;
	bit[1] _hasVM;
	bit[29] _retainCount;
	usigned long long _length;
	usigned long long _capacity;
	pointer _bytes;
}

+ replaceBytesInRange:withBytes:
+ increaseLengthBy:
+ initWithBytes:length:copy:deallocator:
+ resetBytesInRange:
+ _freeBytes
+ dealloc
+ init
+ length
+ initWithCapacity:
+ bytes
+ appendBytes:length:
+ setLength:
+ appendData:
+ mutableBytes
+ initWithLength:
+ finalize
- replaceBytesInRange:withBytes:
- increaseLengthBy:
- initWithBytes:length:copy:deallocator:
- resetBytesInRange:
- _freeBytes
- dealloc
- init
- length
- initWithCapacity:
- bytes
- appendBytes:length:
- setLength:
- appendData:
- mutableBytes
- initWithLength:
- finalize
@end
