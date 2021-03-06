@interface TPRevealingRingView : UIView
{
	BOOL _revealed;
	id _outerView;
	id _outerGammaView;
	id _innerGammaView;
	id _innerView;
	id _colorOutsideRing;
	id _colorInsideRing;
	struct _paddingOutsideRing;
	double _defaultRingStrokeWidth;
	double _gammaBoost;
	double _revealAnimationDuration;
	double _unrevealAnimationDuration;
	double _minimumRevealingScale;
	double _cornerRadius;
	int _animationStyle;
	BOOL _isCircularRing;
	BOOL _innerGammaAlpha;
	BOOL _gammaBoostOuterRing;
	BOOL _gammaBoostInside;
	double _alphaInsideRing;
	double _alphaOutsideRing;
}

+ initWithFrame:
+ dealloc
+ setFrame:
+ layoutSubviews
+ cornerRadius
+ setCornerRadius:
+ intrinsicContentSize
+ animationStyle
+ setAnimationStyle:
+ setGammaBoostInside:
+ setGammaBoostOuterRing:
+ setRingGammaBoost:
+ paddingOutsideRing
+ initWithFrame:paddingOutsideRing:
+ setColorInsideRing:
+ setColorOutsideRing:
+ ringSize
+ setUsesColorDodgeBlending:
+ alphaInsideRing
+ setAlphaInsideRing:
+ setAlphaOutsideRing:
+ setRevealed:animated:
+ colorOutsideRing
+ _bezierPathForRect:cornerRadius:
+ setGammaBoost:
+ setDefaultRingStrokeWidth:
+ setRevealAnimationDuration:
+ setUnrevealAnimationDuration:
+ setMinimumRevealingScale:
+ setPaddingOutsideRing:
+ _adjustGammaBoostIfNecessary
+ _evaluateCircularness
+ setRevealed:animated:delay:
+ _animateForReveal:withDuration:delay:
+ _setOuterGammaScale:
+ _setInnerGammaScale:
+ _setInnerCircleScale:
+ _calculateOuter:inner:newXOffset:newYOffset:withScale:
+ _shouldDrawAsCircle:cornerRadius:
+ _isSquare:
+ alphaOutsideRing
+ defaultRingStrokeWidth
+ gammaBoost
+ revealAnimationDuration
+ unrevealAnimationDuration
+ minimumRevealingScale
+ colorInsideRing
+ gammaBoostOuterRing
+ gammaBoostInside
- initWithFrame:
- dealloc
- setFrame:
- layoutSubviews
- cornerRadius
- setCornerRadius:
- intrinsicContentSize
- animationStyle
- setAnimationStyle:
- setGammaBoostInside:
- setGammaBoostOuterRing:
- setRingGammaBoost:
- paddingOutsideRing
- initWithFrame:paddingOutsideRing:
- setColorInsideRing:
- setColorOutsideRing:
- ringSize
- setUsesColorDodgeBlending:
- alphaInsideRing
- setAlphaInsideRing:
- setAlphaOutsideRing:
- setRevealed:animated:
- colorOutsideRing
- _bezierPathForRect:cornerRadius:
- setGammaBoost:
- setDefaultRingStrokeWidth:
- setRevealAnimationDuration:
- setUnrevealAnimationDuration:
- setMinimumRevealingScale:
- setPaddingOutsideRing:
- _adjustGammaBoostIfNecessary
- _evaluateCircularness
- setRevealed:animated:delay:
- _animateForReveal:withDuration:delay:
- _setOuterGammaScale:
- _setInnerGammaScale:
- _setInnerCircleScale:
- _calculateOuter:inner:newXOffset:newYOffset:withScale:
- _shouldDrawAsCircle:cornerRadius:
- _isSquare:
- alphaOutsideRing
- defaultRingStrokeWidth
- gammaBoost
- revealAnimationDuration
- unrevealAnimationDuration
- minimumRevealingScale
- colorInsideRing
- gammaBoostOuterRing
- gammaBoostInside
@end
