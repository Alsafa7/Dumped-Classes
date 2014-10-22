@interface CPExclusiveLock : NSObject
{
	int _fd;
	id _name;
}

+ tryLock
+ dealloc
+ init
+ setName:
+ name
+ lock
+ unlock
+ initWithName:
- tryLock
- dealloc
- init
- setName:
- name
- lock
- unlock
- initWithName:
@end
