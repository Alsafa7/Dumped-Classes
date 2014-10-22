@interface MSNotificationObserver : MSMailDefaultService
{
	id _queue;
	id _delegate;
}

+ dealloc
+ setDelegate:
+ delegate
+ responseConnection:handleError:
+ responseConnection:handleResponse:
+ _initWithDelegate:queue:
+ _registerObserverClient
+ _delegateDidShutdownWithError:
+ _didReceiveNotificationData:
+ messagesForAccountIDs:count:cutOffDates:
+ activeAccountsHadLoadError:
- dealloc
- setDelegate:
- delegate
- responseConnection:handleError:
- responseConnection:handleResponse:
- _initWithDelegate:queue:
- _registerObserverClient
- _delegateDidShutdownWithError:
- _didReceiveNotificationData:
- messagesForAccountIDs:count:cutOffDates:
- activeAccountsHadLoadError:
@end
