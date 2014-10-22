@interface SSMetricsConfiguration : NSObject
{
	id _blacklistedEvents;
	id _childConfiguration;
	id _config;
	id _eventFieldsUnion;
	id _fields;
	BOOL _disabled;
	BOOL _sendDisabled;
}

+ dealloc
+ isDisabled
+ valueForConfigurationKey:
+ pingURLs
+ initWithStorePlatformData:
+ initWithGlobalConfiguration:
+ isEventTypeBlacklisted:
+ compoundStringWithElements:
+ reportingFrequency
+ tokenStringWithElements:
+ _configBooleanForKey:defaultValue:
+ childConfiguration
+ blacklistedEventFields
+ eventFields
+ fieldsMap
+ isSendDisabled
+ reportingURLString
+ setChildConfiguration:
- dealloc
- isDisabled
- valueForConfigurationKey:
- pingURLs
- initWithStorePlatformData:
- initWithGlobalConfiguration:
- isEventTypeBlacklisted:
- compoundStringWithElements:
- reportingFrequency
- tokenStringWithElements:
- _configBooleanForKey:defaultValue:
- childConfiguration
- blacklistedEventFields
- eventFields
- fieldsMap
- isSendDisabled
- reportingURLString
- setChildConfiguration:
@end
