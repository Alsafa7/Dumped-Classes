@interface CLDeviceMotionProperties : NSObject
{
	int fMode;
	BOOL fWantsPowerConservativeDeviceMotion;
}

+ initWithMode:andPowerConservation:
+ wantsPowerConservativeDeviceMotion
+ description
+ setMode:
+ mode
- initWithMode:andPowerConservation:
- wantsPowerConservativeDeviceMotion
- description
- setMode:
- mode
@end
