@interface CKManualUpdater : NSObject
{
	BOOL _needsUpdate;
	id _target;
	SEL _action;
}

+ setNeedsUpdate
+ description
+ initWithTarget:action:
+ setTarget:
+ action
+ target
+ setAction:
+ updateIfNeeded
+ needsUpdate
+ setNeedsUpdate:
- setNeedsUpdate
- description
- initWithTarget:action:
- setTarget:
- action
- target
- setAction:
- updateIfNeeded
- needsUpdate
- setNeedsUpdate:
@end
