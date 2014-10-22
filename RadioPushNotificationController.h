@interface RadioPushNotificationController : NSObject
{
	id _connection;
	id _delegate;
	id _environment;
	BOOL _notificationsEnabled;
	BOOL _pushEnabled;
}

+ dealloc
+ setDelegate:
+ init
+ delegate
+ setNotificationsEnabled:
+ notificationsEnabled
+ connection:didReceivePublicToken:
+ connection:didReceiveMessageForTopic:userInfo:
+ _portNameForEnvironmentName:
+ _loadURLBagWithCompletionHandler:
+ .cxx_destruct
- dealloc
- setDelegate:
- init
- delegate
- setNotificationsEnabled:
- notificationsEnabled
- connection:didReceivePublicToken:
- connection:didReceiveMessageForTopic:userInfo:
- _portNameForEnvironmentName:
- _loadURLBagWithCompletionHandler:
- .cxx_destruct
@end
