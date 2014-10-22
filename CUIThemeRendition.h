@interface CUIThemeRendition : NSObject
{
	Array stackKey;
	pointer key;
	long long type;
	unsigned int subtype;
	unsigned int scale;
	struct renditionFlags;
	long long artworkStatus;
	usigned long long colorSpaceID;
	id name;
	id srcData;
	long long validLookGradation;
	double opacity;
	int blendMode;
}

+ dealloc
+ description
+ scale
+ type
+ subtype
+ opacity
+ setOpacity:
+ name
+ metrics
+ key
+ gradient
+ gradientStyle
+ colorSpaceID
+ effectPreset
+ _initializeRenditionKey:
+ valueForTokenIdentifier:
+ isTiled
+ imageForSliceIndex:
+ isScaled
+ maskForSliceIndex:
+ unslicedImage
+ sliceInformation
+ gradientDrawingAngle
+ initWithCSIData:forKey:artworkStatus:
+ isHeaderFlaggedFPO
+ artworkStatus
+ _initWithCSIHeader:
+ _initWithCSIData:forKey:artworkStatus:
+ _initializeTypeIdentifiersWithLayout:
+ _initializeCompositingOptionsFromCSIData:
+ initWithCSIData:forKey:
+ isValidForLookGradation:
+ blendMode
+ setBlendMode:
- dealloc
- description
- scale
- type
- subtype
- opacity
- setOpacity:
- name
- metrics
- key
- gradient
- gradientStyle
- colorSpaceID
- effectPreset
- _initializeRenditionKey:
- valueForTokenIdentifier:
- isTiled
- imageForSliceIndex:
- isScaled
- maskForSliceIndex:
- unslicedImage
- sliceInformation
- gradientDrawingAngle
- initWithCSIData:forKey:artworkStatus:
- isHeaderFlaggedFPO
- artworkStatus
- _initWithCSIHeader:
- _initWithCSIData:forKey:artworkStatus:
- _initializeTypeIdentifiersWithLayout:
- _initializeCompositingOptionsFromCSIData:
- initWithCSIData:forKey:
- isValidForLookGradation:
- blendMode
- setBlendMode:
@end
