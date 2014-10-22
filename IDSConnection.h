@interface IDSConnection : NSObject
{
	id _internal;
}

+ _internal
+ dealloc
+ isActive
+ addDelegate:queue:
+ requestKeepAlive
+ initWithAccount:commands:
+ sendMessage:toDestinations:priority:options:identifier:error:
+ _initWithAccount:commands:
+ sendMessage:toDestinations:options:identifier:error:
+ account
+ initWithAccount:
+ removeDelegate:
- _internal
- dealloc
- isActive
- addDelegate:queue:
- requestKeepAlive
- initWithAccount:commands:
- sendMessage:toDestinations:priority:options:identifier:error:
- _initWithAccount:commands:
- sendMessage:toDestinations:options:identifier:error:
- account
- initWithAccount:
- removeDelegate:
@end
