@interface _NSATSTypesetterGuts : NSObject
{
	id _lineFragment;
	id _glyphStorage;
	usigned long long _lastGlyphIndex;
	usigned long long _lastContainerIndex;
	pointer _typesetterAuxiliary;
	pointer _lineFragmentRectArgs;
	char *_bidiLevels;
	struct _flags;
	struct _paragraphState;
	pointer _ctTypesetter;
}

+ dealloc
+ initWithTypesetter:
+ finalize
- dealloc
- initWithTypesetter:
- finalize
@end
