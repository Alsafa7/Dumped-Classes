@interface ALAsset : NSObject
{
	id _internal;
}

+ initWithManagedAsset:library:
+ _typeAsString
+ representationForUTI:
+ writeModifiedImageDataToSavedPhotosAlbum:metadata:completionBlock:
+ writeModifiedVideoAtPathToSavedPhotosAlbum:completionBlock:
+ setImageData:metadata:completionBlock:
+ setVideoAtPath:completionBlock:
+ setLargePreviewImageWithImageData:completionBlock:
+ requestDefaultRepresentation
+ setInternal:
+ internal
+ aspectRatioThumbnail
+ dealloc
+ description
+ isValid
+ isEditable
+ _uuid
+ defaultRepresentation
+ thumbnail
+ valueForProperty:
+ originalAsset
+ setExternalUsageIntent:
+ isDeletable
- initWithManagedAsset:library:
- _typeAsString
- representationForUTI:
- writeModifiedImageDataToSavedPhotosAlbum:metadata:completionBlock:
- writeModifiedVideoAtPathToSavedPhotosAlbum:completionBlock:
- setImageData:metadata:completionBlock:
- setVideoAtPath:completionBlock:
- setLargePreviewImageWithImageData:completionBlock:
- requestDefaultRepresentation
- setInternal:
- internal
- aspectRatioThumbnail
- dealloc
- description
- isValid
- isEditable
- _uuid
- defaultRepresentation
- thumbnail
- valueForProperty:
- originalAsset
- setExternalUsageIntent:
- isDeletable
@end
