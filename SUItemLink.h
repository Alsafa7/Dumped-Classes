@interface SUItemLink : NSObject
{
	long long _linkTarget;
	long long _linkType;
	id _title;
	id _url;
}

+ dealloc
+ setTitle:
+ copyWithZone:
+ title
+ URL
+ setURL:
+ linkType
+ linkTarget
+ setLinkTarget:
+ setLinkType:
- dealloc
- setTitle:
- copyWithZone:
- title
- URL
- setURL:
- linkType
- linkTarget
- setLinkTarget:
- setLinkType:
@end
