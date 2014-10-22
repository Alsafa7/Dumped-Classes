@interface TimerPadControlsView : TimerControlsView
{
	id _circleBackground;
	id _circleProgressView;
	id _toneButton;
	id _buttonsController;
	id _timerControlsDelegate;
}

+ setTimerToneName:
+ setTimerControlsDelegate:
+ showSoundPicker:
+ _configureAndAddButton:
+ setState:force:
+ timerControlsDelegate
+ dealloc
+ layoutSubviews
+ state
+ setState:
+ initWithTarget:
+ willRotateToInterfaceOrientation:duration:
+ setTime:
- setTimerToneName:
- setTimerControlsDelegate:
- showSoundPicker:
- _configureAndAddButton:
- setState:force:
- timerControlsDelegate
- dealloc
- layoutSubviews
- state
- setState:
- initWithTarget:
- willRotateToInterfaceOrientation:duration:
- setTime:
@end
