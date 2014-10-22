@interface TUPhoneLogger : NSObject
{
	struct _lock;
	id _remoteAppender;
	BOOL _loggingEnabled;
	BOOL _loggingConfigurationCached;
	pointer _appenderQueue;
	long long _createAppenderOnce;
	BOOL _backtracesEnabled;
	BOOL _symbolicationEnabled;
}

+ dealloc
+ init
+ identifier
+ logWithLevel:topic:backtrace:format:
+ _shouldLogWithLevel:topic:
+ logWithLevel:topic:backtrace:format:args:
+ appender
+ _loggingChanged
+ symbolicationEnabled
+ setSymbolicationEnabled:
+ logWithLevel:topic:backtrace:text:
+ shouldLog
+ shouldLogWithLevel:topic:
+ setBacktracesEnabled:
+ backtracesEnabled
+ loggingEnabled
- dealloc
- init
- identifier
- logWithLevel:topic:backtrace:format:
- _shouldLogWithLevel:topic:
- logWithLevel:topic:backtrace:format:args:
- appender
- _loggingChanged
- symbolicationEnabled
- setSymbolicationEnabled:
- logWithLevel:topic:backtrace:text:
- shouldLog
- shouldLogWithLevel:topic:
- setBacktracesEnabled:
- backtracesEnabled
- loggingEnabled
@end
