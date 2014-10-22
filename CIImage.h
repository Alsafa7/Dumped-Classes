@interface CIImage : NSObject
{
	pointer _priv;
}

+ initWithImage:
+ initWithImage:options:
+ _autoRedEyeFilterWithFeatures:imageProperties:context:options:
+ _scaleImageToMaxDimension:
+ autoAdjustmentFiltersWithOptions:
+ autoAdjustmentFiltersWithImageProperties:options:
+ _dictForFeature:scale:imageHeight:
+ autoAdjustmentFilters
+ autoRedEyeFilterWithFeatures:imageProperties:options:
+ autoRedEyeFilterWithFeatures:options:
+ _initWithInternalRepresentation:
+ _internalRepresentation
+ imageByApplyingTransform:
+ initWithIOSurface:options:
+ _initNaiveWithCGImage:options:
+ initWithBitmapData:bytesPerRow:size:format:options:
+ initWithBitmapData:bytesPerRow:size:format:colorSpace:
+ _initWithBitmapData:bytesPerRow:size:format:options:
+ initWithTexture:size:flipped:colorSpace:
+ initWithTexture:size:options:
+ initWithCVPixelBuffer:options:
+ initWithColorR:G:B:A:
+ imageTransformForOrientation:
+ initWithCGImageSource:index:options:
+ initWithContentsOfURL:options:
+ initWithContentsOfFile:options:
+ initWithCVPixelBuffer:
+ imageByCroppingToRect:
+ _imageByPremultiplying
+ _imageByUnpremultiplying
+ _imageByApplyingGamma:
+ _imageByApplyingBlur:
+ filteredImage:keysAndValues:
+ regionOfInterestForImage:inRect:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ initWithContentsOfFile:
+ initWithData:
+ initWithCGImage:
+ extent
+ initWithIOSurface:
+ initWithCGImage:options:
+ initWithColor:
+ initWithData:options:
+ properties
+ initWithContentsOfURL:
+ imageByApplyingOrientation:
- initWithImage:
- initWithImage:options:
- _autoRedEyeFilterWithFeatures:imageProperties:context:options:
- _scaleImageToMaxDimension:
- autoAdjustmentFiltersWithOptions:
- autoAdjustmentFiltersWithImageProperties:options:
- _dictForFeature:scale:imageHeight:
- autoAdjustmentFilters
- autoRedEyeFilterWithFeatures:imageProperties:options:
- autoRedEyeFilterWithFeatures:options:
- _initWithInternalRepresentation:
- _internalRepresentation
- imageByApplyingTransform:
- initWithIOSurface:options:
- _initNaiveWithCGImage:options:
- initWithBitmapData:bytesPerRow:size:format:options:
- initWithBitmapData:bytesPerRow:size:format:colorSpace:
- _initWithBitmapData:bytesPerRow:size:format:options:
- initWithTexture:size:flipped:colorSpace:
- initWithTexture:size:options:
- initWithCVPixelBuffer:options:
- initWithColorR:G:B:A:
- imageTransformForOrientation:
- initWithCGImageSource:index:options:
- initWithContentsOfURL:options:
- initWithContentsOfFile:options:
- initWithCVPixelBuffer:
- imageByCroppingToRect:
- _imageByPremultiplying
- _imageByUnpremultiplying
- _imageByApplyingGamma:
- _imageByApplyingBlur:
- filteredImage:keysAndValues:
- regionOfInterestForImage:inRect:
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- initWithContentsOfFile:
- initWithData:
- initWithCGImage:
- extent
- initWithIOSurface:
- initWithCGImage:options:
- initWithColor:
- initWithData:options:
- properties
- initWithContentsOfURL:
- imageByApplyingOrientation:
@end
