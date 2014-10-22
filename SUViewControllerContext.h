@interface SUViewControllerContext : NSObject
{
	id _metadata;
	id _sectionIdentifier;
	long long _type;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ setType:
+ type
+ sectionIdentifier
+ setSectionIdentifier:
+ copyViewController
+ setValue:forMetadataKey:
+ valueForMetadataKey:
+ _typeForTypeString:
+ _typeStringForType:
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- setType:
- type
- sectionIdentifier
- setSectionIdentifier:
- copyViewController
- setValue:forMetadataKey:
- valueForMetadataKey:
- _typeForTypeString:
- _typeStringForType:
@end
