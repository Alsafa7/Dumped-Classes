@interface _UIBackgroundTaskInfo : NSObject
{
	usigned long long _taskId;
	id _expireHandler;
	id _processAssertion;
	int _count;
}

+ dealloc
+ invalidate
+ initWithProcessAssertion:expirationHandler:
+ fireExpirationHandler
- dealloc
- invalidate
- initWithProcessAssertion:expirationHandler:
- fireExpirationHandler
@end
