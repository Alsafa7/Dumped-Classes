@interface AVCaptureInput : NSObject
{
	id _inputInternal;
}

+ session
+ setSession:
+ _applyOverridesToCaptureOptions:
+ didStopForSession:error:
+ didStartForSession:
+ notReadyError
+ handleNotification:payload:
+ willStartForSession:
+ ports
+ clock
+ dealloc
+ init
- session
- setSession:
- _applyOverridesToCaptureOptions:
- didStopForSession:error:
- didStartForSession:
- notReadyError
- handleNotification:payload:
- willStartForSession:
- ports
- clock
- dealloc
- init
@end
