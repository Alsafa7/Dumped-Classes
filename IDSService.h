@interface IDSService : NSObject
{
	id _internal;
}

+ _internal
+ dealloc
+ initWithService:
+ addDelegate:queue:
+ accounts
+ sendMessage:fromAccount:toDestinations:priority:options:identifier:error:
+ devices
+ requestKeepAlive
+ initWithService:commands:
+ sendServerMessage:command:fromAccount:
+ sendMessage:fromAccount:toDestinations:options:identifier:error:
+ removeDelegate:
- _internal
- dealloc
- initWithService:
- addDelegate:queue:
- accounts
- sendMessage:fromAccount:toDestinations:priority:options:identifier:error:
- devices
- requestKeepAlive
- initWithService:commands:
- sendServerMessage:command:fromAccount:
- sendMessage:fromAccount:toDestinations:options:identifier:error:
- removeDelegate:
@end
