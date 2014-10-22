@interface GKFloatInAnimator : GKBubblePathAnimator
{
	BOOL _useWelcomeSpringValues;
	long long _focusBubbleType;
	double _delayIncrement;
	double _additionalDelay;
}

+ setFocusBubbleType:
+ focusBubbleType
+ animatorType
+ setDelayIncrement:
+ setUseWelcomeSpringValues:
+ floatBubblesSortedLeftToRightInContext:
+ delayIncrement
+ useWelcomeSpringValues
+ additionalDelay
+ setAdditionalDelay:
+ init
+ animateTransition:
- setFocusBubbleType:
- focusBubbleType
- animatorType
- setDelayIncrement:
- setUseWelcomeSpringValues:
- floatBubblesSortedLeftToRightInContext:
- delayIncrement
- useWelcomeSpringValues
- additionalDelay
- setAdditionalDelay:
- init
- animateTransition:
@end
