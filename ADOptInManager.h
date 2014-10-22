@interface ADOptInManager : NSObject
{
	id _adSheetConnection;
	id _enqueuedHandlers;
}

+ init
+ _considerConnectingToAdSheet
+ adSheetConnection
+ setAdSheetConnection:
+ setOptInStatus:completionHandler:
+ _whenConnectionAvailable:
+ refreshOptInStatusRefreshingWeakToken:withCompletionHandler:
+ handleAccountChange
+ enqueuedHandlers
+ _launchAdSheet
+ refreshOptInStatus
+ getiAdIDsWithCompletionHandler:
+ setEnqueuedHandlers:
- init
- _considerConnectingToAdSheet
- adSheetConnection
- setAdSheetConnection:
- setOptInStatus:completionHandler:
- _whenConnectionAvailable:
- refreshOptInStatusRefreshingWeakToken:withCompletionHandler:
- handleAccountChange
- enqueuedHandlers
- _launchAdSheet
- refreshOptInStatus
- getiAdIDsWithCompletionHandler:
- setEnqueuedHandlers:
@end
