@interface SUScriptModalDialog : NSObject
{
	id _alert;
	long long _buttonIndex;
	id _dialog;
}

+ dealloc
+ alertView:clickedButtonAtIndex:
+ initWithDialog:
+ copyResponseByRunningModal
+ _copyResponseByRunningModal
- dealloc
- alertView:clickedButtonAtIndex:
- initWithDialog:
- copyResponseByRunningModal
- _copyResponseByRunningModal
@end
