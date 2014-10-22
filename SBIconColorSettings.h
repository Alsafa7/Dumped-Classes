@interface SBIconColorSettings : _UISettings
{
	BOOL _blurryFolderIcons;
	BOOL _blurryCloseBoxes;
	BOOL _suppressJitter;
	BOOL _closeBoxesEverywhere;
	double _maxSaturationBoost;
	double _maxSaturation;
	double _maxBrightnessBoost;
	double _maxBrightness;
	double _colorAlpha;
	double _whiteAlpha;
}

+ closeBoxesEverywhere
+ suppressJitter
+ blurryCloseBoxes
+ maxSaturationBoost
+ maxSaturation
+ maxBrightnessBoost
+ maxBrightness
+ colorAlpha
+ whiteAlpha
+ blurryFolderIcons
+ setBlurryCloseBoxes:
+ setBlurryFolderIcons:
+ setMaxSaturationBoost:
+ setMaxSaturation:
+ setMaxBrightnessBoost:
+ setMaxBrightness:
+ setColorAlpha:
+ setWhiteAlpha:
+ setSuppressJitter:
+ setCloseBoxesEverywhere:
+ setDefaultValues
- closeBoxesEverywhere
- suppressJitter
- blurryCloseBoxes
- maxSaturationBoost
- maxSaturation
- maxBrightnessBoost
- maxBrightness
- colorAlpha
- whiteAlpha
- blurryFolderIcons
- setBlurryCloseBoxes:
- setBlurryFolderIcons:
- setMaxSaturationBoost:
- setMaxSaturation:
- setMaxBrightnessBoost:
- setMaxBrightness:
- setColorAlpha:
- setWhiteAlpha:
- setSuppressJitter:
- setCloseBoxesEverywhere:
- setDefaultValues
@end
