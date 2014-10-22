@interface PLLocationController : NSObject
{
	id _locationManager;
	id _locationPendingAssets;
	id _exifDictionary;
	id _locationStr;
	BOOL _isEnabled;
	BOOL _isUpdating;
	BOOL _isHeadingEnabled;
}

+ dealloc
+ init
+ setEnabled:
+ location
+ _applicationStateChanged:
+ _assetContainerChanged:
+ _updateLocationRunState
+ _stopUpdating
+ _startUpdating
+ locationString
+ locationDictionaryForImageWithDeviceOrientation:rearFacingCamera:
+ _addLocationToAsset:
+ _updatePendingAssets
+ locationManager:didUpdateLocations:
+ setHeadingEnabled:
+ addLocationToMediaWithAssetURLWhenAvailable:deviceOrientation:cameraWasRearFacing:
- dealloc
- init
- setEnabled:
- location
- _applicationStateChanged:
- _assetContainerChanged:
- _updateLocationRunState
- _stopUpdating
- _startUpdating
- locationString
- locationDictionaryForImageWithDeviceOrientation:rearFacingCamera:
- _addLocationToAsset:
- _updatePendingAssets
- locationManager:didUpdateLocations:
- setHeadingEnabled:
- addLocationToMediaWithAssetURLWhenAvailable:deviceOrientation:cameraWasRearFacing:
@end
