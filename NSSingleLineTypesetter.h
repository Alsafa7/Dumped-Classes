@interface NSSingleLineTypesetter : NSATSTypesetter
{
	double _lineWidth;
	struct _currentBufferRange;
	pointer _glyphs;
	pointer _props;
	pointer _charIndexes;
	struct _slFlags;
}

@end
