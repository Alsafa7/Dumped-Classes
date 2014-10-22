@interface PBShelfTile : UIControl
{
	id _uuid;
	id _imageView;
	Array _cornerViews;
	struct _backgroundImageSize;
	id _printingView;
	id _printerSlotLayer;
	id _slotShadowLayer;
	id _printAnimationDelegate;
	bit[1] _smallSize;
	bit[1] _showsBadge;
	bit[1] _showsShadow;
	bit[1] _isSelected;
	bit[1] _isReviewed;
	bit[1] _isPrinting;
}

+ showActionSheet:animated:
+ setIconFromAsset:
+ animatePrinting:
+ setReviewed:
+ setIcon:inCorner:offset:
+ initializeState
+ cornerAtPoint:
+ _hasActionsForControlEvent:
+ _prepareForPrintAnimation
+ _updatePrintAnimationLayout
+ setShowsBadge:
+ showsBadge
+ setShowsShadow:
+ showsShadow
+ isSmallSize
+ iconInCorner:
+ isReviewed
+ isPrinting
+ icon
+ initWithFrame:
+ dealloc
+ sizeThatFits:
+ center
+ setCenter:
+ animationDidStop:finished:
+ animationDidStart:
+ isSelected
+ setSelected:
+ beginTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
+ setSmallSize:
+ setUUID:
+ uuid
+ _updateHighlight
- showActionSheet:animated:
- setIconFromAsset:
- animatePrinting:
- setReviewed:
- setIcon:inCorner:offset:
- initializeState
- cornerAtPoint:
- _hasActionsForControlEvent:
- _prepareForPrintAnimation
- _updatePrintAnimationLayout
- setShowsBadge:
- showsBadge
- setShowsShadow:
- showsShadow
- isSmallSize
- iconInCorner:
- isReviewed
- isPrinting
- icon
- initWithFrame:
- dealloc
- sizeThatFits:
- center
- setCenter:
- animationDidStop:finished:
- animationDidStart:
- isSelected
- setSelected:
- beginTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
- setSmallSize:
- setUUID:
- uuid
- _updateHighlight
@end
