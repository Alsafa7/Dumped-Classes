@interface AVCMNotificationDispatcher : NSObject
{
	pointer _cmNotificationCenter;
	id _callbackRegistry;
	id _listenerObjectsPassedToFig;
	id _listenerObjectsQueue;
}

@end
