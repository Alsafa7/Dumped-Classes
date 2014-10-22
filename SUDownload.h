@interface SUDownload : NSObject
{
	id _descriptor;
	id _progress;
	id _metadata;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ setProgress:
+ progress
+ setMetadata:
+ metadata
+ setDescriptor:
+ descriptor
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- setProgress:
- progress
- setMetadata:
- metadata
- setDescriptor:
- descriptor
@end
