@interface ABContactAction : NSObject
{
	BOOL _destructive;
	id _delegate;
	id _contact;
	id _title;
	id _target;
	SEL _selector;
}

+ initWithContact:
+ performActionWithSender:
+ isDestructive
+ contact
+ setContact:
+ initWithTitle:target:selector:destructive:
+ setDestructive:
+ dealloc
+ setDelegate:
+ description
+ delegate
+ target
+ title
+ selector
- initWithContact:
- performActionWithSender:
- isDestructive
- contact
- setContact:
- initWithTitle:target:selector:destructive:
- setDestructive:
- dealloc
- setDelegate:
- description
- delegate
- target
- title
- selector
@end
