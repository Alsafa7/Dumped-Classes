@interface PBEffectsView : UIView
{
	id _nineUpLayers;
	id _effectsLabels;
	id _opacityToggleLayer;
	id _gridSelectedEffectLayer;
	id _fullScreenEffectLayer;
	id _context;
	id _filters;
	pointer _nineUpQueue;
	pointer _directQueue;
	pointer _smallPixelBufferPool;
	pointer _largePixelBufferPool;
	id _delegate;
	id _singleTapRecognizer;
	id _doubleTapRecognizer;
	id _pinchRecognizer;
	id _rotationRecognizer;
	id _panRecognizer;
	id _proxyLayer;
	struct _lastTapLocation;
	id _snapshotView;
	int _toggleAnimationCount;
	id _didRenderBlock;
	long long _currentMode;
	id _currentEffect;
	long long _orientation;
	bit[1] _forceRender9UpGrid;
	bit[1] _didSetQueueDimensions;
	bit[1] _hasShakeMotion;
	bit[1] _mirrorFilterRendering;
	BOOL _isAnimating;
}

+ initWithFrame:effectNamed:
+ setOrientation:duration:
+ toggleEffectsMode:
+ disableUpdate
+ resetAllEffects
+ createRenderedCVPixelBufferWithBuffer:
+ resetQueueDimensions
+ flipAppearance:
+ renderViewWithInputBuffer:
+ _rotationAngleForDeviceOrientation:
+ _setUpContextWithFilters
+ _setUpEffectLayers
+ _didTap:
+ _didDoubleTap:
+ _didPan:
+ _displayFullScreenEffect:
+ _createPixelBufferPools
+ _filters
+ _resetFilterDefaultsHonorDeviceOrientation:
+ _filterWithName:
+ _addEffectGestureRecognizers
+ _removeEffectGestureRecognizers
+ _displayFullScreenMode
+ _displayGridViewMode
+ _labelForEffectLayer:
+ _setCurrentMode:
+ _fullScreenEffectLayer
+ _indexOfEffectLayer:
+ _layerWithEffectName:
+ _setImageQueueDimensions:
+ updateEffectsForCameraToggle
+ enableUpdate
+ _tapEffectLayer:
+ _effectLayerAtLocation:
+ _setCurrentEffect:
+ resetCurrentEffect
+ _rotateFiltersUsingOrientation:duration:
+ _currentEffect
+ hasShakeMotion
+ currentEffect
+ initWithFrame:
+ dealloc
+ setDelegate:
+ delegate
+ orientation
+ isAnimating
+ setAnimating:
+ mode
+ setOrientation:
+ _didRotate:
+ setMirrorFilterRendering:
+ mirrorFilterRendering
+ currentFilter
- initWithFrame:effectNamed:
- setOrientation:duration:
- toggleEffectsMode:
- disableUpdate
- resetAllEffects
- createRenderedCVPixelBufferWithBuffer:
- resetQueueDimensions
- flipAppearance:
- renderViewWithInputBuffer:
- _rotationAngleForDeviceOrientation:
- _setUpContextWithFilters
- _setUpEffectLayers
- _didTap:
- _didDoubleTap:
- _didPan:
- _displayFullScreenEffect:
- _createPixelBufferPools
- _filters
- _resetFilterDefaultsHonorDeviceOrientation:
- _filterWithName:
- _addEffectGestureRecognizers
- _removeEffectGestureRecognizers
- _displayFullScreenMode
- _displayGridViewMode
- _labelForEffectLayer:
- _setCurrentMode:
- _fullScreenEffectLayer
- _indexOfEffectLayer:
- _layerWithEffectName:
- _setImageQueueDimensions:
- updateEffectsForCameraToggle
- enableUpdate
- _tapEffectLayer:
- _effectLayerAtLocation:
- _setCurrentEffect:
- resetCurrentEffect
- _rotateFiltersUsingOrientation:duration:
- _currentEffect
- hasShakeMotion
- currentEffect
- initWithFrame:
- dealloc
- setDelegate:
- delegate
- orientation
- isAnimating
- setAnimating:
- mode
- setOrientation:
- _didRotate:
- setMirrorFilterRendering:
- mirrorFilterRendering
- currentFilter
@end
