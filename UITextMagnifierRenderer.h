@interface UITextMagnifierRenderer : UIView
{
	int m_autoscrollDirections;
	int m_magnifierMethod;
}

+ initWithFrame:
+ drawRect:
+ setAutoscrollDirections:
+ drawMagnifier:
+ autoscrollDirections
+ drawAutoscroller:
+ magnifierMethod
+ setMagnifierMethod:
- initWithFrame:
- drawRect:
- setAutoscrollDirections:
- drawMagnifier:
- autoscrollDirections
- drawAutoscroller:
- magnifierMethod
- setMagnifierMethod:
@end
