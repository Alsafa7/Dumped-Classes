@interface UIKeyCommand : NSObject
{
	id _keyCodes;
	SEL _action;
	long long _buttonType;
	id _triggeringEvent;
	id _segueIdentifier;
	id _controllerForSegue;
	id _input;
	long long _modifierFlags;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ _buttonType
+ triggerSegueIfPossible
+ action
+ copyWithZone:
+ setAction:
+ _setButtonType:
+ _setTriggeringEvent:
+ _segueIdentifier
+ _setViewControllerForSegue:
+ input
+ modifierFlags
+ _keyCodes
+ initWithKeyCodes:modifierFlags:action:
+ initWithInput:modifierFlags:segueIdentifier:
+ initWithInput:modifierFlags:action:
+ initWithKeyCodes:modifierFlags:buttonType:
+ initWithInput:modifierFlags:buttonType:
+ _controllerForSegue
+ _triggeringEvent
- dealloc
- initWithCoder:
- encodeWithCoder:
- _buttonType
- triggerSegueIfPossible
- action
- copyWithZone:
- setAction:
- _setButtonType:
- _setTriggeringEvent:
- _segueIdentifier
- _setViewControllerForSegue:
- input
- modifierFlags
- _keyCodes
- initWithKeyCodes:modifierFlags:action:
- initWithInput:modifierFlags:segueIdentifier:
- initWithInput:modifierFlags:action:
- initWithKeyCodes:modifierFlags:buttonType:
- initWithInput:modifierFlags:buttonType:
- _controllerForSegue
- _triggeringEvent
@end
