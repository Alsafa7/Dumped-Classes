@interface SBFParallaxSettings : _UISettings
{
	BOOL _slideEnabled;
	BOOL _tiltEnabled;
	BOOL _increaseEnabled;
	long long _slideDirectionX;
	long long _slideDirectionY;
	double _slidePixelsX;
	double _slidePixelsY;
	long long _tiltDirectionX;
	long long _tiltDirectionY;
	double _tiltDegreesX;
	double _tiltDegreesY;
	long long _distanceFromScreen;
	double _slideIncreaseX;
	double _slideIncreaseY;
}

+ setTiltEnabled:
+ setDefaultValues
+ setSlideEnabled:
+ setSlideDirectionX:
+ setSlideDirectionY:
+ setSlidePixelsX:
+ setSlidePixelsY:
+ setTiltDirectionX:
+ setTiltDirectionY:
+ setTiltDegreesX:
+ setTiltDegreesY:
+ setDistanceFromScreen:
+ setIncreaseEnabled:
+ setSlideIncreaseX:
+ setSlideIncreaseY:
+ slideEnabled
+ slideDirectionX
+ slideDirectionY
+ slidePixelsX
+ slidePixelsY
+ tiltEnabled
+ tiltDirectionX
+ tiltDirectionY
+ tiltDegreesX
+ tiltDegreesY
+ distanceFromScreen
+ increaseEnabled
+ slideIncreaseX
+ slideIncreaseY
- setTiltEnabled:
- setDefaultValues
- setSlideEnabled:
- setSlideDirectionX:
- setSlideDirectionY:
- setSlidePixelsX:
- setSlidePixelsY:
- setTiltDirectionX:
- setTiltDirectionY:
- setTiltDegreesX:
- setTiltDegreesY:
- setDistanceFromScreen:
- setIncreaseEnabled:
- setSlideIncreaseX:
- setSlideIncreaseY:
- slideEnabled
- slideDirectionX
- slideDirectionY
- slidePixelsX
- slidePixelsY
- tiltEnabled
- tiltDirectionX
- tiltDirectionY
- tiltDegreesX
- tiltDegreesY
- distanceFromScreen
- increaseEnabled
- slideIncreaseX
- slideIncreaseY
@end
