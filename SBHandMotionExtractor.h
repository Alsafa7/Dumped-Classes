@interface SBHandMotionExtractor : NSObject
{
	struct _pixelDeltas;
	struct _smoothedDeltas;
	struct _allPixelDeltas;
	double _averageTranslation;
	double _farthestFingerSeparation;
	struct _movementVelocityInPointsPerSecond;
}

+ movementVelocityInPointsPerSecond
+ extractHandMotionForActiveTouches:count:centroid:
+ pixelDeltas
+ allPixelDeltas
+ averageVelocities
+ averageTranslation
+ farthestFingerSeparation
+ clear
- movementVelocityInPointsPerSecond
- extractHandMotionForActiveTouches:count:centroid:
- pixelDeltas
- allPixelDeltas
- averageVelocities
- averageTranslation
- farthestFingerSeparation
- clear
@end
