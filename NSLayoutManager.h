@interface NSLayoutManager : NSObject
{
	id _textStorage;
	id _glyphGenerator;
	id _typesetter;
	id _textContainers;
	id _containerUsedRects;
	id _containerRuns;
	id _extraLineFragmentContainer;
	struct _lmFlags;
	id _delegate;
	unsigned short _textViewResizeDisableStack;
	unsigned short _displayInvalidationDisableStack;
	struct _deferredDisplayCharRange;
	id _firstTextView;
	pointer _cachedRectArray;
	usigned long long _cachedRectArrayCapacity;
	char *_glyphBuffer;
	usigned long long _glyphBufferSize;
	struct _cachedLocationNominalGlyphRange;
	usigned long long _cachedLocationGlyphIndex;
	struct _cachedLocation;
	struct _cachedFontCharRange;
	id _cachedFont;
	usigned long long _firstUnlaidGlyphIndex;
	usigned long long _firstUnlaidCharIndex;
	struct _newlyFilledGlyphRange;
	id _extraData;
}

@end
