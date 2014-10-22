@interface CLLocationManagerInternal : NSObject
{
	pointer fClient;
	id fDelegate;
	double fDistanceFilter;
	double fDesiredAccuracy;
	BOOL fUpdatingLocation;
	struct fLocation;
	id fLocationEventType;
	BOOL fCapabilitiesValid;
	struct fCapabilities;
	BOOL fUpdatingHeading;
	double fHeadingFilter;
	int fHeadingOrientation;
	BOOL fPersistentMonitoringEnabled;
	BOOL fAllowsLocationPrompts;
	BOOL fPreviousAuthorizationStatusValid;
	int fPreviousAuthorizationStatus;
	long long fActivityType;
	int fPausesLocationUpdatesAutomatically;
	BOOL fPaused;
	BOOL fAllowsMapCorrection;
	BOOL fBatchingLocation;
	id fRangedRegions;
}

+ initWithInfo:bundleIdentifier:bundle:
+ setPausesLocationUpdatesAutomatically:
+ PausesLocationUpdatesAutomatically
+ stopUpdatingLocationAutoPaused
+ rangedRegions
+ dealloc
- initWithInfo:bundleIdentifier:bundle:
- setPausesLocationUpdatesAutomatically:
- PausesLocationUpdatesAutomatically
- stopUpdatingLocationAutoPaused
- rangedRegions
- dealloc
@end
