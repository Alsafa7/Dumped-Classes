@interface UIPeripheralHostState : NSObject
{
	struct _geometry;
	id _screenGeometry;
	BOOL _inPositionIsDestination;
}

+ dealloc
+ geometry
+ setGeometry:
+ setInPositionIsDestination:
+ setScreenGeometry:
+ screenGeometry
+ inPositionIsDestination
- dealloc
- geometry
- setGeometry:
- setInPositionIsDestination:
- setScreenGeometry:
- screenGeometry
- inPositionIsDestination
@end
