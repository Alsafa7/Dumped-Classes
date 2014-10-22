@interface DDRange : NSObject
{
	id _node;
	long long _startOffset;
	long long _endOffset;
}

+ dealloc
+ description
+ endOffset
+ startOffset
+ initWithDOMRange:
+ node
+ setStartOffset:
+ setNode:
+ setEndOffset:
- dealloc
- description
- endOffset
- startOffset
- initWithDOMRange:
- node
- setStartOffset:
- setNode:
- setEndOffset:
@end
