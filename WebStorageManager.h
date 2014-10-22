@interface WebStorageManager : NSObject
{

}

+ init
+ diskUsageForOrigin:
+ origins
+ deleteOrigin:
+ deleteAllOrigins
+ syncLocalStorage
+ syncFileSystemAndTrackerDatabase
- init
- diskUsageForOrigin:
- origins
- deleteOrigin:
- deleteAllOrigins
- syncLocalStorage
- syncFileSystemAndTrackerDatabase
@end
