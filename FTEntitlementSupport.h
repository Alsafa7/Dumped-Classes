@interface FTEntitlementSupport : NSObject
{
	pointer _ctServerConnection;
	pointer _entitlementStatus;
}

+ init
+ _registerForCTEntitlementNotifications
+ _unregisterForCTEntitlementNotifications
+ _handleEntitlementNotification:
+ _registrationStateChanged
+ _rawEntitlementValue
+ registrationState
+ faceTimeNonWiFiEntitled
+ _cleanupMachInfo
+ _setupCTServerConnection
+ _disconnectCTServerConnection
+ _reconnectCTServerConnectionIfNecessary
+ _handleCTServiceRequestName:userInfo:contextInfo:
- init
- _registerForCTEntitlementNotifications
- _unregisterForCTEntitlementNotifications
- _handleEntitlementNotification:
- _registrationStateChanged
- _rawEntitlementValue
- registrationState
- faceTimeNonWiFiEntitled
- _cleanupMachInfo
- _setupCTServerConnection
- _disconnectCTServerConnection
- _reconnectCTServerConnectionIfNecessary
- _handleCTServiceRequestName:userInfo:contextInfo:
@end
