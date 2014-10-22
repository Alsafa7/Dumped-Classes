@interface CMMotionActivityManager : NSObject
{
	pointer fLocationConnection;
	id fQueue;
	id fHandler;
	id fHandlerQueue;
	struct fQueries;
}

+ queryActivityStartingFromDate:toDate:toQueue:withHandler:
+ startActivityUpdatesToQueue:withHandler:
+ stopActivityUpdates
+ dealloc
+ init
+ .cxx_construct
+ .cxx_destruct
- queryActivityStartingFromDate:toDate:toQueue:withHandler:
- startActivityUpdatesToQueue:withHandler:
- stopActivityUpdates
- dealloc
- init
- .cxx_construct
- .cxx_destruct
@end
