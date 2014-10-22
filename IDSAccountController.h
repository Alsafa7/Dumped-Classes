@interface IDSAccountController : NSObject
{
	id _internal;
}

+ serviceName
+ _internal
+ dealloc
+ accountWithLoginID:service:
+ setupAccountWithSetupParameters:aliases:completionHandler:
+ initWithService:
+ addDelegate:queue:
+ accounts
+ _initWithService:onIDSQueue:
+ accountWithUniqueID:
+ setupAccountWithLoginID:aliases:password:completionHandler:
+ setupAccountWithLoginID:password:completionHandler:
+ setupAccountWithLoginID:authToken:profileID:selfHandle:completionHandler:
+ setupAccountWithLoginID:authToken:profileID:selfHandle:aliases:completionHandler:
+ _initWithService:
+ removeAccount:
+ disableAccount:
+ enableAccount:
+ enabledAccounts
+ _removeAccount:
+ addAccount:
+ removeDelegate:
- serviceName
- _internal
- dealloc
- accountWithLoginID:service:
- setupAccountWithSetupParameters:aliases:completionHandler:
- initWithService:
- addDelegate:queue:
- accounts
- _initWithService:onIDSQueue:
- accountWithUniqueID:
- setupAccountWithLoginID:aliases:password:completionHandler:
- setupAccountWithLoginID:password:completionHandler:
- setupAccountWithLoginID:authToken:profileID:selfHandle:completionHandler:
- setupAccountWithLoginID:authToken:profileID:selfHandle:aliases:completionHandler:
- _initWithService:
- removeAccount:
- disableAccount:
- enableAccount:
- enabledAccounts
- _removeAccount:
- addAccount:
- removeDelegate:
@end
