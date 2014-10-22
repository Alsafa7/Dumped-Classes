@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator
{
	id path;
	id contents;
	usigned long long idx;
	id prepend;
	id under;
	id directoryAttributes;
	id pathToLastReportedItem;
	usigned long long depth;
	BOOL cross;
	Array _padding;
}

+ directoryAttributes
+ skipDescendents
+ _under
+ currentSubdirectoryAttributes
+ dealloc
+ nextObject
+ level
+ fileAttributes
+ skipDescendants
- directoryAttributes
- skipDescendents
- _under
- currentSubdirectoryAttributes
- dealloc
- nextObject
- level
- fileAttributes
- skipDescendants
@end
