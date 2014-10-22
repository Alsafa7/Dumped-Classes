@interface MPMeCardGeocoder : NSObject
{
	pointer _addressBook;
	id _workQueue;
	id _addresses;
	id _networkPreferencesTimeoutTimer;
}

+ isActivelyUsing
+ _saveGeoCache
+ _doWork
+ _rebuildAddressArray
+ _unscheduleLongTermRebuild
+ _scheduleNextGeocode
+ _networkPreferencesLoaded
+ scheduleNextGeocode
+ _dateOfOldestAddress
+ _scheduleLongTermRebuild
+ setIsActivelyUsing:
+ currentValidLocations
+ _isNetworkAvailable
+ _schedulePerformGeocodesTaskWithStartWakeTime:dropDeadWakeTime:
+ _unschedulePerformGeocodesWakeTaskIfEarlierThan:
+ scheduleImmediateGeocode
+ dealloc
+ init
+ _addressBookChanged
+ addressBook
- isActivelyUsing
- _saveGeoCache
- _doWork
- _rebuildAddressArray
- _unscheduleLongTermRebuild
- _scheduleNextGeocode
- _networkPreferencesLoaded
- scheduleNextGeocode
- _dateOfOldestAddress
- _scheduleLongTermRebuild
- setIsActivelyUsing:
- currentValidLocations
- _isNetworkAvailable
- _schedulePerformGeocodesTaskWithStartWakeTime:dropDeadWakeTime:
- _unschedulePerformGeocodesWakeTaskIfEarlierThan:
- scheduleImmediateGeocode
- dealloc
- init
- _addressBookChanged
- addressBook
@end
