@interface GKEditAction : NSObject
{
	BOOL _destructive;
	id _name;
	SEL _selector;
}

+ setDestructive:
+ destructive
+ dealloc
+ setSelector:
+ setName:
+ name
+ selector
- setDestructive:
- destructive
- dealloc
- setSelector:
- setName:
- name
- selector
@end
