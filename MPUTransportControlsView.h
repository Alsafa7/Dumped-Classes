@interface MPUTransportControlsView : UIView
{
	id _leftButton;
	id _middleButton;
	id _rightButton;
	id _shuffleButton;
	id _repeatButton;
	struct _insetsForExpandingButtons;
	BOOL _showAccessoryButtons;
	BOOL _showIsPlaying;
	long long _style;
	long long _availableControls;
	long long _highlightedControls;
	usigned long long _repeatType;
	usigned long long _shuffleType;
	id _delegate;
}

+ repeatType
+ shuffleType
+ setRepeatType:
+ setShuffleType:
+ initWithFrame:
+ setDelegate:
+ layoutSubviews
+ delegate
+ style
+ initWithStyle:
+ _createTransportButtonWithStyle:
+ setShowAccessoryButtons:
+ _updateTransportControlButtons
+ _layoutButton:withNewFrame:inExpandedTouchRect:
+ _createGlowPathForButton:
+ _updateTransportControlHighlightedStates
+ _createAccessoryButtonWithStyle:
+ _styledImageName:
+ _classBundleImageNamed:
+ _setImage:forButton:
+ _transportControlActivate:
+ _transportControlDeactivate:
+ _transportControlTap:
+ _transportControlLongPressBegin:
+ _transportControlLongPressEnd:
+ _accessoryControlTap:
+ _accessoryButtonTextAttributes
+ _accessoryButtonEmphasizedTextAttributes
+ _addGlowToButton:
+ _animateFadeGlowForButton:
+ setAvailableControls:
+ setHighlightedControls:
+ setShowIsPlaying:
+ _leftButton
+ _middleButton
+ _rightButton
+ _shuffleButton
+ _repeatButton
+ _insetsForExpandingButtons
+ set_insetsForExpandingButtons:
+ availableControls
+ highlightedControls
+ showAccessoryButtons
+ showIsPlaying
+ .cxx_destruct
- repeatType
- shuffleType
- setRepeatType:
- setShuffleType:
- initWithFrame:
- setDelegate:
- layoutSubviews
- delegate
- style
- initWithStyle:
- _createTransportButtonWithStyle:
- setShowAccessoryButtons:
- _updateTransportControlButtons
- _layoutButton:withNewFrame:inExpandedTouchRect:
- _createGlowPathForButton:
- _updateTransportControlHighlightedStates
- _createAccessoryButtonWithStyle:
- _styledImageName:
- _classBundleImageNamed:
- _setImage:forButton:
- _transportControlActivate:
- _transportControlDeactivate:
- _transportControlTap:
- _transportControlLongPressBegin:
- _transportControlLongPressEnd:
- _accessoryControlTap:
- _accessoryButtonTextAttributes
- _accessoryButtonEmphasizedTextAttributes
- _addGlowToButton:
- _animateFadeGlowForButton:
- setAvailableControls:
- setHighlightedControls:
- setShowIsPlaying:
- _leftButton
- _middleButton
- _rightButton
- _shuffleButton
- _repeatButton
- _insetsForExpandingButtons
- set_insetsForExpandingButtons:
- availableControls
- highlightedControls
- showAccessoryButtons
- showIsPlaying
- .cxx_destruct
@end
