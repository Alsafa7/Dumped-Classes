@interface SBFloatyFolderView : SBFolderView
{
	id _scrollClipView;
	id _backgroundView;
	id _tapGesture;
	id _pinchGesture;
	id _longPressGesture;
	id _folderSettings;
}

+ initWithFolder:orientation:
+ fadeContentForMagnificationFraction:
+ _showsTitle
+ _titleFontSize
+ willAnimate
+ didAnimate
+ _configureGestures
+ _frameForScalingView
+ _handleOutsideTap:
+ _handlePinchGesture:
+ _handleLongPressGesture:
+ _tapToCloseGestureRecognizer:shouldReceiveTouch:
+ visibleFolderRelativeImageCenterForIcon:
+ locationCountsAsInsideFolder:
+ fadeContentForMinificationFraction:
+ dealloc
+ gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
+ gestureRecognizer:shouldReceiveTouch:
+ settings:changedValueForKey:
+ setBackgroundAlpha:
+ _layoutSubviews
- initWithFolder:orientation:
- fadeContentForMagnificationFraction:
- _showsTitle
- _titleFontSize
- willAnimate
- didAnimate
- _configureGestures
- _frameForScalingView
- _handleOutsideTap:
- _handlePinchGesture:
- _handleLongPressGesture:
- _tapToCloseGestureRecognizer:shouldReceiveTouch:
- visibleFolderRelativeImageCenterForIcon:
- locationCountsAsInsideFolder:
- fadeContentForMinificationFraction:
- dealloc
- gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:
- gestureRecognizer:shouldReceiveTouch:
- settings:changedValueForKey:
- setBackgroundAlpha:
- _layoutSubviews
@end
