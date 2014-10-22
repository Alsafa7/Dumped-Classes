@interface CKScheduledUpdater : CKManualUpdater
{
	id _holdingUpdatesKeys;
}

+ setNeedsUpdate
+ dealloc
+ description
+ initWithTarget:action:
+ invalidate
+ endHoldingUpdatesForKey:
+ isHoldingUpdates
+ beginHoldingUpdatesForKey:
+ holdingUpdatesKeys
+ setHoldingUpdatesKeys:
+ updateIfNeeded
- setNeedsUpdate
- dealloc
- description
- initWithTarget:action:
- invalidate
- endHoldingUpdatesForKey:
- isHoldingUpdates
- beginHoldingUpdatesForKey:
- holdingUpdatesKeys
- setHoldingUpdatesKeys:
- updateIfNeeded
@end
