@interface BBObserver : NSObject
{
	id _queue;
	id _connection;
	struct _delegateFlags;
	id _bulletinLifeAssertions;
	id _sectionParameters;
	id _attachmentInfoByBulletinID;
	id _remainingFeedsByBulletinID;
	usigned long long _numberOfBulletinFetchesUnderway;
	id _sectionIDsWithUpdatesUnderway;
	id _bulletinUpdateQueuesBySectionID;
	id _delegate;
	usigned long long _observerFeed;
}

@end
