@interface PLMappedImageData : NSMutableData
{
	id _segment;
	pointer _bytes;
	usigned long long _length;
	BOOL _freeBytes;
	id _pl_data;
}

+ dealloc
+ length
+ bytes
+ mutableBytes
+ initWithImageTableSegment:bytes:length:
+ photoUUID
+ setPhotoUUID:
+ setImageWidth:
+ setImageHeight:
+ imageWidth
+ imageHeight
+ lengthIncludingFooter
+ _footer
+ initWithThumbnailPath:
+ initWithEntryLength:
+ brokencopy
+ pl_advisoryLength
+ pl_writeToPath:
- dealloc
- length
- bytes
- mutableBytes
- initWithImageTableSegment:bytes:length:
- photoUUID
- setPhotoUUID:
- setImageWidth:
- setImageHeight:
- imageWidth
- imageHeight
- lengthIncludingFooter
- _footer
- initWithThumbnailPath:
- initWithEntryLength:
- brokencopy
- pl_advisoryLength
- pl_writeToPath:
@end
