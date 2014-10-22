@interface MCMDMPayload : MCPayload
{
	id _identityUUID;
	id _identityPersistentID;
	BOOL _useDevelopmentAPNS;
	id _topic;
	id _serverURLString;
	id _checkInURLString;
	int _accessRights;
	BOOL _signMessage;
	BOOL _checkOutWhenRemoved;
}

+ handlerWithProfileHandler:
+ description
+ title
+ topic
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ installationWarnings
+ subtitle2Label
+ subtitle2Description
+ _invalidRightsError
+ _invalidTopicError
+ _nonHTTPSURLErrorForField:
+ localizedAccessRightDescriptions
+ identityUUID
+ identityPersistentID
+ setIdentityPersistentID:
+ serverURLString
+ useDevelopmentAPNS
+ checkInURLString
+ accessRights
+ signMessage
+ checkOutWhenRemoved
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- title
- topic
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- installationWarnings
- subtitle2Label
- subtitle2Description
- _invalidRightsError
- _invalidTopicError
- _nonHTTPSURLErrorForField:
- localizedAccessRightDescriptions
- identityUUID
- identityPersistentID
- setIdentityPersistentID:
- serverURLString
- useDevelopmentAPNS
- checkInURLString
- accessRights
- signMessage
- checkOutWhenRemoved
- .cxx_destruct
@end