@interface _UITiltMotionEffect : UIMotionEffect
{
	double _maximumHorizontalTiltAngle;
	double _maximumVerticalTiltAngle;
	double _rotatingSphereRadius;
}

+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ keyPathsAndRelativeValuesForViewerOffset:
+ setRotatingSphereRadius:
+ maximumHorizontalTiltAngle
+ setMaximumHorizontalTiltAngle:
+ maximumVerticalTiltAngle
+ setMaximumVerticalTiltAngle:
+ rotatingSphereRadius
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- keyPathsAndRelativeValuesForViewerOffset:
- setRotatingSphereRadius:
- maximumHorizontalTiltAngle
- setMaximumHorizontalTiltAngle:
- maximumVerticalTiltAngle
- setMaximumVerticalTiltAngle:
- rotatingSphereRadius
@end
