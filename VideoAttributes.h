@interface VideoAttributes : NSObject
{
	struct ratio;
	int orientation;
	int camera;
	BOOL cameraSwitching;
	struct contentsRect;
}

+ initWithCoder:
+ encodeWithCoder:
+ init
+ description
+ orientation
+ copyWithZone:
+ setContentsRect:
+ setOrientation:
+ contentsRect
+ initWithEncodedDictionary:
+ camera
+ decodeFromNSDictionary:
+ encodeToNewNSDictionary
+ ratio
+ setRatio:
+ setCamera:
+ cameraSwitching
+ setCameraSwitching:
+ initWithCameraStatusBits:aspectRatio:contentsRect:
+ isEqualToVideoAttributes:
- initWithCoder:
- encodeWithCoder:
- init
- description
- orientation
- copyWithZone:
- setContentsRect:
- setOrientation:
- contentsRect
- initWithEncodedDictionary:
- camera
- decodeFromNSDictionary:
- encodeToNewNSDictionary
- ratio
- setRatio:
- setCamera:
- cameraSwitching
- setCameraSwitching:
- initWithCameraStatusBits:aspectRatio:contentsRect:
- isEqualToVideoAttributes:
@end
