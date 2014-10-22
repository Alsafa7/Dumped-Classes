@interface _LibraryNotification : NSObject
{
	int _token;
	id _distributedName;
	id _localName;
}

+ dealloc
+ init
+ initWithDistributedName:localName:
+ distributedName
+ setDistributedName:
+ setLocalName:
+ token
+ setToken:
+ .cxx_destruct
+ localName
- dealloc
- init
- initWithDistributedName:localName:
- distributedName
- setDistributedName:
- setLocalName:
- token
- setToken:
- .cxx_destruct
- localName
@end
