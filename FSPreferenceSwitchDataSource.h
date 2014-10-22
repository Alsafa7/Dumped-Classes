@interface FSPreferenceSwitchDataSource : NSObject
{
	id bundle;
	id switchIdentifier_;
}

+ stateForSwitchIdentifier:
+ applyState:forSwitchIdentifier:
+ switchWasRegisteredForIdentifier:
+ switchWasUnregisteredForIdentifier:
+ bundleForSwitchIdentifier:
+ _preferenceChanged
+ dealloc
+ initWithBundle:
- stateForSwitchIdentifier:
- applyState:forSwitchIdentifier:
- switchWasRegisteredForIdentifier:
- switchWasUnregisteredForIdentifier:
- bundleForSwitchIdentifier:
- _preferenceChanged
- dealloc
- initWithBundle:
@end
