@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator
{
	pointer _enumerator;
	id _errorHandler;
	BOOL shouldContinue;
}

+ directoryAttributes
+ skipDescendents
+ initWithURL:includingPropertiesForKeys:options:errorHandler:
+ errorHandler
+ dealloc
+ nextObject
+ level
+ setErrorHandler:
+ fileAttributes
+ skipDescendants
+ finalize
- directoryAttributes
- skipDescendents
- initWithURL:includingPropertiesForKeys:options:errorHandler:
- errorHandler
- dealloc
- nextObject
- level
- setErrorHandler:
- fileAttributes
- skipDescendants
- finalize
@end
