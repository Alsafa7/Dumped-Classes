@interface ADAdSheetProxy : NSObject
{
	BOOL _serviceLaunchThrottled;
	int _bootstrapState;
	int _classicUnavailableToken;
	double _lastTermination;
	double _lastBootstrap;
	usigned long long _adSheetBootstrapAttempts;
	id _adSheetConnection;
	id _connectionAssertions;
}

+ init
+ resetAdSheetThrottle
+ rpcProxy
+ _considerConnectingToAdSheet
+ _considerLaunchingAdSheet
+ connectionAssertions
+ adSheetConnection
+ bootstrapState
+ setBootstrapState:
+ adSheetBootstrapAttempts
+ setServiceLaunchThrottled:
+ setAdSheetBootstrapAttempts:
+ setLastTermination:
+ setAdSheetConnection:
+ _adSheetConnectionLost
+ setLastBootstrap:
+ lastBootstrap
+ serviceLaunchThrottled
+ takeConnectionAssertion:
+ releaseConnectionAssertion:
+ connectionAvailable
+ lastTermination
+ classicUnavailableToken
+ setClassicUnavailableToken:
+ setConnectionAssertions:
- init
- resetAdSheetThrottle
- rpcProxy
- _considerConnectingToAdSheet
- _considerLaunchingAdSheet
- connectionAssertions
- adSheetConnection
- bootstrapState
- setBootstrapState:
- adSheetBootstrapAttempts
- setServiceLaunchThrottled:
- setAdSheetBootstrapAttempts:
- setLastTermination:
- setAdSheetConnection:
- _adSheetConnectionLost
- setLastBootstrap:
- lastBootstrap
- serviceLaunchThrottled
- takeConnectionAssertion:
- releaseConnectionAssertion:
- connectionAvailable
- lastTermination
- classicUnavailableToken
- setClassicUnavailableToken:
- setConnectionAssertions:
@end
