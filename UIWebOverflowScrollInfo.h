@interface UIWebOverflowScrollInfo : NSObject
{
	BOOL _isUserScroll;
	id _node;
	struct _offset;
}

+ dealloc
+ setOffset:
+ offset
+ node
+ initWithNode:offset:isUserScroll:
+ coalesceScrollForNode:offset:isUserScroll:
+ setNode:
+ isUserScroll
+ setIsUserScroll:
- dealloc
- setOffset:
- offset
- node
- initWithNode:offset:isUserScroll:
- coalesceScrollForNode:offset:isUserScroll:
- setNode:
- isUserScroll
- setIsUserScroll:
@end
