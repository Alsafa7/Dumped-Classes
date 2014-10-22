@interface UISocialActivity : UIActivity
{
	id _socialActivityType;
	id _socialComposeViewController;
	id _composedImage;
}

+ dealloc
+ _thumbnailSize
+ _activityImage
+ activityTitle
+ activityType
+ canPerformWithActivityItems:
+ _cleanup
+ activityViewController
+ prepareWithActivityItems:
+ initActivityType:
+ setSocialActivityType:
+ socialActivityType
+ _serviceType
+ setComposedImage:
+ _activityItemTypes
+ _blockingActivityItemTypes
+ _maxImageDataSize
+ setSocialComposeViewController:
+ socialComposeViewController
+ composedImage
- dealloc
- _thumbnailSize
- _activityImage
- activityTitle
- activityType
- canPerformWithActivityItems:
- _cleanup
- activityViewController
- prepareWithActivityItems:
- initActivityType:
- setSocialActivityType:
- socialActivityType
- _serviceType
- setComposedImage:
- _activityItemTypes
- _blockingActivityItemTypes
- _maxImageDataSize
- setSocialComposeViewController:
- socialComposeViewController
- composedImage
@end
