@interface UIActivity : NSObject
{
	id _activityCompletionHandler;
}

+ _thumbnailSize
+ _activityImage
+ _cleanup
+ _canPerformWithSuppliedActivityItems:
+ _beforeActivity
+ _setActivityCompletionHandler:
+ _embeddedActivityViewController
+ _willPresentAsFormSheet
+ _presentActivityOnViewController:animated:completion:
+ _dismissActivityFromViewController:animated:completion:
+ _setSubject:
+ _subjectForActivityItem:
+ _dataTypeIdentifierForActivityItem:
+ _thumbnailImageForActivityItem:
+ _attachmentNameForActivityItem:
+ dealloc
+ activityTitle
+ activityType
+ activityDidFinish:
+ canPerformWithActivityItems:
+ performActivity
+ activityImage
+ activityViewController
+ setActivityCompletionHandler:
+ prepareWithActivityItems:
+ activityCompletionHandler
- _thumbnailSize
- _activityImage
- _cleanup
- _canPerformWithSuppliedActivityItems:
- _beforeActivity
- _setActivityCompletionHandler:
- _embeddedActivityViewController
- _willPresentAsFormSheet
- _presentActivityOnViewController:animated:completion:
- _dismissActivityFromViewController:animated:completion:
- _setSubject:
- _subjectForActivityItem:
- _dataTypeIdentifierForActivityItem:
- _thumbnailImageForActivityItem:
- _attachmentNameForActivityItem:
- dealloc
- activityTitle
- activityType
- activityDidFinish:
- canPerformWithActivityItems:
- performActivity
- activityImage
- activityViewController
- setActivityCompletionHandler:
- prepareWithActivityItems:
- activityCompletionHandler
@end
