@interface UITextMagnifierTimeWeightedPoint : NSObject
{
	int m_index;
	Array m_points;
}

+ distanceCoveredInInterval:priorTo:
+ displacementInInterval:priorTo:
+ clearHistory
+ addPoint:
+ weightedPoint
+ historyCovers:
+ distanceCoveredInInterval:
+ displacementInInterval:
- distanceCoveredInInterval:priorTo:
- displacementInInterval:priorTo:
- clearHistory
- addPoint:
- weightedPoint
- historyCovers:
- distanceCoveredInInterval:
- displacementInInterval:
@end
