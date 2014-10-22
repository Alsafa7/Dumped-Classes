@interface MBNotificationCenter : NSObject
{
	id _tokensByName;
	id _queue;
}

+ postNotification:ifStateChanged:
+ _tokenForName:
+ _stateForToken:
+ _setState:forToken:
+ stateForNotification:
+ setState:forNotification:
+ dealloc
+ init
+ postNotification:
+ _postNotification:
- postNotification:ifStateChanged:
- _tokenForName:
- _stateForToken:
- _setState:forToken:
- stateForNotification:
- setState:forNotification:
- dealloc
- init
- postNotification:
- _postNotification:
@end
