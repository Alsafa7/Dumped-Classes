@interface MCCardDAVAccountPayload : MCPayload
{
	id _accountDescription;
	id _hostname;
	id _username;
	id _password;
	id _principalURL;
	BOOL _useSSL;
	int _port;
	id _accountPersistentUUID;
}

+ handlerWithProfileHandler:
+ password
+ setPassword:
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
+ principalURL
+ accountDescription
+ setUsername:
+ username
+ .cxx_destruct
+ hostname
+ port
- handlerWithProfileHandler:
- password
- setPassword:
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
- principalURL
- accountDescription
- setUsername:
- username
- .cxx_destruct
- hostname
- port
@end
