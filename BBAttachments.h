@interface BBAttachments : NSObject
{
	long long primaryType;
	id _additionalAttachments;
	id _clientSideComposedImageInfos;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ copyWithZone:
+ primaryType
+ numberOfAdditionalAttachments
+ numberOfAdditionalAttachmentsOfType:
+ setPrimaryType:
+ addAttachmentOfType:
+ isEqualToAttachments:
+ additionalAttachments
+ setAdditionalAttachments:
+ clientSideComposedImageInfos
+ setClientSideComposedImageInfos:
- dealloc
- initWithCoder:
- encodeWithCoder:
- copyWithZone:
- primaryType
- numberOfAdditionalAttachments
- numberOfAdditionalAttachmentsOfType:
- setPrimaryType:
- addAttachmentOfType:
- isEqualToAttachments:
- additionalAttachments
- setAdditionalAttachments:
- clientSideComposedImageInfos
- setClientSideComposedImageInfos:
@end
