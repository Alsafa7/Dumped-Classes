@interface ABMemberNameViewCache : NSObject
{
	id _styleProvidersCache;
}

+ contentSizeCategoryDidChange:
+ setNameLabelFrame:forStyleProvider:
+ setNameLabelBaselineOffsetFromBottom:forStyleProvider:
+ memberNameRegularFontForStyleProvider:
+ memberNameBoldFontForStyleProvider:
+ memberNamePlaceholderFontForStyleProvider:
+ hasNameLabelFrameForStyleProvider:
+ nameLabelFrameForStyleProvider:
+ nameLabelBaselineOffsetFromBottomForStyleProvider:
+ regularTextAttributesForStyleProvider:
+ boldTextAttributesForStyleProvider:
+ _cacheForStyleProvider:
+ dealloc
+ init
- contentSizeCategoryDidChange:
- setNameLabelFrame:forStyleProvider:
- setNameLabelBaselineOffsetFromBottom:forStyleProvider:
- memberNameRegularFontForStyleProvider:
- memberNameBoldFontForStyleProvider:
- memberNamePlaceholderFontForStyleProvider:
- hasNameLabelFrameForStyleProvider:
- nameLabelFrameForStyleProvider:
- nameLabelBaselineOffsetFromBottomForStyleProvider:
- regularTextAttributesForStyleProvider:
- boldTextAttributesForStyleProvider:
- _cacheForStyleProvider:
- dealloc
- init
@end
