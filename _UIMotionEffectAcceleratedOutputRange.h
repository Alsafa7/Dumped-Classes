@interface _UIMotionEffectAcceleratedOutputRange : NSObject
{
	struct _referenceOffset;
	struct _referenceAcceleration;
	struct _acceleration;
}

+ initWithCoder:
+ encodeWithCoder:
+ init
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ reset
+ setAcceleration:fixingOutputForViewerOffset:
+ acceleratedOutputForViewerOffset:accelerationBoostFactor:
+ acceleration
- initWithCoder:
- encodeWithCoder:
- init
- isEqual:
- hash
- description
- copyWithZone:
- reset
- setAcceleration:fixingOutputForViewerOffset:
- acceleratedOutputForViewerOffset:accelerationBoostFactor:
- acceleration
@end
