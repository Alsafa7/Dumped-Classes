@interface _UIRemoteView : UIView
{
	BOOL _actsAsTintView;
	id _statusBarTintColor;
	id _hostedWindowHostingHandle;
	id _tintColorDidChangeHandler;
}

+ dealloc
+ _statusBarTintColor
+ tintColorDidChange
+ _didMoveFromWindow:toWindow:
+ _setStatusBarTintColor:
+ hostedWindowHostingHandle
+ setHostedWindowHostingHandle:
+ _setActsAsTintView:
+ setTintColorDidChangeHandler:
+ _setStatusBarTintColor:duration:
+ setContextID:
+ applyTransformUndoingRemoteRootLayerTransform:frame:
+ tintColorDidChangeHandler
+ _actsAsTintView
- dealloc
- _statusBarTintColor
- tintColorDidChange
- _didMoveFromWindow:toWindow:
- _setStatusBarTintColor:
- hostedWindowHostingHandle
- setHostedWindowHostingHandle:
- _setActsAsTintView:
- setTintColorDidChangeHandler:
- _setStatusBarTintColor:duration:
- setContextID:
- applyTransformUndoingRemoteRootLayerTransform:frame:
- tintColorDidChangeHandler
- _actsAsTintView
@end
