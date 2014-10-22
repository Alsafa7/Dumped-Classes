@interface UILayoutContainerView : UIView
{
	id _delegate;
	BOOL _usesRoundedCorners;
	double _cornerRadius;
	BOOL _usesInnerShadow;
	BOOL _shadowViewsInstalled;
	id _shadowView;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ setDelegate:
+ setFrame:
+ addSubview:
+ layoutSubviews
+ setBounds:
+ delegate
+ setUsesRoundedCorners:
+ setUsesInnerShadow:
+ _installShadowViews
+ _tearDownShadowViews
+ usesRoundedCorners
+ usesInnerShadow
- dealloc
- initWithCoder:
- encodeWithCoder:
- setDelegate:
- setFrame:
- addSubview:
- layoutSubviews
- setBounds:
- delegate
- setUsesRoundedCorners:
- setUsesInnerShadow:
- _installShadowViews
- _tearDownShadowViews
- usesRoundedCorners
- usesInnerShadow
@end
