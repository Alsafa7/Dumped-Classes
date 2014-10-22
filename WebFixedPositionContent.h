@interface WebFixedPositionContent : NSObject
{
	pointer _private;
}

+ dealloc
+ hasFixedOrStickyPositionLayers
+ scrollOrZoomChanged:
+ initWithWebView:
+ didFinishScrollingOrZooming
+ overflowScrollPositionForLayer:changedTo:
+ setViewportConstrainedLayers:stickyContainerMap:
+ minimumOffsetFromFixedPositionLayersToAnchorEdge:ofRect:inLayer:
- dealloc
- hasFixedOrStickyPositionLayers
- scrollOrZoomChanged:
- initWithWebView:
- didFinishScrollingOrZooming
- overflowScrollPositionForLayer:changedTo:
- setViewportConstrainedLayers:stickyContainerMap:
- minimumOffsetFromFixedPositionLayersToAnchorEdge:ofRect:inLayer:
@end
