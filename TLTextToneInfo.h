@interface TLTextToneInfo : NSObject
{
	unsigned int _previewSound;
	unsigned int _actualSound;
	id _filePath;
}

+ dealloc
+ filePath
+ initWithPreviewSound:actualSound:filePath:
+ previewSound
+ actualSound
- dealloc
- filePath
- initWithPreviewSound:actualSound:filePath:
- previewSound
- actualSound
@end
