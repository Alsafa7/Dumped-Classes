@interface _UILabelScaledMetrics : NSObject
{
	double _actualScaleFactor;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	id _scaledAttributedText;
	struct _targetSize;
	struct _scaledSize;
}

+ dealloc
+ targetSize
+ setTargetSize:
+ scaledSize
+ setScaledSize:
+ actualScaleFactor
+ setActualScaleFactor:
+ baselineOffset
+ setBaselineOffset:
+ scaledBaselineOffset
+ setScaledBaselineOffset:
+ scaledLineHeight
+ setScaledLineHeight:
+ scaledAttributedText
+ setScaledAttributedText:
- dealloc
- targetSize
- setTargetSize:
- scaledSize
- setScaledSize:
- actualScaleFactor
- setActualScaleFactor:
- baselineOffset
- setBaselineOffset:
- scaledBaselineOffset
- setScaledBaselineOffset:
- scaledLineHeight
- setScaledLineHeight:
- scaledAttributedText
- setScaledAttributedText:
@end
