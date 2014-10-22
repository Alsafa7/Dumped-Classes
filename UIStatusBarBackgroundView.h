@interface UIStatusBarBackgroundView : UIView
{
	id _style;
	id _topCorners;
	id _glowView;
	BOOL _glowEnabled;
	BOOL _suppressGlow;
}

+ dealloc
+ style
+ _baseImage
+ _topCornersAreRounded
+ _setGlowAnimationEnabled:waitForNextCycle:
+ _startGlowAnimationWaitForNextCycle:
+ _stopGlowAnimation
+ _styleCanGlow
+ _glowImage
+ _backgroundImageName
+ initWithFrame:style:backgroundColor:
+ setGlowAnimationEnabled:
+ setSuppressesGlow:
- dealloc
- style
- _baseImage
- _topCornersAreRounded
- _setGlowAnimationEnabled:waitForNextCycle:
- _startGlowAnimationWaitForNextCycle:
- _stopGlowAnimation
- _styleCanGlow
- _glowImage
- _backgroundImageName
- initWithFrame:style:backgroundColor:
- setGlowAnimationEnabled:
- setSuppressesGlow:
@end
