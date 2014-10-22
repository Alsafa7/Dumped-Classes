@interface DDWebKitOperation : DDOperation
{
	id _startNode;
	int _startOffset;
	id _endNode;
	int _endOffset;
}

+ endOffset
+ startOffset
+ setStartOffset:
+ cleanup
+ dispatchContainerModificationBlock:
+ containerIsReady
+ needsToStartOver
+ doURLificationOnDocument
+ newOperationForStartingOver
+ newOperationForContinuation
+ _applyContainerRestrictionsToTypes
+ _containerReadyForDetection
+ _updateGenerationNumber
+ _rangeValidForContainer
+ _createScanQueryForBackend
+ setStartNode:
+ setEndNode:
+ startNode
+ endNode
+ setEndOffset:
- endOffset
- startOffset
- setStartOffset:
- cleanup
- dispatchContainerModificationBlock:
- containerIsReady
- needsToStartOver
- doURLificationOnDocument
- newOperationForStartingOver
- newOperationForContinuation
- _applyContainerRestrictionsToTypes
- _containerReadyForDetection
- _updateGenerationNumber
- _rangeValidForContainer
- _createScanQueryForBackend
- setStartNode:
- setEndNode:
- startNode
- endNode
- setEndOffset:
@end
