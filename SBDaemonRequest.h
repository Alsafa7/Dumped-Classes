@interface SBDaemonRequest : NSObject
{
	id _enabler;
	id _disabler;
}

+ setEnabler:
+ setDisabler:
+ dispatchEnablerOnQueue:
+ dispatchDisablerOnQueue:
+ enabler
+ disabler
+ dealloc
- setEnabler:
- setDisabler:
- dispatchEnablerOnQueue:
- dispatchDisablerOnQueue:
- enabler
- disabler
- dealloc
@end
