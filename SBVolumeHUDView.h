@interface SBVolumeHUDView : SBHUDView
{
	int _mode;
	BOOL _headphonesPresent;
	float _euVolumeLimit;
}

+ didMoveToWindow
+ _updateImage
+ _blockColorForValue:
+ _updateBlockView:value:blockSize:point:
+ setHeadphonesPresent:
+ setEUVolumeLimit:
+ headphonesPresent
+ EUVolumeLimit
+ init
+ setProgress:
+ setMode:
+ mode
+ _updateLabels
- didMoveToWindow
- _updateImage
- _blockColorForValue:
- _updateBlockView:value:blockSize:point:
- setHeadphonesPresent:
- setEUVolumeLimit:
- headphonesPresent
- EUVolumeLimit
- init
- setProgress:
- setMode:
- mode
- _updateLabels
@end
