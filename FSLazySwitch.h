@interface FSLazySwitch : NSObject
{
	id bundle;
}

+ stateForSwitchIdentifier:
+ applyActionForSwitchIdentifier:
+ settingsViewControllerClassForSwitchIdentifier:
+ applyAlternateActionForSwitchIdentifier:
+ applyState:forSwitchIdentifier:
+ hasAlternateActionForSwitchIdentifier:
+ bundleForSwitchIdentifier:
+ lazyLoadWithSwitchIdentifier:
+ dealloc
+ initWithBundle:
- stateForSwitchIdentifier:
- applyActionForSwitchIdentifier:
- settingsViewControllerClassForSwitchIdentifier:
- applyAlternateActionForSwitchIdentifier:
- applyState:forSwitchIdentifier:
- hasAlternateActionForSwitchIdentifier:
- bundleForSwitchIdentifier:
- lazyLoadWithSwitchIdentifier:
- dealloc
- initWithBundle:
@end
