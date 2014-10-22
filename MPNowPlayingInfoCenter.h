@interface MPNowPlayingInfoCenter : NSObject
{
	id _nowPlayingInfo;
	id _queuedNowPlayingInfo;
	id _pushDate;
}

+ _pushNowPlayingInfoAndRetry:
+ setNowPlayingInfo:
+ nowPlayingInfo
+ init
+ _init
+ .cxx_destruct
- _pushNowPlayingInfoAndRetry:
- setNowPlayingInfo:
- nowPlayingInfo
- init
- _init
- .cxx_destruct
@end
