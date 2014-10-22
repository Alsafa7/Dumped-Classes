@interface SBWindow : UIWindow
{
	int _jailBehavior;
}

+ setAlphaAndObeyBecauseIAmTheWindowManager:
+ initWithScreen:jailBehavior:
+ jailInsets
+ initWithFrame:
+ setAlpha:
+ _isConstrainedByScreenJail
+ _isClippedByScreenJail
+ setScreen:
- setAlphaAndObeyBecauseIAmTheWindowManager:
- initWithScreen:jailBehavior:
- jailInsets
- initWithFrame:
- setAlpha:
- _isConstrainedByScreenJail
- _isClippedByScreenJail
- setScreen:
@end
