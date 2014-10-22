@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings
{
	id _inputSettingsA;
	id _inputSettingsB;
	double _weighting;
	id _outputSettingsA;
	id _outputSettingsB;
}

+ dealloc
+ computeOutputSettingsUsingModel:
+ setInputSettingsA:
+ setInputSettingsB:
+ setOutputSettingsA:
+ setOutputSettingsB:
+ outputSettingsA
+ inputSettingsA
+ outputSettingsB
+ inputSettingsB
+ weighting
+ setWeighting:
- dealloc
- computeOutputSettingsUsingModel:
- setInputSettingsA:
- setInputSettingsB:
- setOutputSettingsA:
- setOutputSettingsB:
- outputSettingsA
- inputSettingsA
- outputSettingsB
- inputSettingsB
- weighting
- setWeighting:
@end
