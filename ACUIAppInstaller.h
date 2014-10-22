@interface ACUIAppInstaller : NSObject
{
	id _app;
	id _dateOfLastReachabilityCheck;
	BOOL _resultOfLastReachabilityCheck;
	id _dateOfLastInstallationCheck;
	BOOL _resultOfLastInstallationCheck;
	id _publisherURL;
	id _delegate;
}

+ isDownloadable
+ setDelegate:
+ delegate
+ start
+ initForAppWithDescription:
+ checkAvailabilityInStore:
+ publisherURL
+ setPublisherURL:
+ isInstalled
+ .cxx_destruct
- isDownloadable
- setDelegate:
- delegate
- start
- initForAppWithDescription:
- checkAvailabilityInStore:
- publisherURL
- setPublisherURL:
- isInstalled
- .cxx_destruct
@end
