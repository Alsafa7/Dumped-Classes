@interface UIKeyboardPreferencesController : NSObject
{

}

+ dealloc
+ init
+ boolForKey:
+ setValue:forKey:
+ valueForKey:
+ rivenSizeFactor:
+ saveInputModes:
+ setInputModeLastUsed:
+ spaceConfirmationEnabled
+ typologyEnabled
+ synchronizePreferences
+ releaseDontSynchronizePreferences
+ preferencesControllerChanged:
+ touchSynchronizePreferencesTimer
+ costlyCapture
- dealloc
- init
- boolForKey:
- setValue:forKey:
- valueForKey:
- rivenSizeFactor:
- saveInputModes:
- setInputModeLastUsed:
- spaceConfirmationEnabled
- typologyEnabled
- synchronizePreferences
- releaseDontSynchronizePreferences
- preferencesControllerChanged:
- touchSynchronizePreferencesTimer
- costlyCapture
@end
