@interface LSInstallProgressList : NSObject
{
	id _progresses;
	id _subscriptions;
}

+ progressForBundleID:
+ subscriberForBundleID:andPublishingKey:
+ setProgress:forBundleID:
+ addSubscriber:forPublishingKey:andBundleID:
+ removeProgressForBundleID:
+ removeSubscriberForPublishingKey:andBundleID:
+ dealloc
+ init
+ description
- progressForBundleID:
- subscriberForBundleID:andPublishingKey:
- setProgress:forBundleID:
- addSubscriber:forPublishingKey:andBundleID:
- removeProgressForBundleID:
- removeSubscriberForPublishingKey:andBundleID:
- dealloc
- init
- description
@end
