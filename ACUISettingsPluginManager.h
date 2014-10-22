@interface ACUISettingsPluginManager : NSObject
{
	id _parentViewController;
	id _pluginCache;
}

+ _settingsPluginFromBundleWithName:
+ _loadSettingsPluginFromBundleWithName:
+ parentViewControllerWillDisappear
+ mailSettingsPlugin
+ calendarSettingsPlugin
+ contactsSettingsPlugin
+ initWithParentViewController:
+ .cxx_destruct
- _settingsPluginFromBundleWithName:
- _loadSettingsPluginFromBundleWithName:
- parentViewControllerWillDisappear
- mailSettingsPlugin
- calendarSettingsPlugin
- contactsSettingsPlugin
- initWithParentViewController:
- .cxx_destruct
@end
