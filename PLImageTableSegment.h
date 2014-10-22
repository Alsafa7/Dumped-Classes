@interface PLImageTableSegment : NSObject
{
	id _imageTable;
	usigned long long _index;
	pointer _ptr;
	usigned long long _length;
	BOOL _dying;
}

+ release
+ dealloc
+ bytes
+ initWithImageTable:index:length:idealAddress:
+ initWithImageTable:offset:length:
- release
- dealloc
- bytes
- initWithImageTable:index:length:idealAddress:
- initWithImageTable:offset:length:
@end
