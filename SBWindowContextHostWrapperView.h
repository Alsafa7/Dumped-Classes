@interface SBWindowContextHostWrapperView : UIView
{
	id _manager;
	id _backgroundColorWhileNotHosting;
	id _backgroundColorWhileHosting;
}

+ setBackgroundColorWhileHosting:
+ setBackgroundColorWhileNotHosting:
+ clearManager
+ updateBackgroundColor
+ initWithFrame:manager:
+ _toggleBackgroundColorIfNecessary
+ _isReallyHosting
+ _backgroundColorWhileHosting
+ _backgroundColorWhileNotHosting
+ _hostingStatusChanged
+ backgroundColorWhileHosting
+ backgroundColorWhileNotHosting
+ dealloc
+ hitTest:withEvent:
+ window
+ description
+ didAddSubview:
+ _didRemoveSubview:
- setBackgroundColorWhileHosting:
- setBackgroundColorWhileNotHosting:
- clearManager
- updateBackgroundColor
- initWithFrame:manager:
- _toggleBackgroundColorIfNecessary
- _isReallyHosting
- _backgroundColorWhileHosting
- _backgroundColorWhileNotHosting
- _hostingStatusChanged
- backgroundColorWhileHosting
- backgroundColorWhileNotHosting
- dealloc
- hitTest:withEvent:
- window
- description
- didAddSubview:
- _didRemoveSubview:
@end
