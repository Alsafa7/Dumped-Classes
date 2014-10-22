@interface SBThermalController : NSObject
{
	BOOL _sampling;
	double _samplingStartTime;
	id _samplingStartCPUTimesByApp;
	int _sunlightStateToken;
	int _warningAssertionToken;
	int _warningResponseToken;
	id _warningSuppressionAssertions;
	BOOL _warningSuppressionPreference;
	int _level;
	BOOL _inSunlight;
}

+ startListeningForThermalEvents
+ captureWarningSuppressionAssertionWithPort:reason:
+ respondToCurrentThermalCondition
+ showThermalAlertIfNecessary
+ _didReceiveWarningAction:
+ _beginThermalJetsamCPUSampling
+ _killThermallyActiveApplication
+ _calculateAppsCPUTimesWithCompletion:
+ _killThermallyActiveApplicationGivenCPUTimes:
+ thermalWarningAssertionExpired:
+ thermalWarningAlert:didTriggerAction:
+ isInSunlight
+ dealloc
+ init
+ level
- startListeningForThermalEvents
- captureWarningSuppressionAssertionWithPort:reason:
- respondToCurrentThermalCondition
- showThermalAlertIfNecessary
- _didReceiveWarningAction:
- _beginThermalJetsamCPUSampling
- _killThermallyActiveApplication
- _calculateAppsCPUTimesWithCompletion:
- _killThermallyActiveApplicationGivenCPUTimes:
- thermalWarningAssertionExpired:
- thermalWarningAlert:didTriggerAction:
- isInSunlight
- dealloc
- init
- level
@end
