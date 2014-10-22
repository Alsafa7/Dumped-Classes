@interface CPDistributedMessagingCenter : NSObject
{
	id _centerName;
	id _lock;
	unsigned int _sendPort;
	id _asyncQueue;
	pointer _serverSource;
	id _requiredEntitlement;
	id _callouts;
	unsigned int _parkedServerPort;
	id _currentCallout;
	unsigned int _replyPort;
	BOOL _portPassing;
	BOOL _delayedReply;
}

@end
