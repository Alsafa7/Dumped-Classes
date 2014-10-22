@interface UIStatusBarServer : NSObject
{
	id _statusBar;
	pointer _source;
}

+ dealloc
+ setStatusBar:
+ statusBar
+ _receivedStatusBarData:actions:
+ _receivedStyleOverrides:
+ _receivedGlowAnimationState:forStyle:
+ _receivedDoubleHeightStatus:forStyle:
+ initWithStatusBar:
- dealloc
- setStatusBar:
- statusBar
- _receivedStatusBarData:actions:
- _receivedStyleOverrides:
- _receivedGlowAnimationState:forStyle:
- _receivedDoubleHeightStatus:forStyle:
- initWithStatusBar:
@end
