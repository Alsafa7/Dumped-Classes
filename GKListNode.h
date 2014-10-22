@interface GKListNode : NSObject
{
	id _nextNode;
	id _prevNode;
	id _value;
}

+ initWithValue:
+ setNextNode:
+ prevNode
+ setPrevNode:
+ dealloc
+ description
+ setValue:
+ value
+ nextNode
- initWithValue:
- setNextNode:
- prevNode
- setPrevNode:
- dealloc
- description
- setValue:
- value
- nextNode
@end
