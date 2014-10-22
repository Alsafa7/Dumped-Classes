@interface MRMediaRemoteState : NSObject
{
	BOOL _canBeNowPlayingApp;
	id _commandHandlerBlock;
	id _commandHandlerBlocks;
	BOOL _isOverrideApp;
	BOOL _keepAlive;
	long long _originDiscoveryCount;
	int _notifyRestoreClientStateForLaunch;
	int _notifyDidLaunchToken;
	id _nowPlayingArtworkData;
	id _nowPlayingInfo;
	usigned long long _routeDiscoveryCount;
}

+ setNowPlayingInfo:
+ nowPlayingInfo
+ dealloc
+ init
+ setCanBeNowPlayingApp:
+ setCommandHandlerBlock:
+ addCommandHandlerBlock:forKey:
+ removeCommandHandlerBlockForKey:
+ isOverrideApp
+ setIsOverrideApp:
+ nowPlayingArtworkData
+ setNowPlayingArtworkData:
+ beginOriginDiscovery
+ endOriginDiscovery
+ beginRouteDiscovery
+ endRouteDiscovery
+ setKeepAlive:
+ commandHandlerBlock
+ commandHandlerBlocks
+ _avSystemControllerServerConnectionDiedNotification:
+ canBeNowPlayingApp
+ keepAlive
- setNowPlayingInfo:
- nowPlayingInfo
- dealloc
- init
- setCanBeNowPlayingApp:
- setCommandHandlerBlock:
- addCommandHandlerBlock:forKey:
- removeCommandHandlerBlockForKey:
- isOverrideApp
- setIsOverrideApp:
- nowPlayingArtworkData
- setNowPlayingArtworkData:
- beginOriginDiscovery
- endOriginDiscovery
- beginRouteDiscovery
- endRouteDiscovery
- setKeepAlive:
- commandHandlerBlock
- commandHandlerBlocks
- _avSystemControllerServerConnectionDiedNotification:
- canBeNowPlayingApp
- keepAlive
@end
