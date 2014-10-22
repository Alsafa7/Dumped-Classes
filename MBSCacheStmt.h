@interface MBSCacheStmt : NSObject
{
	id _cache;
	id _SQL;
	pointer _stmt;
	double _startTime;
	BOOL _reset;
}

+ isReset
+ initWithCache:SQL:stmt:
+ bindText:atIndex:
+ textColumn:
+ int64Column:
+ blobColumn:
+ bindInt64:atIndex:
+ bindBlob:atIndex:
+ intColumn:
+ bindInteger:atIndex:
+ bindInt:atIndex:
+ verifyEqualToStmt:exceptColumnNumbers:
+ typeOfColumn:
+ doubleColumn:
+ valueOfColumn:
+ setReset:
+ dealloc
+ reset
+ columnCount
+ step
- isReset
- initWithCache:SQL:stmt:
- bindText:atIndex:
- textColumn:
- int64Column:
- blobColumn:
- bindInt64:atIndex:
- bindBlob:atIndex:
- intColumn:
- bindInteger:atIndex:
- bindInt:atIndex:
- verifyEqualToStmt:exceptColumnNumbers:
- typeOfColumn:
- doubleColumn:
- valueOfColumn:
- setReset:
- dealloc
- reset
- columnCount
- step
@end
