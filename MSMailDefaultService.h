@interface MSMailDefaultService : MSService
{
	BOOL _shouldLaunch;
}

+ init
+ _handleMessageSendFailure:message:messageIndex:context:
+ _createServiceOnQueue:
+ shouldLaunchMobileMail
+ setShouldLaunchMobileMail:
- init
- _handleMessageSendFailure:message:messageIndex:context:
- _createServiceOnQueue:
- shouldLaunchMobileMail
- setShouldLaunchMobileMail:
@end
