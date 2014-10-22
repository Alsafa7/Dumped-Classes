@interface ACAccountCredential : NSObject
{
	id _credentialItems;
	id _credentialType;
	id _dirtyProperties;
	id _owningAccount;
	BOOL _dirty;
	BOOL _empty;
}

+ _clearDirtyProperties
+ _setOwningAccount:
+ _markPropertyDirty:
+ credentialItems
+ setOauthRefreshToken:
+ setExpiryDate:
+ initWithOAuthToken:tokenSecret:
+ initWithOAuth2Token:refreshToken:expiryDate:
+ setEmpty:
+ password
+ dirtyProperties
+ setPassword:
+ credentialType
+ oauthRefreshToken
+ initWithCoder:
+ encodeWithCoder:
+ init
+ isEqual:
+ hash
+ isEmpty
+ keysForCredentialItems
+ setOauthToken:
+ oauthTokenSecret
+ setOauthTokenSecret:
+ findMyiPhoneToken
+ setMapsToken:
+ setFindMyiPhoneToken:
+ mapsToken
+ expiryDate
+ credentialItemForKey:
+ setCredentialItem:forKey:
+ initWithPassword:
+ setCredentialType:
+ token
+ setToken:
+ isDirty
+ .cxx_destruct
+ oauthToken
+ setDirty:
- _clearDirtyProperties
- _setOwningAccount:
- _markPropertyDirty:
- credentialItems
- setOauthRefreshToken:
- setExpiryDate:
- initWithOAuthToken:tokenSecret:
- initWithOAuth2Token:refreshToken:expiryDate:
- setEmpty:
- password
- dirtyProperties
- setPassword:
- credentialType
- oauthRefreshToken
- initWithCoder:
- encodeWithCoder:
- init
- isEqual:
- hash
- isEmpty
- keysForCredentialItems
- setOauthToken:
- oauthTokenSecret
- setOauthTokenSecret:
- findMyiPhoneToken
- setMapsToken:
- setFindMyiPhoneToken:
- mapsToken
- expiryDate
- credentialItemForKey:
- setCredentialItem:forKey:
- initWithPassword:
- setCredentialType:
- token
- setToken:
- isDirty
- .cxx_destruct
- oauthToken
- setDirty:
@end
