@interface SBUIPluginController : NSObject
{
	id _host;
	BOOL _isVisible;
}

+ setHost:
+ setVisible:
+ isVisible
+ host
+ registeredWithHost
+ supportedAndEnabled
+ wantsActivationEvent:interval:
+ prepareForActivationEvent:afterInterval:
+ cancelPendingActivationEvent:
+ handleActivationEvent:context:
+ handledPasscodeUnlockWithCompletion:
+ handledMenuButtonDownEvent
+ handledMenuButtonTap
+ handleBluetoothDismissal
+ handledWiredMicButtonTap
+ noteInterruption
+ viewControllerForActivationContext:
- setHost:
- setVisible:
- isVisible
- host
- registeredWithHost
- supportedAndEnabled
- wantsActivationEvent:interval:
- prepareForActivationEvent:afterInterval:
- cancelPendingActivationEvent:
- handleActivationEvent:context:
- handledPasscodeUnlockWithCompletion:
- handledMenuButtonDownEvent
- handledMenuButtonTap
- handleBluetoothDismissal
- handledWiredMicButtonTap
- noteInterruption
- viewControllerForActivationContext:
@end
