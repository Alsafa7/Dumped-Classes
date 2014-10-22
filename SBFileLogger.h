@interface SBFileLogger : NSObject
{
	int _logLevel;
	id _delegate;
}

+ consoleFormat:withArguments:
+ reloadFromDefaults
+ maxLogCount
+ logPath
+ includeConsole
+ maxLogSize
+ fileFormat:withArguments:
+ willBeginLoggingToPath:
+ logLevel
+ dealloc
+ setDelegate:
+ init
+ delegate
+ isEnabled
+ name
- consoleFormat:withArguments:
- reloadFromDefaults
- maxLogCount
- logPath
- includeConsole
- maxLogSize
- fileFormat:withArguments:
- willBeginLoggingToPath:
- logLevel
- dealloc
- setDelegate:
- init
- delegate
- isEnabled
- name
@end
