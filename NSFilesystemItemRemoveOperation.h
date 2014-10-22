@interface NSFilesystemItemRemoveOperation : NSOperation
{
	id _delegate;
	id _removePath;
	id _error;
	pointer _state;
	BOOL _filterUnderbars;
}

+ _setError:
+ _filtersUnderbars
+ _setFilterUnderbars:
+ dealloc
+ setDelegate:
+ delegate
+ main
+ initWithPath:
+ error
- _setError:
- _filtersUnderbars
- _setFilterUnderbars:
- dealloc
- setDelegate:
- delegate
- main
- initWithPath:
- error
@end
