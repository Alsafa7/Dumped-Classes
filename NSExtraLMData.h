@interface NSExtraLMData : NSObject
{
	id _attachmentSizesRun;
	struct _currentAttachmentRect;
	usigned long long _currentAttachmentIndex;
	id _fillHoleLock;
	id _fragmentRunsExtras;
	id _temporaryAttributes;
	id _firstTextContainer;
	pointer _textContainerIndexes;
	pointer _textContainerGlyphIndexes;
	long long _typesetterBehavior;
	struct _cachedFontBounds;
	double _cachedUnderlineThickness;
	double _cachedUnderlinePosition;
	double _cachedUnderlineAdjustment;
	struct _cachedUnderlineRange;
	id _blockRunsArray;
	double _hyphenationFactor;
	id _insertionPointCache;
	struct _glyphTree;
	struct _layoutTree;
	struct _firstTextViewVisibleCharRange;
	struct _firstTextViewVisibleOffset;
	struct _lastInvalidatedCharRange;
	double _lastInvalidatedLongitudinalPosition;
	id _lastInvalidatedTextContainer;
	id _rowArrayCache;
	struct _lmFlags2;
}

@end
