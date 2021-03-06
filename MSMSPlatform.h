@interface MSMSPlatform : NSObject
{
	BOOL _isPerfLoggingEnabled;
	id _pushToken;
}

+ setPushToken:
+ pushToken
+ init
+ publisherPluginClass
+ subscriberPluginClass
+ sharingPluginClass
+ deletePluginClass
+ fullNameFromFirstName:lastName:
+ baseURLForPersonID:
+ policyMayUpload
+ didDetectUnrecoverableCondition
+ policyMayDownload
+ shouldLogAtLevel:
+ pathMediaStreamDir
+ socketOptions
+ shouldEnableNewFeatures
+ theDaemon
+ authTokenForPersonID:
+ appBundleInfoString
+ logFacility:level:format:args:
+ logFile:func:line:facility:level:format:args:
+ isPerformanceLoggingEnabled
+ hardwareString
+ OSString
+ UDID
+ pushTokenForPersonID:
+ _accountForPersonID:
+ _rereadDefaults
+ _facilityStringForFacility:
+ _mayPerformFileTransfer
+ OSVersion
+ personIDUsesProductionPushEnvironment:
+ isPerfLoggingEnabled
+ setIsPerfLoggingEnabled:
+ .cxx_destruct
- setPushToken:
- pushToken
- init
- publisherPluginClass
- subscriberPluginClass
- sharingPluginClass
- deletePluginClass
- fullNameFromFirstName:lastName:
- baseURLForPersonID:
- policyMayUpload
- didDetectUnrecoverableCondition
- policyMayDownload
- shouldLogAtLevel:
- pathMediaStreamDir
- socketOptions
- shouldEnableNewFeatures
- theDaemon
- authTokenForPersonID:
- appBundleInfoString
- logFacility:level:format:args:
- logFile:func:line:facility:level:format:args:
- isPerformanceLoggingEnabled
- hardwareString
- OSString
- UDID
- pushTokenForPersonID:
- _accountForPersonID:
- _rereadDefaults
- _facilityStringForFacility:
- _mayPerformFileTransfer
- OSVersion
- personIDUsesProductionPushEnvironment:
- isPerfLoggingEnabled
- setIsPerfLoggingEnabled:
- .cxx_destruct
@end
