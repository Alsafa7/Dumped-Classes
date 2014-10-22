@interface AppLaunchStatsDiag : NSObject
{
	id APLSDiagQueue;
	id APLSDiagTimer;
	int diagToken;
	BOOL diagTimerOn;
}

+ init
+ dumpDiagnosticIntoFile
+ turnOffDiagnostic
+ checkDuetDiagState
+ turnOnDiagnostic:
+ base64EncodeFile:dumpfile:
+ initializeDiag:
+ .cxx_destruct
- init
- dumpDiagnosticIntoFile
- turnOffDiagnostic
- checkDuetDiagState
- turnOnDiagnostic:
- base64EncodeFile:dumpfile:
- initializeDiag:
- .cxx_destruct
@end
