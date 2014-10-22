@interface SUClientQueueSession : NSObject
{
	long long _count;
	id _downloadKinds;
	id _managerOptions;
	id _queue;
}

+ initWithQueue:
+ setDownloadKinds:
+ dealloc
+ count
+ setCount:
+ queue
+ setQueue:
+ managerOptions
+ downloadKinds
+ setManagerOptions:
- initWithQueue:
- setDownloadKinds:
- dealloc
- count
- setCount:
- queue
- setQueue:
- managerOptions
- downloadKinds
- setManagerOptions:
@end
