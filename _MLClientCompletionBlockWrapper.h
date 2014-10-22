@interface _MLClientCompletionBlockWrapper : NSObject
{
	id _libraryCompletionHandler;
	id _transactionCompletionHandler;
	id _queryCompletionHandler;
	id _progressCompletionHandler;
}

+ libraryCompletionHandler
+ transactionCompletionHandler
+ queryCompletionHandler
+ progressCompletionHandler
+ setLibraryCompletionHandler:
+ setTransactionCompletionHandler:
+ setQueryCompletionHandler:
+ setProgressCompletionHandler:
+ .cxx_destruct
- libraryCompletionHandler
- transactionCompletionHandler
- queryCompletionHandler
- progressCompletionHandler
- setLibraryCompletionHandler:
- setTransactionCompletionHandler:
- setQueryCompletionHandler:
- setProgressCompletionHandler:
- .cxx_destruct
@end
