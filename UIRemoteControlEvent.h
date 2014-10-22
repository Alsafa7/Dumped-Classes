@interface UIRemoteControlEvent : UIInternalEvent
{
	long long _subtype;
}

+ dealloc
+ _init
+ _setSubtype:
+ type
+ _windows
+ subtype
+ _sendEventToResponder:
+ _simpleRemoteActionNotification:
- dealloc
- _init
- _setSubtype:
- type
- _windows
- subtype
- _sendEventToResponder:
- _simpleRemoteActionNotification:
@end
