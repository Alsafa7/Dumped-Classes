@interface ADZlibDataDecompressor : ADDataDecompressor
{
	struct _inflateStream;
	Array _inflateBuffer;
}

+ decompressedDataForData:error:
+ dealloc
+ init
- decompressedDataForData:error:
- dealloc
- init
@end
