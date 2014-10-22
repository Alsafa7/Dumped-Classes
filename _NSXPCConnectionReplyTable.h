@interface _NSXPCConnectionReplyTable : NSObject
{
	pointer _replyTable;
	int _replyTableLock;
	usigned long long _sequence;
}

+ replyInfoForSequence:
+ cleanupReplyBlocksWithError:
+ sequenceForReplyBlock:errorBlock:cleanupBlock:protocol:selector:proxyNumber:userInfo:
+ invokeErrorBlockForSequence:withError:
+ dealloc
+ init
+ finalize
- replyInfoForSequence:
- cleanupReplyBlocksWithError:
- sequenceForReplyBlock:errorBlock:cleanupBlock:protocol:selector:proxyNumber:userInfo:
- invokeErrorBlockForSequence:withError:
- dealloc
- init
- finalize
@end
