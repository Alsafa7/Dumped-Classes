@interface GEOAttribution : PBCodable
{
	id _badge;
	id _badgeChecksum;
	id _logo;
	id _logoChecksum;
	id _name;
	id _url;
}

+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ setName:
+ name
+ dictionaryRepresentation
+ url
+ setUrl:
+ hasBadge
+ badge
+ hasLogo
+ logo
+ badgeChecksum
+ logoChecksum
+ hasUrl
+ setBadge:
+ setLogo:
+ setBadgeChecksum:
+ setLogoChecksum:
+ hasBadgeChecksum
+ hasLogoChecksum
+ readFrom:
+ writeTo:
+ copyTo:
+ hasName
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- setName:
- name
- dictionaryRepresentation
- url
- setUrl:
- hasBadge
- badge
- hasLogo
- logo
- badgeChecksum
- logoChecksum
- hasUrl
- setBadge:
- setLogo:
- setBadgeChecksum:
- setLogoChecksum:
- hasBadgeChecksum
- hasLogoChecksum
- readFrom:
- writeTo:
- copyTo:
- hasName
@end
