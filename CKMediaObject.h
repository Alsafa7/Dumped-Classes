@interface CKMediaObject : NSObject
{
	id _transfer;
}

+ icon
+ title
+ subtitle
+ balloonViewClass
+ shouldShowViewer
+ shouldBeQuickLooked
+ generateThumbnailFillToSize:
+ isPreviewable
+ bbSize
+ generateThumbnail
+ previewForOrientation:
+ fileSizeString
+ downloadProgressImage
+ downloadProgressString
+ previewDispatchCache
+ generatePreviewFromThumbnail:forOrientation:
+ previewDispatchCache:shouldReplaceCachedPreview:withPreview:
+ bbPreviewFillToSize:
+ savePreview:toURL:forOrientation:
+ previewBalloonViewClass
+ shouldShowDisclosure
+ savedPreviewFromURL:forOrientation:
+ _sampleImageEdges:usingRect:forMostlyWhitePixels:otherPixels:
+ PNGDataFromImage:
+ fileManager
+ dealloc
+ description
+ data
+ mimeType
+ previewItemURL
+ fileURL
+ transfer
+ transferGUID
+ pasteboardItem
+ UTIType
+ setTransfer:
+ transcoderUserInfo
+ initWithTransfer:
+ filename
+ mediaType
- icon
- title
- subtitle
- balloonViewClass
- shouldShowViewer
- shouldBeQuickLooked
- generateThumbnailFillToSize:
- isPreviewable
- bbSize
- generateThumbnail
- previewForOrientation:
- fileSizeString
- downloadProgressImage
- downloadProgressString
- previewDispatchCache
- generatePreviewFromThumbnail:forOrientation:
- previewDispatchCache:shouldReplaceCachedPreview:withPreview:
- bbPreviewFillToSize:
- savePreview:toURL:forOrientation:
- previewBalloonViewClass
- shouldShowDisclosure
- savedPreviewFromURL:forOrientation:
- _sampleImageEdges:usingRect:forMostlyWhitePixels:otherPixels:
- PNGDataFromImage:
- fileManager
- dealloc
- description
- data
- mimeType
- previewItemURL
- fileURL
- transfer
- transferGUID
- pasteboardItem
- UTIType
- setTransfer:
- transcoderUserInfo
- initWithTransfer:
- filename
- mediaType
@end
