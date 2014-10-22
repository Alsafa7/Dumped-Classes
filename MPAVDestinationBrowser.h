@interface MPAVDestinationBrowser : NSObject
{
	BOOL _scansForDestinationsWhenEnteringForeground;
	BOOL _isScanning;
}

+ _beginScanningForDestinationsNotification:
+ _endScanningForDestinationsNotification:
+ setScansForDestinationsWhenEnteringForeground:
+ endScanningForDestinations
+ beginScanningForDestinations
+ scansForDestinationsWhenEnteringForeground
+ dealloc
+ init
- _beginScanningForDestinationsNotification:
- _endScanningForDestinationsNotification:
- setScansForDestinationsWhenEnteringForeground:
- endScanningForDestinations
- beginScanningForDestinations
- scansForDestinationsWhenEnteringForeground
- dealloc
- init
@end
