@interface __NSCFSessionBridge : NSObject
{

}

+ copyTasks
+ initWithConfiguration:session:queue:
+ invalidateSession:withQueue:completion:
+ dataTaskForRequest:completion:
+ uploadTaskForRequest:uploadFile:bodyData:completion:
+ downloadTaskForRequest:resumeData:completion:
+ flushStorageWithCompletionHandler:
+ resetStorageWithCompletionHandler:
+ classicConnectionSession
- copyTasks
- initWithConfiguration:session:queue:
- invalidateSession:withQueue:completion:
- dataTaskForRequest:completion:
- uploadTaskForRequest:uploadFile:bodyData:completion:
- downloadTaskForRequest:resumeData:completion:
- flushStorageWithCompletionHandler:
- resetStorageWithCompletionHandler:
- classicConnectionSession
@end
