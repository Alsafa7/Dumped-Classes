@interface ADZlibDataCompressor : ADDataCompressor
{
	struct _deflateStream;
	Array _deflateBuffer;
}

+ compressedDataForData:error:
+ dealloc
+ init
- compressedDataForData:error:
- dealloc
- init
@end
