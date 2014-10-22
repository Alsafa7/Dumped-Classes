@interface MobileGestaltHelperProxy : NSObject
{
	id _sema;
	id _connection;
	int _error;
	id _helper;
}

+ helper
+ dealloc
+ init
+ signal
+ wait
- helper
- dealloc
- init
- signal
- wait
@end
