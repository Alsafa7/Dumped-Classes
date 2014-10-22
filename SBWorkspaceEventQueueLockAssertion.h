@interface SBWorkspaceEventQueueLockAssertion : NSObject
{
	id _eventQueue;
	id _reason;
}

+ initWithWorkspaceEventQueue:reason:
+ dealloc
+ description
+ reason
- initWithWorkspaceEventQueue:reason:
- dealloc
- description
- reason
@end
