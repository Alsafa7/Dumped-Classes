@interface WebGeolocationProviderIOS : NSObject
{
	struct _coreLocationProvider;
	struct _coreLocationUpdateListenerProxy;
	BOOL _enableHighAccuracy;
	BOOL _isSuspended;
	BOOL _shouldResetOnResume;
	struct _webViewsWaitingForCoreLocationStart;
	struct _warmUpWebViews;
	struct _pendingInitialPositionWebView;
	struct _registeredWebViews;
	struct _trackedWebViews;
	struct _sendLastPositionAsynchronouslyTimer;
	struct _lastPosition;
}

+ dealloc
+ suspend
+ resume
+ .cxx_construct
+ .cxx_destruct
+ registerWebView:
+ unregisterWebView:
+ setEnableHighAccuracy:
+ initializeGeolocationForWebView:listener:
+ lastPosition
+ cancelWarmUpForWebView:
+ resetGeolocation
+ geolocationDelegateUnableToStart
+ geolocationDelegateStarted
+ positionChanged:
+ errorOccurred:
+ _startCoreLocationDelegate
+ _handlePendingInitialPosition:
+ _stopCoreLocationDelegateIfNeeded
+ stopTrackingWebView:
- dealloc
- suspend
- resume
- .cxx_construct
- .cxx_destruct
- registerWebView:
- unregisterWebView:
- setEnableHighAccuracy:
- initializeGeolocationForWebView:listener:
- lastPosition
- cancelWarmUpForWebView:
- resetGeolocation
- geolocationDelegateUnableToStart
- geolocationDelegateStarted
- positionChanged:
- errorOccurred:
- _startCoreLocationDelegate
- _handlePendingInitialPosition:
- _stopCoreLocationDelegateIfNeeded
- stopTrackingWebView:
@end
