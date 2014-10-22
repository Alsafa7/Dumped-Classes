@interface WebTextIterator : NSObject
{
	id _private;
}

+ dd_checkCurrentRangeAgainstString:
+ dd_collectDDRangesForQuery:forResults:
+ dd_newQueryStopRange:
+ dd_doUrlificationForQuery:forResults:referenceDate:document:DOMWasModified:relevantResults:URLificationBlock:
+ currentText
+ currentNode
+ initWithRange:
+ atEnd
+ currentTextLength
+ currentTextPointer
+ currentRange
+ advance
+ dealloc
- dd_checkCurrentRangeAgainstString:
- dd_collectDDRangesForQuery:forResults:
- dd_newQueryStopRange:
- dd_doUrlificationForQuery:forResults:referenceDate:document:DOMWasModified:relevantResults:URLificationBlock:
- currentText
- currentNode
- initWithRange:
- atEnd
- currentTextLength
- currentTextPointer
- currentRange
- advance
- dealloc
@end
