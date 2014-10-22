@interface NSProgressSubscriber : NSObject
{
	id _publishingHandler;
	id _subscriberID;
	id _proxiesByPublisherID;
	id _connection;
	id _lock;
}

+ observePublisherForID:value:forKey:inUserInfo:
+ removePublisherForID:
+ initWithPublishingHandler:
+ startForFileURL:
+ startForCategory:
+ addPublisher:forID:withValues:isOld:
+ dealloc
+ stop
- observePublisherForID:value:forKey:inUserInfo:
- removePublisherForID:
- initWithPublishingHandler:
- startForFileURL:
- startForCategory:
- addPublisher:forID:withValues:isOld:
- dealloc
- stop
@end
