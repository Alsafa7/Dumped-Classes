@interface _UIViewerRelativeDevicePose : NSObject
{
	id _acceleratedOutputRange;
	double _planarRotationAngle;
	struct _viewerOffset;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ _reset
+ viewerOffset
+ setViewerOffset:
+ _acceleratedOutputRange
+ _setAcceleration:fixingOutputForViewerOffset:
+ _acceleratedOutputForViewerOffset:accelerationBoostFactor:
+ planarRotationAngle
+ setPlanarRotationAngle:
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- _reset
- viewerOffset
- setViewerOffset:
- _acceleratedOutputRange
- _setAcceleration:fixingOutputForViewerOffset:
- _acceleratedOutputForViewerOffset:accelerationBoostFactor:
- planarRotationAngle
- setPlanarRotationAngle:
@end
