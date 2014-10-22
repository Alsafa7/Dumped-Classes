@interface _UIWebViewportHandler : NSObject
{
	BOOL _initialConfigurationHasBeenSentToDelegate;
	struct _defaultConfiguration;
	struct _configuration;
	unsigned int _webkitDefinedConfigurationFlags;
	struct _availableViewSize;
	BOOL _classicViewportMode;
	id _delegate;
	struct _documentBounds;
}

+ setDelegate:
+ delegate
+ integralScaleForScale:keepingPointFixed:
+ minimumScaleForViewSize:
+ initialScale
+ maximumScale
+ minimumScale
+ allowsUserScaling
+ availableViewSize
+ clearWebKitViewportConfigurationFlags
+ resetViewportConfiguration:
+ rawViewConfiguration
+ webkitDefinedConfigurationFlags
+ update:
+ setDocumentBounds:
+ viewportWidth
+ viewportHeight
+ documentBounds
+ applyWebKitViewportArgumentsSize:initialScale:minimumScale:maximumScale:allowsUserScaling:
+ isClassicViewportMode
+ overrideViewportConfiguration:
+ setAvailableViewSize:
+ integralInitialScale
+ .cxx_construct
- setDelegate:
- delegate
- integralScaleForScale:keepingPointFixed:
- minimumScaleForViewSize:
- initialScale
- maximumScale
- minimumScale
- allowsUserScaling
- availableViewSize
- clearWebKitViewportConfigurationFlags
- resetViewportConfiguration:
- rawViewConfiguration
- webkitDefinedConfigurationFlags
- update:
- setDocumentBounds:
- viewportWidth
- viewportHeight
- documentBounds
- applyWebKitViewportArgumentsSize:initialScale:minimumScale:maximumScale:allowsUserScaling:
- isClassicViewportMode
- overrideViewportConfiguration:
- setAvailableViewSize:
- integralInitialScale
- .cxx_construct
@end
