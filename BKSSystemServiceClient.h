@interface BKSSystemServiceClient : BKSBaseXPCClient
{

}

+ openApplication:options:clientPort:withResult:
+ initWithEndpoint:
+ init
+ invalidate
+ fireCompletion:error:
+ _sendMessageType:withMessage:withReplyHandler:waitForReply:
+ clientCallbackQueue
+ queue_connectionWasCreated
+ systemApplicationBundleIdentifierWithResult:
+ pidForApplication:withResult:
+ canActivateApplication:withResult:
+ openURL:application:options:clientPort:withResult:
+ terminateApplication:forReason:andReport:withDescription:withResult:
+ terminateApplicationGroup:forReason:andReport:withDescription:withResult:
+ fireCompletion:bundleIDResult:error:
+ fireCompletion:pidResult:error:
+ fireCompletion:reasonResult:error:
- openApplication:options:clientPort:withResult:
- initWithEndpoint:
- init
- invalidate
- fireCompletion:error:
- _sendMessageType:withMessage:withReplyHandler:waitForReply:
- clientCallbackQueue
- queue_connectionWasCreated
- systemApplicationBundleIdentifierWithResult:
- pidForApplication:withResult:
- canActivateApplication:withResult:
- openURL:application:options:clientPort:withResult:
- terminateApplication:forReason:andReport:withDescription:withResult:
- terminateApplicationGroup:forReason:andReport:withDescription:withResult:
- fireCompletion:bundleIDResult:error:
- fireCompletion:pidResult:error:
- fireCompletion:reasonResult:error:
@end
