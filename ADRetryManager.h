@interface ADRetryManager : NSObject
{
	int _retryCount;
	id _requestCommands;
	BOOL _needsToRetryNakedCommands;
	id _nakedCommands;
}

+ nakedCommandsToRetry
+ appendCommandToRequest:
+ beginRetryableRequest:
+ endRetryableRequestForCommand:
+ clearNakedCommands
+ setLastReceivedCommand:
+ shouldRetryOnConnectionFailure
+ setNeedsToRetryNakedCommands
+ originalRequestId
+ retryRequestId
+ commandsToRetry
+ _clearRequestCommands
+ _commandRefsOrIsCurrentRequest:
+ commandRefsRestartCommand:
+ .cxx_destruct
- nakedCommandsToRetry
- appendCommandToRequest:
- beginRetryableRequest:
- endRetryableRequestForCommand:
- clearNakedCommands
- setLastReceivedCommand:
- shouldRetryOnConnectionFailure
- setNeedsToRetryNakedCommands
- originalRequestId
- retryRequestId
- commandsToRetry
- _clearRequestCommands
- _commandRefsOrIsCurrentRequest:
- commandRefsRestartCommand:
- .cxx_destruct
@end
