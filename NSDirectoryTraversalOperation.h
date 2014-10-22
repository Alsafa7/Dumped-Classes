@interface NSDirectoryTraversalOperation : NSOperation
{
	id _delegate;
	id _sourcePath;
	id _error;
	pointer _stream;
	int _optionsFlags;
	int _lastDeviceInode;
	BOOL _shouldFilterUnderbars;
	BOOL _stopped;
	id _deviceEntryPoints;
	id _deviceNumbers;
}

+ _shouldFilterEntry:
+ handlePathname:
+ shouldProceedAfterError:
+ _setError:
+ _validatePaths:
+ _handleFTSEntry:
+ dealloc
+ setDelegate:
+ delegate
+ main
+ initWithPath:
+ error
- _shouldFilterEntry:
- handlePathname:
- shouldProceedAfterError:
- _setError:
- _validatePaths:
- _handleFTSEntry:
- dealloc
- setDelegate:
- delegate
- main
- initWithPath:
- error
@end
