@interface SUAudioPlayerSessionManager : NSObject
{
	id _sessions;
}

+ dealloc
+ init
+ allSessionURLs
+ audioPlayerForURL:
+ startSessionWithURL:
+ endSessionForURL:
+ _audioPlayerStatusChangeNotification:
- dealloc
- init
- allSessionURLs
- audioPlayerForURL:
- startSessionWithURL:
- endSessionForURL:
- _audioPlayerStatusChangeNotification:
@end
