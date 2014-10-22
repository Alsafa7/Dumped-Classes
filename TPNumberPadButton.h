@interface TPNumberPadButton : UIControl
{
	id _revealingRingView;
	unsigned int character;
	id _color;
	id _glyphLayer;
	id _highlightedGlyphLayer;
}

+ dealloc
+ hitTest:withEvent:
+ setHighlighted:
+ color
+ setColor:
+ character
+ defaultColor
+ setCharacter:
+ initForCharacter:
+ revealingRingView
+ setGlyphLayer:
+ setHighlightedGlyphLayer:
+ touchDown
+ touchUp
+ touchCancelled
+ glyphLayer
+ highlightedGlyphLayer
+ setUsesColorDodgeBlending
+ alphaOutsideAndInsideRing
+ setAlphaOutsideAndInsideRing:
- dealloc
- hitTest:withEvent:
- setHighlighted:
- color
- setColor:
- character
- defaultColor
- setCharacter:
- initForCharacter:
- revealingRingView
- setGlyphLayer:
- setHighlightedGlyphLayer:
- touchDown
- touchUp
- touchCancelled
- glyphLayer
- highlightedGlyphLayer
- setUsesColorDodgeBlending
- alphaOutsideAndInsideRing
- setAlphaOutsideAndInsideRing:
@end
