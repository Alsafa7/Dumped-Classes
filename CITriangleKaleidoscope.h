@interface CITriangleKaleidoscope : CIFilter
{
	id inputImage;
	id inputPoint;
	id inputSize;
	id inputRotation;
	id inputDecay;
	id _decayImage;
}

+ setDefaults
+ outputImage
+ inputImage
+ setInputImage:
+ inputPoint
+ setInputRotation:
+ setInputSize:
+ setInputDecay:
+ _geomKernel
+ _colorKernel
+ inputSize
+ inputRotation
+ inputDecay
+ dealloc
+ setInputPoint:
- setDefaults
- outputImage
- inputImage
- setInputImage:
- inputPoint
- setInputRotation:
- setInputSize:
- setInputDecay:
- _geomKernel
- _colorKernel
- inputSize
- inputRotation
- inputDecay
- dealloc
- setInputPoint:
@end
