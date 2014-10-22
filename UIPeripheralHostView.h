@interface UIPeripheralHostView : UIView
{
	int _explicitLayoutCount;
	id _cornerViewLeft;
	id _cornerViewRight;
	id _inputBackdropView;
	id _inputAccessoryBackdropView;
	id _renderConfig;
}

+ initWithFrame:
+ dealloc
+ pointInside:withEvent:
+ layoutSubviews
+ removeFromSuperview
+ didAddSubview:
+ _setRenderConfig:
+ textEffectsVisibilityLevel
+ _clipCornersOfView:
+ _inheritedRenderConfig
+ resizeForKeyplaneSize:
+ _setBaseRenderConfig:
+ updateBackdropViewForInputAccessoryView:
+ cornerViewLeft
+ cornerViewRight
+ syncInputViewBackdropToFrame:
+ inputBackdropView
+ syncInputAccessoryViewBackdropToFrame:
+ inputAccessoryBackdropView
+ beginExplicitLayout
+ endExplicitLayout
+ explicitLayout
+ _setRenderConfig:updateKeyboard:
- initWithFrame:
- dealloc
- pointInside:withEvent:
- layoutSubviews
- removeFromSuperview
- didAddSubview:
- _setRenderConfig:
- textEffectsVisibilityLevel
- _clipCornersOfView:
- _inheritedRenderConfig
- resizeForKeyplaneSize:
- _setBaseRenderConfig:
- updateBackdropViewForInputAccessoryView:
- cornerViewLeft
- cornerViewRight
- syncInputViewBackdropToFrame:
- inputBackdropView
- syncInputAccessoryViewBackdropToFrame:
- inputAccessoryBackdropView
- beginExplicitLayout
- endExplicitLayout
- explicitLayout
- _setRenderConfig:updateKeyboard:
@end
