@interface MFSQLiteConnectionPool : NSObject
{
	id _delegate;
	id _cacheLock;
	id _cache;
	usigned long long _cacheSize;
	usigned long long _cacheGeneration;
	usigned long long _maxConcurrentBackgroundReaders;
	usigned long long _maxConcurrentWriters;
	id _checkoutLock;
	pointer _checkoutMap;
	id _backgroundReaderSemaphore;
	int _backgroundReadersWaiting;
	id _writerSemaphore;
	int _writersWaiting;
}

+ setCacheSize:
+ cacheSize
+ dealloc
+ setDelegate:
+ delegate
+ flush
+ initWithDelegate:maxConcurrentBackgroundReaders:
+ writersWaiting
+ backgroundReaderConnection
+ _connectionWithType:
+ _semaphoreForConnectionType:waitCounter:
+ maxConcurrentReaders
+ maxConcurrentWriters
+ backgroundReadersWaiting
+ maxConcurrentBackgroundReaders
+ readerConnection
+ writerConnection
+ checkInConnection:
- setCacheSize:
- cacheSize
- dealloc
- setDelegate:
- delegate
- flush
- initWithDelegate:maxConcurrentBackgroundReaders:
- writersWaiting
- backgroundReaderConnection
- _connectionWithType:
- _semaphoreForConnectionType:waitCounter:
- maxConcurrentReaders
- maxConcurrentWriters
- backgroundReadersWaiting
- maxConcurrentBackgroundReaders
- readerConnection
- writerConnection
- checkInConnection:
@end
