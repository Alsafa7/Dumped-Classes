@interface NSConcreteTask : NSTask
{
	id _lock;
	id _dictionary;
	id _terminationHandler;
	id _dsrc;
	id _tmpPort;
	long long _suspendCount;
	int _pid;
	int _platformExitInfo;
	BOOL _hasExeced;
	BOOL _isRunning;
	BOOL _hasPostedDeathNotification;
	BOOL _terminationRun;
}

+ currentDirectoryPath
+ setArguments:
+ launchWithDictionary:
+ terminationStatus
+ terminationReason
+ launch
+ setCurrentDirectoryPath:
+ setEnvironment:
+ setLaunchPath:
+ interrupt
+ terminate
+ suspendCount
+ launchPath
+ setStandardInput:
+ setStandardOutput:
+ setStandardError:
+ standardInput
+ standardOutput
+ standardError
+ _withTaskDictionary:
+ _platformExitInformation
+ waitUntilExit
+ setPreferredArchitectures:
+ preferredArchitectures
+ setTaskDictionary:
+ taskDictionary
+ terminateTask
+ _procid
+ setStartsNewProcessGroup:
+ dealloc
+ init
+ environment
+ suspend
+ arguments
+ resume
+ isRunning
+ setTerminationHandler:
+ processIdentifier
+ terminationHandler
+ finalize
- currentDirectoryPath
- setArguments:
- launchWithDictionary:
- terminationStatus
- terminationReason
- launch
- setCurrentDirectoryPath:
- setEnvironment:
- setLaunchPath:
- interrupt
- terminate
- suspendCount
- launchPath
- setStandardInput:
- setStandardOutput:
- setStandardError:
- standardInput
- standardOutput
- standardError
- _withTaskDictionary:
- _platformExitInformation
- waitUntilExit
- setPreferredArchitectures:
- preferredArchitectures
- setTaskDictionary:
- taskDictionary
- terminateTask
- _procid
- setStartsNewProcessGroup:
- dealloc
- init
- environment
- suspend
- arguments
- resume
- isRunning
- setTerminationHandler:
- processIdentifier
- terminationHandler
- finalize
@end
