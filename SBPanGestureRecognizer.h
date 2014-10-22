@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer
{
	double _arcCenter;
	double _arcSize;
	BOOL _recognizesHorizontalPanning;
	BOOL _recognizesVerticalPanning;
}

+ computeIncrementalGestureMotion:
+ updateForBeganOrMovedTouches:
+ initForHorizontalPanning
+ initForVerticalPanning
+ init
- computeIncrementalGestureMotion:
- updateForBeganOrMovedTouches:
- initForHorizontalPanning
- initForVerticalPanning
- init
@end
