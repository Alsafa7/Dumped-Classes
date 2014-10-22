@interface SBPrototypeController : NSObject
{
	id _rootSettings;
	id _settingsWindow;
	id _settingsController;
	id _testRecipeClassNames;
	id _activeTestRecipe;
	BOOL _showingSettings;
	BOOL _hasPreviousSettings;
}

+ isPrototypingEnabled
+ activeTestRecipe
+ showOrHide
+ handleVolumeIncrease
+ handleVolumeDecrease
+ _configureForDefaults
+ _hideSettings
+ _showSettings
+ _updatePreventingLockover
+ _changeActiveTestRecipeIfNecessary
+ _offscreenFrame
+ setActiveTestRecipe:
+ _tearDownSettingsWindow
+ isShowingSettingsUI
+ _hasPreviousSettings
+ _restorePreviousSettings
+ _testRecipeClassNames
+ dealloc
+ init
+ settings:changedValueForKey:
+ rootSettings
- isPrototypingEnabled
- activeTestRecipe
- showOrHide
- handleVolumeIncrease
- handleVolumeDecrease
- _configureForDefaults
- _hideSettings
- _showSettings
- _updatePreventingLockover
- _changeActiveTestRecipeIfNecessary
- _offscreenFrame
- setActiveTestRecipe:
- _tearDownSettingsWindow
- isShowingSettingsUI
- _hasPreviousSettings
- _restorePreviousSettings
- _testRecipeClassNames
- dealloc
- init
- settings:changedValueForKey:
- rootSettings
@end
