@interface DuetLogger : NSObject
{
	pointer log_client;
	pointer log_msg;
	BOOL canWriteToFile;
	BOOL firstTime;
	id logQueue;
	int fd;
	id fileMgr;
	id binaryName;
	id filePath;
	id fileName;
	id homeDir;
	id logState;
	id duetLoggerSource;
}

+ addDataSource:
+ canWriteToFile
+ setLoggingMode:
+ dumpAllLogs
+ init:withState:
+ getUniqueFileName
+ getTimeStamp
+ createFile
+ logToFile:
+ logToFileCString:
+ logToFileCStringSimpleDebug:
+ .cxx_destruct
- addDataSource:
- canWriteToFile
- setLoggingMode:
- dumpAllLogs
- init:withState:
- getUniqueFileName
- getTimeStamp
- createFile
- logToFile:
- logToFileCString:
- logToFileCStringSimpleDebug:
- .cxx_destruct
@end
