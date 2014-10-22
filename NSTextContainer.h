@interface NSTextContainer : NSObject
{
	id _layoutManager;
	id _textView;
	struct _size;
	double _lineFragmentPadding;
	usigned long long _maximumLines;
	struct _tcFlags;
	id _exclusionPaths;
	pointer _cachedBoundingPath;
	pointer _cachedClippingAttributes;
	pointer _cachedBounds;
	double _cacheBoundsMinY;
	double _cacheBoundsMaxY;
	long long _layoutOrientation;
	id _attributesForExtraLineFragment;
}

@end
