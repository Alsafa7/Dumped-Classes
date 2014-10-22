@interface UIDropShadowView : UIView
{
	double _cornerRadius;
	id _contentView;
	id _backgroundImage;
	id _preservedLayerValues;
}

+ dealloc
+ init
+ setFrame:
+ setBounds:
+ contentView
+ setContentView:
+ cornerRadius
+ setCornerRadius:
+ willBeginRotationWithOriginalBounds:newBounds:
+ didFinishRotation
+ updateShadowPath
- dealloc
- init
- setFrame:
- setBounds:
- contentView
- setContentView:
- cornerRadius
- setCornerRadius:
- willBeginRotationWithOriginalBounds:newBounds:
- didFinishRotation
- updateShadowPath
@end
