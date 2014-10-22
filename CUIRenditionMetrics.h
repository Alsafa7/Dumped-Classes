@interface CUIRenditionMetrics : NSObject
{
	struct _imageSize;
	struct _edgeBottomLeftMargin;
	struct _edgeTopRightMargin;
	struct _alignmentBottomLeftMargin;
	struct _alignmentTopRightMargin;
	double _scale;
	struct _crmFlags;
}

+ scale
+ imageSize
+ initWithImageSize:edgeBottomLeft:edgeTopRight:alignmentBottomLeft:alignmentTopRight:scalesVertically:scalesHorizontally:scale:
+ edgeBottomLeftMargin
+ edgeTopRightMargin
+ alignmentBottomLeftMargin
+ alignmentTopRightMargin
+ scalesVertically
+ scalesHorizontally
+ edgeRect
+ alignmentRect
+ insetRectWithMetrics:
- scale
- imageSize
- initWithImageSize:edgeBottomLeft:edgeTopRight:alignmentBottomLeft:alignmentTopRight:scalesVertically:scalesHorizontally:scale:
- edgeBottomLeftMargin
- edgeTopRightMargin
- alignmentBottomLeftMargin
- alignmentTopRightMargin
- scalesVertically
- scalesHorizontally
- edgeRect
- alignmentRect
- insetRectWithMetrics:
@end
