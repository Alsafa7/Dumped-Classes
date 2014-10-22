@interface MCSubCalAccountPayload : MCPayload
{
	id _accountDescription;
	id _hostname;
	id _username;
	id _password;
	BOOL _useSSL;
	id _accountPersistentUUID;
}

+ handlerWithProfileHandler:
+ password
+ description
+ title
+ useSSL
+ accountPersistentUUID
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ subtitle2Label
+ subtitle2Description
+ setAccountPersistentUUID:
+ accountDescription
+ username
+ .cxx_destruct
+ hostname
- handlerWithProfileHandler:
- password
- description
- title
- useSSL
- accountPersistentUUID
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- subtitle2Label
- subtitle2Description
- setAccountPersistentUUID:
- accountDescription
- username
- .cxx_destruct
- hostname
@end
