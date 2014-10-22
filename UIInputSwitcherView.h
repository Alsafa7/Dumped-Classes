@interface UIInputSwitcherView : UIKeyboardMenuView
{
	int m_currentInputModeIndex;
	BOOL m_keyboardSettingsFromSwitcher;
	id m_inputModes;
}

+ initWithFrame:
+ dealloc
+ show
+ setInputMode:
+ numberOfItems
+ selectedInputMode
+ previousInputMode
+ inputModes
+ nextInputMode
+ selectInputMode:
+ preferredSize
+ defaultSelectedIndex
+ didSelectItemAtIndex:
+ titleForItemAtIndex:
+ subtitleForItemAtIndex:
+ setKeyboardSettingsFromSwitcher:
+ setInputModes:
+ keyboardSettingsFromSwitcher
+ selectRowForInputMode:
+ selectNextInputMode
+ selectPreviousInputMode
- initWithFrame:
- dealloc
- show
- setInputMode:
- numberOfItems
- selectedInputMode
- previousInputMode
- inputModes
- nextInputMode
- selectInputMode:
- preferredSize
- defaultSelectedIndex
- didSelectItemAtIndex:
- titleForItemAtIndex:
- subtitleForItemAtIndex:
- setKeyboardSettingsFromSwitcher:
- setInputModes:
- keyboardSettingsFromSwitcher
- selectRowForInputMode:
- selectNextInputMode
- selectPreviousInputMode
@end
