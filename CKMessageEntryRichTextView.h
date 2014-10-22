@interface CKMessageEntryRichTextView : CKMessageEntryTextView
{
	char _balloonColor;
	id _mediaObjects;
	id _composeImages;
	id _pasteboardValues;
}

+ dealloc
+ canPerformAction:withSender:
+ cut:
+ copy:
+ paste:
+ initWithFrame:textContainer:
+ setBalloonColor:
+ mediaObjects
+ setPasteboardValues:
+ compositionText
+ pasteboardValues
+ composeImageForTransferGUID:
+ previewDidChange:
+ setMediaObjects:
+ setComposeImages:
+ composeImages
+ updateComposeImages
+ balloonColor
+ textStorage:willProcessEditing:range:changeInLength:
+ setCompositionText:
- dealloc
- canPerformAction:withSender:
- cut:
- copy:
- paste:
- initWithFrame:textContainer:
- setBalloonColor:
- mediaObjects
- setPasteboardValues:
- compositionText
- pasteboardValues
- composeImageForTransferGUID:
- previewDidChange:
- setMediaObjects:
- setComposeImages:
- composeImages
- updateComposeImages
- balloonColor
- textStorage:willProcessEditing:range:changeInLength:
- setCompositionText:
@end
