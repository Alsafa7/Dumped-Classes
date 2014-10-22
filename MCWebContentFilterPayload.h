@interface MCWebContentFilterPayload : MCPayload
{
	BOOL _autoFilterEnabled;
	id _permittedURLStrings;
	id _whitelistedBookmarks;
	id _blacklistedURLStrings;
}

+ handlerWithProfileHandler:
+ restrictions
+ description
+ title
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ autoFilterEnabled
+ permittedURLStrings
+ whitelistedBookmarks
+ blacklistedURLStrings
+ setAutoFilterEnabled:
+ setPermittedURLStrings:
+ setWhitelistedBookmarks:
+ setBlacklistedURLStrings:
+ .cxx_destruct
- handlerWithProfileHandler:
- restrictions
- description
- title
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- autoFilterEnabled
- permittedURLStrings
- whitelistedBookmarks
- blacklistedURLStrings
- setAutoFilterEnabled:
- setPermittedURLStrings:
- setWhitelistedBookmarks:
- setBlacklistedURLStrings:
- .cxx_destruct
@end
