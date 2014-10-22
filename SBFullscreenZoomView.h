@interface SBFullscreenZoomView : SBZoomView
{
	BOOL _hasImage;
	BOOL _hasFullSizedImage;
	id _surface;
}

+ _initWithFrame:
+ initWithView:screen:
+ initWithSnapshotFrame:screen:image:originalImageOrientation:currentImageOrientation:interfaceOrientation:doubleHeightStatusBar:preventSplit:needsZoomFilter:asyncDecodeImage:blackMatForJail:
+ initWithSnapshotFrame:screen:ioSurface:opaque:snapshotTransform:
+ initWithImage:screen:
+ dealloc
+ surface
- _initWithFrame:
- initWithView:screen:
- initWithSnapshotFrame:screen:image:originalImageOrientation:currentImageOrientation:interfaceOrientation:doubleHeightStatusBar:preventSplit:needsZoomFilter:asyncDecodeImage:blackMatForJail:
- initWithSnapshotFrame:screen:ioSurface:opaque:snapshotTransform:
- initWithImage:screen:
- dealloc
- surface
@end
