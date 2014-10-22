@interface _UIBackdropColorSettings : NSObject
{
	double _averageHue;
	double _averageSaturation;
	double _averageBrightness;
	double _contrast;
	id _parentSettings;
	double _previousAverageHue;
	double _previousAverageSaturation;
	double _previousAverageBrightness;
	double _previousContrast;
}

+ setValuesFromModel:
+ setAverageHue:
+ setAverageSaturation:
+ setAverageBrightness:
+ setContrast:
+ averageSaturation
+ averageBrightness
+ color
+ setDefaultValues
+ contrast
+ setParentSettings:
+ averageHue
+ setPreviousAverageHue:
+ setPreviousAverageSaturation:
+ setPreviousAverageBrightness:
+ setPreviousContrast:
+ parentSettings
+ previousAverageHue
+ previousAverageSaturation
+ previousAverageBrightness
+ previousContrast
+ applyCABackdropLayerStatistics:
- setValuesFromModel:
- setAverageHue:
- setAverageSaturation:
- setAverageBrightness:
- setContrast:
- averageSaturation
- averageBrightness
- color
- setDefaultValues
- contrast
- setParentSettings:
- averageHue
- setPreviousAverageHue:
- setPreviousAverageSaturation:
- setPreviousAverageBrightness:
- setPreviousContrast:
- parentSettings
- previousAverageHue
- previousAverageSaturation
- previousAverageBrightness
- previousContrast
- applyCABackdropLayerStatistics:
@end
