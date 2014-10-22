@interface SBIconIndexMutableList : NSObject
{
	id _nodes;
	id _index;
	id _observer;
}

+ containsNodeIdentifier:
+ containedNodeIdentifiers
+ indexPathsForContainedNodeIdentifier:prefixPath:
+ nodesAlongIndexPath:consumedIndexes:
+ node:didAddContainedNodeIdentifiers:
+ node:didRemoveContainedNodeIdentifiers:
+ indexOfNode:
+ nodeAtIndex:
+ indexDescriptionWithPrefix:
+ insertNode:atIndex:
+ replaceNodeAtIndex:withNode:
+ removeNodeAtIndex:
+ removeAllNodes
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ count
+ init
+ containsNode:
+ setObserver:
+ observer
+ nodes
+ addNode:
+ removeNode:
- containsNodeIdentifier:
- containedNodeIdentifiers
- indexPathsForContainedNodeIdentifier:prefixPath:
- nodesAlongIndexPath:consumedIndexes:
- node:didAddContainedNodeIdentifiers:
- node:didRemoveContainedNodeIdentifiers:
- indexOfNode:
- nodeAtIndex:
- indexDescriptionWithPrefix:
- insertNode:atIndex:
- replaceNodeAtIndex:withNode:
- removeNodeAtIndex:
- removeAllNodes
- dealloc
- countByEnumeratingWithState:objects:count:
- count
- init
- containsNode:
- setObserver:
- observer
- nodes
- addNode:
- removeNode:
@end
