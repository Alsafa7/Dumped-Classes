@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent
{
	int _inputFlags;
	id _modifiedInput;
	id _unmodifiedInput;
	id _shiftModifiedInput;
	id _commandModifiedInput;
	id _markedInput;
	long long _modifierFlags;
	id _privateInput;
}

+ dealloc
+ isEqual:
+ type
+ _setHIDEvent:keyboard:
+ _isKeyDown
+ _matchesKeyCommand:
+ _modifierFlags
+ _keyCode
+ _gsModifierFlags
+ _modifiedInput
+ _inputFlags
+ _unmodifiedInput
+ set_modifiedInput:
+ _cloneEvent
+ _privatizeInput
+ _markedInput
+ set_modifierFlags:
+ set_inputFlags:
+ set_unmodifiedInput:
+ set_markedInput:
+ set_shiftModifiedInput:
+ set_commandModifiedInput:
+ set_privateInput:
+ _commandModifiedInput
+ _shiftModifiedInput
+ _privateInput
- dealloc
- isEqual:
- type
- _setHIDEvent:keyboard:
- _isKeyDown
- _matchesKeyCommand:
- _modifierFlags
- _keyCode
- _gsModifierFlags
- _modifiedInput
- _inputFlags
- _unmodifiedInput
- set_modifiedInput:
- _cloneEvent
- _privatizeInput
- _markedInput
- set_modifierFlags:
- set_inputFlags:
- set_unmodifiedInput:
- set_markedInput:
- set_shiftModifiedInput:
- set_commandModifiedInput:
- set_privateInput:
- _commandModifiedInput
- _shiftModifiedInput
- _privateInput
@end
