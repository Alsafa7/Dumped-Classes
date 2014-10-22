@interface NSATSTypesetter : NSTypesetter
{
	id attributedString;
	struct paragraphGlyphRange;
	struct paragraphSeparatorGlyphRange;
	double lineFragmentPadding;
	id layoutManager;
	id textContainers;
	id currentTextContainer;
	usigned long long currentTextContainerIndex;
	struct currentTextContainerSize;
	id currentParagraphStyle;
	Array _atsReserved;
	id _private;
}

@end
