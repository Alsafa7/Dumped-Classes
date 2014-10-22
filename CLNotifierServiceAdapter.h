@interface CLNotifierServiceAdapter : CLIntersiloService
{
	struct _clients;
	pointer _notifier;
}

+ register:forNotification:registrationInfo:
+ initInSilo:
+ setAdaptedNotifier:
+ unregister:forNotification:
+ forget:
+ notifier
+ notifierClientNumForCoparty:
+ debugDescription
+ invalidate
+ .cxx_construct
+ .cxx_destruct
- register:forNotification:registrationInfo:
- initInSilo:
- setAdaptedNotifier:
- unregister:forNotification:
- forget:
- notifier
- notifierClientNumForCoparty:
- debugDescription
- invalidate
- .cxx_construct
- .cxx_destruct
@end
