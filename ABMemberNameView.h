@interface ABMemberNameView : UIView
{
	id _nameLabel;
	id _meLabel;
	BOOL _highlighted;
	BOOL _isMeCard;
	id _styleProvider;
	id _person;
}

+ styleProvider
+ setStyleProvider:
+ initWithFrame:styleProvider:
+ setIsMeCard:
+ isMeCard
+ _cachedMemberNameRegularFont
+ meLabel
+ _hasCachedNameLabelFrame
+ _cachedNameLabelFrame
+ _cachedNameLabelBaselineOffsetFromBottom
+ _attributedNameWithNameComponents:delimiter:highlightedIndex:
+ _cachedMemberNameBoldFont
+ _cachedMemberNamePlaceholderFont
+ _cachedBoldTextAttributes
+ _cachedRegularTextAttributes
+ nameLabel
+ dealloc
+ layoutSubviews
+ setHighlighted:
+ highlighted
+ person
+ setPerson:
- styleProvider
- setStyleProvider:
- initWithFrame:styleProvider:
- setIsMeCard:
- isMeCard
- _cachedMemberNameRegularFont
- meLabel
- _hasCachedNameLabelFrame
- _cachedNameLabelFrame
- _cachedNameLabelBaselineOffsetFromBottom
- _attributedNameWithNameComponents:delimiter:highlightedIndex:
- _cachedMemberNameBoldFont
- _cachedMemberNamePlaceholderFont
- _cachedBoldTextAttributes
- _cachedRegularTextAttributes
- nameLabel
- dealloc
- layoutSubviews
- setHighlighted:
- highlighted
- person
- setPerson:
@end
