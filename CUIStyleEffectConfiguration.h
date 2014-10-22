@interface CUIStyleEffectConfiguration : NSObject
{
	long long _state;
	long long _presentationState;
	long long _value;
	BOOL _useSimplifiedEffect;
}

+ init
+ state
+ setState:
+ copyWithZone:
+ setValue:
+ value
+ shouldIgnoreForegroundColor
+ setPresentationState:
+ useSimplifiedEffect
+ presentationState
+ setUseSimplifiedEffect:
- init
- state
- setState:
- copyWithZone:
- setValue:
- value
- shouldIgnoreForegroundColor
- setPresentationState:
- useSimplifiedEffect
- presentationState
- setUseSimplifiedEffect:
@end
