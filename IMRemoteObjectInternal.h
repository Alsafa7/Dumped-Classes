@interface IMRemoteObjectInternal : NSObject
{
	id _lock;
	id _connection;
	id _queue;
	long long _deathPostPredicate;
	id _protocol;
	id _portName;
	BOOL _willBeTerminated;
	int _pid;
}

@end
