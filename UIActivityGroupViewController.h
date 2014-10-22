@interface UIActivityGroupViewController : UICollectionViewController
{
	BOOL _darkStyleOnLegacyApp;
	BOOL _hasActivities;
	long long _activityCategory;
	id _activities;
	id _customActivityTitles;
}

@end
