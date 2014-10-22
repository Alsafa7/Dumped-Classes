@interface LAEvent : NSObject
{
	BOOL _handled;
	id _name;
	id _mode;
	id _userInfo;
}

+ initWithName:mode:
+ setHandled:
+ isHandled
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ userInfo
+ name
+ mode
+ setUserInfo:
+ initWithName:
- initWithName:mode:
- setHandled:
- isHandled
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- userInfo
- name
- mode
- setUserInfo:
- initWithName:
@end
