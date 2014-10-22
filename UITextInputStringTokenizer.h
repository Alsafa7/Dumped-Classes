@interface UITextInputStringTokenizer : NSObject
{
	id _textInput;
}

+ rangeEnclosingPosition:withGranularity:inDirection:
+ isPosition:atBoundary:inDirection:
+ positionFromPosition:toBoundary:inDirection:
+ isPosition:withinTextUnit:inDirection:
+ _indexForTextPosition:
+ _isDownstreamForDirection:atPosition:
+ _getClosestTokenRangeForPosition:granularity:downstream:
+ initWithTextInput:
- rangeEnclosingPosition:withGranularity:inDirection:
- isPosition:atBoundary:inDirection:
- positionFromPosition:toBoundary:inDirection:
- isPosition:withinTextUnit:inDirection:
- _indexForTextPosition:
- _isDownstreamForDirection:atPosition:
- _getClosestTokenRangeForPosition:granularity:downstream:
- initWithTextInput:
@end
