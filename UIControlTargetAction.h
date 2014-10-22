@interface UIControlTargetAction : NSObject
{
	id _target;
	SEL _action;
	int _eventMask;
	BOOL _cancelled;
}

+ cancelled
+ setCancelled:
- cancelled
- setCancelled:
@end
