@interface NSParagraphStyle : NSObject
{
	double _lineSpacing;
	double _paragraphSpacing;
	double _headIndent;
	double _tailIndent;
	double _firstLineHeadIndent;
	double _minimumLineHeight;
	double _maximumLineHeight;
	id _tabStops;
	struct _flags;
	double _defaultTabInterval;
	id _extraData;
}

@end
