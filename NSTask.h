@interface NSTask : NSObject
{

}

+ currentDirectoryPath
+ setArguments:
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
+ init
+ environment
+ suspend
+ arguments
+ resume
+ isRunning
+ setTerminationHandler:
+ processIdentifier
+ terminationHandler
- currentDirectoryPath
- setArguments:
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
- init
- environment
- suspend
- arguments
- resume
- isRunning
- setTerminationHandler:
- processIdentifier
- terminationHandler
@end
