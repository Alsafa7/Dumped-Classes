@interface UIInputSwitcher : NSObject
{
	id m_switcherDelay;
	int m_state;
	id m_switcherView;
	id _newMode;
}

+ dealloc
+ init
+ switchMode:withDelay:
+ handleSwitchCommand:
+ isVisible
+ hideSwitcher
+ handleModifiersChangedEvent:
+ clearSwitcherTimer
+ clearHideSwitcherTimer
+ cancelSwitcherTimer
+ touchHideSwitcherTimer
+ handleRotate:
+ showSwitcher
+ setNewMode:
+ newMode
+ touchSwitcherTimer
- dealloc
- init
- switchMode:withDelay:
- handleSwitchCommand:
- isVisible
- hideSwitcher
- handleModifiersChangedEvent:
- clearSwitcherTimer
- clearHideSwitcherTimer
- cancelSwitcherTimer
- touchHideSwitcherTimer
- handleRotate:
- showSwitcher
- setNewMode:
- newMode
- touchSwitcherTimer
@end
