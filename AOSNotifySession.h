@interface AOSNotifySession : NSObject
{
	id _xpcConnection;
	id _center;
	id _delegate;
}

+ lostModeIsActive
+ dealloc
+ setDelegate:
+ init
+ delegate
+ center
+ setCenter:
+ currentXPCConnection
+ _stopVettingNotifications
+ _destroyXPCConnection
+ _vetResultReceived:
+ _vetFinished:
+ newErrorForCode:message:
+ lostModeInfo
+ fmipAccount
+ vetEmailAccount:
+ cancelEmailVet
+ lostModeParams
+ disableLostMode
+ lockdownShouldDisableDeviceRestore
+ lockdownShouldDisableDevicePairing
+ deviceActivationDidSucceed
+ isFMIPStateChangeInProgressWithCompletion:
+ fmfDeviceId
+ fmipDeviceId
+ iCloudAccount
+ isActivationLockStateChangeInProgressWithCompletion:
+ didEnterFMFRegion:atLocation:
+ didExitFMFRegion:atLocation:
+ addFMFAccount:
+ removeFMFAccountWithUsername:
+ retrieveFMFAccount:
+ startListeningOnTopic:
+ stopListeningOnTopic:
+ dumpDebugInfo:
+ retrieveAllAccounts:
+ activationLockStateWithCompletion:
+ enableActivationLock
+ disableActivationLockUsingToken:
+ fmipStateWithCompletion:
+ enableFMIPInContext:
+ disableFMIPUsingToken:inContext:
+ enableLostModeWithInfo:
+ xpcConnection
+ setXpcConnection:
+ initWithDelegate:
+ storeAccount
- lostModeIsActive
- dealloc
- setDelegate:
- init
- delegate
- center
- setCenter:
- currentXPCConnection
- _stopVettingNotifications
- _destroyXPCConnection
- _vetResultReceived:
- _vetFinished:
- newErrorForCode:message:
- lostModeInfo
- fmipAccount
- vetEmailAccount:
- cancelEmailVet
- lostModeParams
- disableLostMode
- lockdownShouldDisableDeviceRestore
- lockdownShouldDisableDevicePairing
- deviceActivationDidSucceed
- isFMIPStateChangeInProgressWithCompletion:
- fmfDeviceId
- fmipDeviceId
- iCloudAccount
- isActivationLockStateChangeInProgressWithCompletion:
- didEnterFMFRegion:atLocation:
- didExitFMFRegion:atLocation:
- addFMFAccount:
- removeFMFAccountWithUsername:
- retrieveFMFAccount:
- startListeningOnTopic:
- stopListeningOnTopic:
- dumpDebugInfo:
- retrieveAllAccounts:
- activationLockStateWithCompletion:
- enableActivationLock
- disableActivationLockUsingToken:
- fmipStateWithCompletion:
- enableFMIPInContext:
- disableFMIPUsingToken:inContext:
- enableLostModeWithInfo:
- xpcConnection
- setXpcConnection:
- initWithDelegate:
- storeAccount
@end