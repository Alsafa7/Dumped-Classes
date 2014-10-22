@interface BKSApplicationActivationAssertion : NSObject
{
	id _workspace;
	id _uniqueID;
	id _name;
	BOOL _released;
}

+ dealloc
+ init
+ name
+ releaseAssertion
+ _initWithWorkspace:application:name:
- dealloc
- init
- name
- releaseAssertion
- _initWithWorkspace:application:name:
@end
