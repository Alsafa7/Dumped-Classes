@interface UIPhysicalButtonsEvent : UIInternalEvent
{
	id _allPhysicalButtons;
	id _triggeringPhysicalButton;
}

+ dealloc
+ _init
+ _addPhysicalButton:
+ _allPhysicalButtons
+ set_triggeringPhysicalButton:
+ _removePhysicalButton:
+ _windows
+ _gestureRecognizersForWindow:
+ _physicalButtonsForGestureRecognizer:withPhase:
+ _respondersForWindow:
+ _physicalButtonsForResponder:withPhase:
+ _physicalButtonsForWindow:
+ _physicalButtonsForResponder:
+ _physicalButtonsForGestureRecognizer:
+ _triggeringPhysicalButton
- dealloc
- _init
- _addPhysicalButton:
- _allPhysicalButtons
- set_triggeringPhysicalButton:
- _removePhysicalButton:
- _windows
- _gestureRecognizersForWindow:
- _physicalButtonsForGestureRecognizer:withPhase:
- _respondersForWindow:
- _physicalButtonsForResponder:withPhase:
- _physicalButtonsForWindow:
- _physicalButtonsForResponder:
- _physicalButtonsForGestureRecognizer:
- _triggeringPhysicalButton
@end
