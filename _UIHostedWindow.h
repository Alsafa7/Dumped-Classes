@interface _UIHostedWindow : UIWindow
{
	long long _hostTintAdjustmentMode;
}

+ initWithFrame:
+ _needsShakesWhenInactive
+ _isWindowServerHostingManaged
+ _usesWindowServerHitTesting
+ _updateTransformLayerForClassicPresentation
+ _isClippedByScreenJail
+ _canPromoteFromKeyWindowStack
+ _updateAppTintView
+ _registerScrollToTopView:
+ _unregisterScrollToTopView:
+ _defaultTintAdjustmentMode
+ contextID
+ hostingHandle
+ _hostTintAdjustmentMode
+ _setHostTintAdjustmentMode:
- initWithFrame:
- _needsShakesWhenInactive
- _isWindowServerHostingManaged
- _usesWindowServerHitTesting
- _updateTransformLayerForClassicPresentation
- _isClippedByScreenJail
- _canPromoteFromKeyWindowStack
- _updateAppTintView
- _registerScrollToTopView:
- _unregisterScrollToTopView:
- _defaultTintAdjustmentMode
- contextID
- hostingHandle
- _hostTintAdjustmentMode
- _setHostTintAdjustmentMode:
@end
