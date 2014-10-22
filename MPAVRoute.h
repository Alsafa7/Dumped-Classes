@interface MPAVRoute : NSObject
{
	BOOL _displayIsPicked;
	long long _displayRouteType;
	BOOL _isPicked;
	BOOL _requiresPassword;
	usigned long long _routeIndex;
	id _routeName;
	long long _routeType;
	id _routeUID;
	long long _routeSubtype;
}

+ isPicked
+ routeType
+ routeIndex
+ requiresPassword
+ routeSubtype
+ routeUID
+ _initWithName:routeType:routeSubtype:routeUID:routeIndex:requiresPassword:
+ setIsPicked:
+ setDisplayIsPicked:
+ setDisplayRouteType:
+ isBluetoothRoute
+ displayIsPicked
+ displayRouteType
+ isEqual:
+ hash
+ name
+ .cxx_destruct
- isPicked
- routeType
- routeIndex
- requiresPassword
- routeSubtype
- routeUID
- _initWithName:routeType:routeSubtype:routeUID:routeIndex:requiresPassword:
- setIsPicked:
- setDisplayIsPicked:
- setDisplayRouteType:
- isBluetoothRoute
- displayIsPicked
- displayRouteType
- isEqual:
- hash
- name
- .cxx_destruct
@end
