@interface UIRemoteApplication : NSObject
{
	id _machServiceName;
	unsigned int _port;
}

+ dealloc
+ initWithMachServiceName:
+ updatePort
+ initWithBundleIdentifier:
+ hideTopMostMiniAlert
+ showTopMostMiniAlertWithSynchronizationPort:
+ statusBarWillChangeOrientation:duration:
+ simpleRemoteActionDidOccur:
+ sheetWithRemoteViewIdentifierDidDismiss:
+ remoteNotificationRegistrationSucceededWithDeviceToken:
+ remoteNotificationRegistrationFailedWithErrorDomain:code:localizedDescription:
+ remoteNotificationMessageDelivered
+ localNotificationMessageDelivered:
+ localNotificationDidSnooze:
+ backgroundContinuationEnabledDidChange:
+ wakeTimerFired
+ didTakeScreenshot
- dealloc
- initWithMachServiceName:
- updatePort
- initWithBundleIdentifier:
- hideTopMostMiniAlert
- showTopMostMiniAlertWithSynchronizationPort:
- statusBarWillChangeOrientation:duration:
- simpleRemoteActionDidOccur:
- sheetWithRemoteViewIdentifierDidDismiss:
- remoteNotificationRegistrationSucceededWithDeviceToken:
- remoteNotificationRegistrationFailedWithErrorDomain:code:localizedDescription:
- remoteNotificationMessageDelivered
- localNotificationMessageDelivered:
- localNotificationDidSnooze:
- backgroundContinuationEnabledDidChange:
- wakeTimerFired
- didTakeScreenshot
@end
