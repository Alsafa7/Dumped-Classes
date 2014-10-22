@interface UIInterpolatingMotionEffect : UIMotionEffect
{
	double _horizontalAccelerationBoostFactor;
	double _verticalAccelerationBoostFactor;
	id _keyPath;
	long long _type;
	id _minimumRelativeValue;
	id _maximumRelativeValue;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ type
+ copyWithZone:
+ keyPath
+ keyPathsAndRelativeValuesForViewerOffset:
+ initWithKeyPath:type:
+ setMinimumRelativeValue:
+ setMaximumRelativeValue:
+ _setHorizontalAccelerationBoostFactor:
+ _horizontalAccelerationBoostFactor
+ _setVerticalAccelerationBoostFactor:
+ _verticalAccelerationBoostFactor
+ _keyPathsAndRelativeValuesForPose:
+ _setKeyPath:
+ _setType:
+ minimumRelativeValue
+ maximumRelativeValue
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- type
- copyWithZone:
- keyPath
- keyPathsAndRelativeValuesForViewerOffset:
- initWithKeyPath:type:
- setMinimumRelativeValue:
- setMaximumRelativeValue:
- _setHorizontalAccelerationBoostFactor:
- _horizontalAccelerationBoostFactor
- _setVerticalAccelerationBoostFactor:
- _verticalAccelerationBoostFactor
- _keyPathsAndRelativeValuesForPose:
- _setKeyPath:
- _setType:
- minimumRelativeValue
- maximumRelativeValue
@end
