@interface BBSectionIconVariant : NSObject
{
	BOOL _precomposed;
	long long _format;
	id _imageData;
	id _imagePath;
	id _imageName;
	id _bundlePath;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ bundlePath
+ copyWithZone:
+ isPrecomposed
+ setPrecomposed:
+ setImagePath:
+ setImageName:
+ setBundlePath:
+ imagePath
+ imageData
+ setImageData:
+ imageName
+ format
+ setFormat:
- dealloc
- initWithCoder:
- encodeWithCoder:
- bundlePath
- copyWithZone:
- isPrecomposed
- setPrecomposed:
- setImagePath:
- setImageName:
- setBundlePath:
- imagePath
- imageData
- setImageData:
- imageName
- format
- setFormat:
@end
