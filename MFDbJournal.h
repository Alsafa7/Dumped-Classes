@interface MFDbJournal : NSObject
{
	id _path;
	struct _lock;
	int _fd;
	id _buffer;
}

+ dealloc
+ flush
+ clear
+ initWithPath:
+ append:
+ mergeWithDatabase:
+ _resetBuffer
+ _processJournalFile:db:
- dealloc
- flush
- clear
- initWithPath:
- append:
- mergeWithDatabase:
- _resetBuffer
- _processJournalFile:db:
@end
