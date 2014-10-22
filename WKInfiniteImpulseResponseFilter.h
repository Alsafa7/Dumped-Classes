@interface WKInfiniteImpulseResponseFilter : NSObject
{
	usigned long long _count;
	pointer _ffC;
	pointer _fbC;
	pointer _inputHistory;
	pointer _outputHistory;
	double _zeroGradientThreshold;
}

+ outputGradient
+ zeroGradient
+ resetToValue:
+ filterWithInput:
+ setZeroGradientThreshold:
+ zeroGradientThreshold
+ initWithCount:feedforwardCoefficients:feedbackCoefficients:
+ setLowpassInertiaFilterCoefficient:
+ output
+ dealloc
- outputGradient
- zeroGradient
- resetToValue:
- filterWithInput:
- setZeroGradientThreshold:
- zeroGradientThreshold
- initWithCount:feedforwardCoefficients:feedbackCoefficients:
- setLowpassInertiaFilterCoefficient:
- output
- dealloc
@end
