@interface _CSIRenditionBlockData : NSObject
{
	int _pixelFormat;
	char *_data;
	unsigned int _nrows;
	usigned long long _rowbytes;
	Array _name;
}

+ dealloc
+ bytes
+ _allocateImageBytes
+ _freeImageBytes
+ _makeReadOnly
+ initWithPixelWidth:pixelHeight:pixelFormat:
+ _setNameFromCSIHeader:
+ rowbytes
+ nrows
+ expandCSIBitmapData:fromSlice:makeReadOnly:
- dealloc
- bytes
- _allocateImageBytes
- _freeImageBytes
- _makeReadOnly
- initWithPixelWidth:pixelHeight:pixelFormat:
- _setNameFromCSIHeader:
- rowbytes
- nrows
- expandCSIBitmapData:fromSlice:makeReadOnly:
@end
