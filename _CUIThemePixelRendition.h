@interface _CUIThemePixelRendition : CUIThemeRendition
{
	unsigned int nimages;
	Array image;
	pointer unslicedImage;
	id _renditionMetrics;
	id _sliceInformation;
	id _cachedBlockData;
}

+ dealloc
+ metrics
+ isTiled
+ imageForSliceIndex:
+ isScaled
+ maskForSliceIndex:
+ unslicedImage
+ sliceInformation
+ initWithCSIData:forKey:artworkStatus:
+ _initWithCSIHeader:
+ newImageFromCSIDataSlice:ofBitmap:usingColorspace:
+ copySharedBlockData
+ setSharedBlockData:
- dealloc
- metrics
- isTiled
- imageForSliceIndex:
- isScaled
- maskForSliceIndex:
- unslicedImage
- sliceInformation
- initWithCSIData:forKey:artworkStatus:
- _initWithCSIHeader:
- newImageFromCSIDataSlice:ofBitmap:usingColorspace:
- copySharedBlockData
- setSharedBlockData:
@end
