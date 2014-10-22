@interface NSConcreteNotification : NSNotification
{
	id name;
	id object;
	id userInfo;
	BOOL dyingObject;
}

+ initWithName:object:userInfo:
+ recycle
+ dealloc
+ userInfo
+ name
+ object
- initWithName:object:userInfo:
- recycle
- dealloc
- userInfo
- name
- object
@end
