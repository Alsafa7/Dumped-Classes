@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer
{
	id _textInput;
	pointer _tokenizer;
	int _tokenizerType;
}

+ dealloc
+ _indexForTextPosition:
+ _isDownstreamForDirection:atPosition:
+ _getClosestTokenRangeForPosition:granularity:downstream:
+ invalidateTokenizer
+ initWithTextInputController:
+ _writingDirectionAtPosition:
- dealloc
- _indexForTextPosition:
- _isDownstreamForDirection:atPosition:
- _getClosestTokenRangeForPosition:granularity:downstream:
- invalidateTokenizer
- initWithTextInputController:
- _writingDirectionAtPosition:
@end
