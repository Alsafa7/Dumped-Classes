@interface CUIRenditionSliceInformation : NSObject
{
	long long _renditionType;
	Array _boundaries;
	struct _destinationRect;
	struct _edgeInsets;
}

+ description
+ copyWithZone:
+ edgeInsets
+ destinationRect
+ positionOfSliceBoundary:
+ initWithSliceInformation:destinationRect:
+ renditionType
+ _topLeftCapSize
+ _bottomRightCapSize
+ initWithRenditionType:destinationRect:topLeftInset:bottomRightInset:
- description
- copyWithZone:
- edgeInsets
- destinationRect
- positionOfSliceBoundary:
- initWithSliceInformation:destinationRect:
- renditionType
- _topLeftCapSize
- _bottomRightCapSize
- initWithRenditionType:destinationRect:topLeftInset:bottomRightInset:
@end
