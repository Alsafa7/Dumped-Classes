@interface SBViewSnapshotProvider : NSObject
{
	id _view;
	id _completionBlock;
}

+ snapshotAsynchronously:withImageBlock:
+ snapshotWithImageBlock:
+ completionBlock
+ dealloc
+ snapshot
+ initWithView:
+ setCompletionBlock:
- snapshotAsynchronously:withImageBlock:
- snapshotWithImageBlock:
- completionBlock
- dealloc
- snapshot
- initWithView:
- setCompletionBlock:
@end
