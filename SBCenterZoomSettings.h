@interface SBCenterZoomSettings : SBIconZoomSettings
{
	double _centerRowCoordinate;
	long long _distanceEffect;
	double _firstHopIncrement;
	double _hopIncrementAcceleration;
	double _dockMass;
}

+ setDockMass:
+ setCenterRowCoordinate:
+ centerRowCoordinate
+ distanceEffect
+ setDistanceEffect:
+ firstHopIncrement
+ setFirstHopIncrement:
+ hopIncrementAcceleration
+ setHopIncrementAcceleration:
+ dockMass
+ setDefaultValues
- setDockMass:
- setCenterRowCoordinate:
- centerRowCoordinate
- distanceEffect
- setDistanceEffect:
- firstHopIncrement
- setFirstHopIncrement:
- hopIncrementAcceleration
- setHopIncrementAcceleration:
- dockMass
- setDefaultValues
@end
