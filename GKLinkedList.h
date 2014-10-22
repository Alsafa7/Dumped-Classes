@interface GKLinkedList : NSObject
{
	id _headNode;
	id _tailNode;
}

+ hasCycle
+ isConsistent
+ insertNodeAtBeginningWithValue:forKey:
+ nodeForInsertionWithValue:
+ insertNodeAtBeginning:
+ tailNode
+ removeAllNodes
+ insertNode:before:
+ headNode
+ setHeadNode:
+ setTailNode:
+ dealloc
+ init
+ description
+ removeNode:
- hasCycle
- isConsistent
- insertNodeAtBeginningWithValue:forKey:
- nodeForInsertionWithValue:
- insertNodeAtBeginning:
- tailNode
- removeAllNodes
- insertNode:before:
- headNode
- setHeadNode:
- setTailNode:
- dealloc
- init
- description
- removeNode:
@end
