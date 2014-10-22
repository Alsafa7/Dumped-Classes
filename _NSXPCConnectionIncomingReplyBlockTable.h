@interface _NSXPCConnectionIncomingReplyBlockTable : NSObject
{
	pointer _replyTable;
	int _replyTableLock;
	usigned long long _sequence;
}

+ sequenceForIncomingReplyBlockWithCleanupBlock:
+ removeIncomingReplyBlockForSequence:
+ cleanupIncomingReplyBlocks
+ dealloc
+ init
+ finalize
- sequenceForIncomingReplyBlockWithCleanupBlock:
- removeIncomingReplyBlockForSequence:
- cleanupIncomingReplyBlocks
- dealloc
- init
- finalize
@end
