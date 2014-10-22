@interface MCLDAPAccountPayload : MCPayload
{
	id _accountDescription;
	id _hostname;
	id _username;
	id _password;
	BOOL _useSSL;
	id _searchSettings;
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
+ searchSettings
+ accountDescription
+ setUsername:
+ username
+ .cxx_destruct
+ hostname
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
- searchSettings
- accountDescription
- setUsername:
- username
- .cxx_destruct
- hostname
@end
