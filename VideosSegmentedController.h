@interface VideosSegmentedController : NSObject
{
	id _cannonicalSegmentedControl;
	id _segmentedControls;
	BOOL _ignoreSelection;
	id _delegate;
	long long _selectedSegmentIndex;
}

+ newSegmentedControl
+ removeSegmentedControl:
+ setDelegate:
+ init
+ delegate
+ removeAllSegments
+ setSelectedSegmentIndex:
+ insertSegmentWithTitle:atIndex:animated:
+ numberOfSegments
+ selectedSegmentIndex
+ observeValueForKeyPath:ofObject:change:context:
+ .cxx_destruct
- newSegmentedControl
- removeSegmentedControl:
- setDelegate:
- init
- delegate
- removeAllSegments
- setSelectedSegmentIndex:
- insertSegmentWithTitle:atIndex:animated:
- numberOfSegments
- selectedSegmentIndex
- observeValueForKeyPath:ofObject:change:context:
- .cxx_destruct
@end
