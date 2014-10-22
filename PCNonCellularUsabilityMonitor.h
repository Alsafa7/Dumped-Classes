@interface PCNonCellularUsabilityMonitor : NSObject
{
	pointer _delegateQueue;
	pointer _ivarQueue;
	pointer _monitorDelegateQueue;
	id _delegateReference;
	id _demoOverrideInterface;
	int _previousLinkQuality;
	BOOL _trackUsability;
	usigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	id _interfaceMonitors;
}

+ dealloc
+ setDelegate:
+ delegate
+ isInterfaceUsable
+ isPoorLinkQuality
+ isInternetReachable
+ linkQualityString
+ isInterfaceHistoricallyUsable
+ interfaceLinkQualityChanged:previousLinkQuality:
+ interfaceReachabilityChanged:
+ _callDelegateOnIvarQueueWithBlock:
+ setTrackedTimeInterval:
+ setThresholdOffTransitionCount:
+ setTrackUsability:
+ isRadioHot
+ interfaceIdentifier
+ _addMonitorWithInterfaceName:
+ _forwardConfigurationOnIvarQueue
+ _linkQualityOnIvarQueue
+ initWithDelegateQueue:
+ linkQuality
- dealloc
- setDelegate:
- delegate
- isInterfaceUsable
- isPoorLinkQuality
- isInternetReachable
- linkQualityString
- isInterfaceHistoricallyUsable
- interfaceLinkQualityChanged:previousLinkQuality:
- interfaceReachabilityChanged:
- _callDelegateOnIvarQueueWithBlock:
- setTrackedTimeInterval:
- setThresholdOffTransitionCount:
- setTrackUsability:
- isRadioHot
- interfaceIdentifier
- _addMonitorWithInterfaceName:
- _forwardConfigurationOnIvarQueue
- _linkQualityOnIvarQueue
- initWithDelegateQueue:
- linkQuality
@end
