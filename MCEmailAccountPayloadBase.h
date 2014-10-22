@interface MCEmailAccountPayloadBase : MCPayload
{
	BOOL _preventMove;
	BOOL _preventAppSheet;
	BOOL _SMIMEEnabled;
	BOOL _SMIMEEncryptionEnabled;
	id _SMIMESigningIdentityUUID;
	id _SMIMEEncryptionIdentityUUID;
	id _SMIMESigningIdentityPersistentID;
	id _SMIMEEncryptionIdentityPersistentID;
	BOOL _isRecentsSyncingDisabled;
}

+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ preventMove
+ preventAppSheet
+ SMIMEEnabled
+ SMIMEEncryptionEnabled
+ isRecentsSyncingDisabled
+ SMIMESigningIdentityUUID
+ SMIMEEncryptionIdentityUUID
+ SMIMESigningIdentityPersistentID
+ setSMIMESigningIdentityPersistentID:
+ SMIMEEncryptionIdentityPersistentID
+ setSMIMEEncryptionIdentityPersistentID:
+ .cxx_destruct
- description
- initWithDictionary:profile:outError:
- stubDictionary
- preventMove
- preventAppSheet
- SMIMEEnabled
- SMIMEEncryptionEnabled
- isRecentsSyncingDisabled
- SMIMESigningIdentityUUID
- SMIMEEncryptionIdentityUUID
- SMIMESigningIdentityPersistentID
- setSMIMESigningIdentityPersistentID:
- SMIMEEncryptionIdentityPersistentID
- setSMIMEEncryptionIdentityPersistentID:
- .cxx_destruct
@end
