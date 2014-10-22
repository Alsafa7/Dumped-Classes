@interface SBIconImageCrossfadeView : SBInteractionPassThroughView
{
	id _containerView;
	id _imageView;
	id _crossfadeView;
	double _crossfadeFraction;
	double _containerScaleX;
	double _containerScaleY;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	struct _stretchAnchorPoint;
}

+ _updateCornerMask
+ initWithImageView:crossfadeView:
+ prepareGeometry
+ setMasksCorners:
+ setStretchAnchorPoint:
+ setFadeFraction:
+ setMorphFraction:
+ masksCorners
+ performsTrueCrossfade
+ setPerformsTrueCrossfade:
+ stretchAnchorPoint
+ dealloc
+ layoutSubviews
+ cleanup
- _updateCornerMask
- initWithImageView:crossfadeView:
- prepareGeometry
- setMasksCorners:
- setStretchAnchorPoint:
- setFadeFraction:
- setMorphFraction:
- masksCorners
- performsTrueCrossfade
- setPerformsTrueCrossfade:
- stretchAnchorPoint
- dealloc
- layoutSubviews
- cleanup
@end
