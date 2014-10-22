@interface UIRotationGestureRecognizer : UIGestureRecognizer
{
	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	long long _currentRotationCount;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	struct _anchorPoint;
	id _transformAnalyzer;
	Array _touches;
	float _preRecognitionWeight;
	float _postRecognitionWeight;
}

+ dealloc
+ initWithCoder:
+ initWithTarget:action:
+ touchesCancelled:withEvent:
+ touchesBegan:withEvent:
+ touchesMoved:withEvent:
+ touchesEnded:withEvent:
+ anchorPoint
+ velocity
+ setRotation:
+ rotation
+ _resetGestureRecognizer
+ _updateTransformAnalyzerWeights
+ _setPreRecognitionWeight:
+ _preRecognitionWeight
+ _setPostRecognitionWeight:
+ _postRecognitionWeight
- dealloc
- initWithCoder:
- initWithTarget:action:
- touchesCancelled:withEvent:
- touchesBegan:withEvent:
- touchesMoved:withEvent:
- touchesEnded:withEvent:
- anchorPoint
- velocity
- setRotation:
- rotation
- _resetGestureRecognizer
- _updateTransformAnalyzerWeights
- _setPreRecognitionWeight:
- _preRecognitionWeight
- _setPostRecognitionWeight:
- _postRecognitionWeight
@end
