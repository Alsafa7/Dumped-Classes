@interface UIBarItem : NSObject
{
	BOOL _hasCustomizableInstanceAppearanceModifications;
	BOOL _shouldArchiveUIAppearanceTags;
}

+ initWithCoder:
+ encodeWithCoder:
+ _shouldArchiveUIAppearanceTags
+ _setShouldArchiveUIAppearanceTags:
+ setTitleTextAttributes:forState:
+ titleTextAttributesForState:
+ _hasCustomizableInstanceAppearanceModifications
+ _setHasCustomizableInstanceAppearanceModifications:
- initWithCoder:
- encodeWithCoder:
- _shouldArchiveUIAppearanceTags
- _setShouldArchiveUIAppearanceTags:
- setTitleTextAttributes:forState:
- titleTextAttributesForState:
- _hasCustomizableInstanceAppearanceModifications
- _setHasCustomizableInstanceAppearanceModifications:
@end
