@interface BKSSystemService : NSObject
{
	id _client;
}

+ createClientPort
+ openApplication:options:clientPort:withResult:
+ dealloc
+ init
+ openApplication:options:withResult:
+ pidForApplication:
+ terminateApplication:forReason:andReport:withDescription:
+ terminateApplicationGroup:forReason:andReport:withDescription:
+ fireCompletion:error:
+ clientCallbackQueue
+ openURL:application:options:clientPort:withResult:
+ _badArgumentError
+ cleanupClientPort:
+ systemApplicationBundleIdentifier
+ canOpenApplication:reason:
+ openDataActivationURL:withResult:
+ setClient:
+ client
- createClientPort
- openApplication:options:clientPort:withResult:
- dealloc
- init
- openApplication:options:withResult:
- pidForApplication:
- terminateApplication:forReason:andReport:withDescription:
- terminateApplicationGroup:forReason:andReport:withDescription:
- fireCompletion:error:
- clientCallbackQueue
- openURL:application:options:clientPort:withResult:
- _badArgumentError
- cleanupClientPort:
- systemApplicationBundleIdentifier
- canOpenApplication:reason:
- openDataActivationURL:withResult:
- setClient:
- client
@end
