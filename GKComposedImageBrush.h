@interface GKComposedImageBrush : GKImageBrush
{
	id _maskImage;
	id _backgroundImage;
	id _overlayImage;
	struct _maskInsets;
}

+ sizeForInput:
+ drawInRect:withContext:input:
+ scaleForInput:
+ maskImage
+ setMaskImage:
+ setOverlayImage:
+ maskInsets
+ setMaskInsets:
+ dealloc
+ copyWithZone:
+ backgroundImage
+ setBackgroundImage:
+ overlayImage
- sizeForInput:
- drawInRect:withContext:input:
- scaleForInput:
- maskImage
- setMaskImage:
- setOverlayImage:
- maskInsets
- setMaskInsets:
- dealloc
- copyWithZone:
- backgroundImage
- setBackgroundImage:
- overlayImage
@end
