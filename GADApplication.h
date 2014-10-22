@interface GADApplication : NSObject
{
	BOOL _appFinishedLaunching;
	id _currentSession;
}

+ iTunesMetadata
+ runEarlyActivities
+ isAppActive
+ setAppFinishedLaunching:
+ appFinishedLaunching
+ iTunesMetadataPath
+ setCurrentSession:
+ dealloc
+ init
+ currentSession
- iTunesMetadata
- runEarlyActivities
- isAppActive
- setAppFinishedLaunching:
- appFinishedLaunching
- iTunesMetadataPath
- setCurrentSession:
- dealloc
- init
- currentSession
@end
