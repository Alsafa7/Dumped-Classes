@interface MCUIBundleController : PSBundleController
{
	id _validProvisioningProfiles;
	id _configProfiles;
	id _parentController;
	id _specifier;
}

+ specifier
+ setSpecifier:
+ unload
+ dealloc
+ load
+ _reloadConfigProfilesInBackground
+ _configurationProfilesChanged:
+ _reloadAllProfilesInBackground
+ _profileInfoForSpecifier:
+ _configProfiles
+ _validProvisioningProfiles
+ _specifier
+ _controllerClassForCurrentProfilesAndUpdatedUserInfo:
+ _profileCount
+ _updateSpecifierProfileInfo
+ _updateSpecifierControllerClass
+ _setConfigProfiles:
+ _updateUIWithNewProfileList
+ _setValidProvisioningProfiles:
+ _reloadProvisioningProfilesInBackground
+ parentController
+ setParentController:
+ initWithParentListController:
+ specifiersWithSpecifier:
+ .cxx_destruct
- specifier
- setSpecifier:
- unload
- dealloc
- load
- _reloadConfigProfilesInBackground
- _configurationProfilesChanged:
- _reloadAllProfilesInBackground
- _profileInfoForSpecifier:
- _configProfiles
- _validProvisioningProfiles
- _specifier
- _controllerClassForCurrentProfilesAndUpdatedUserInfo:
- _profileCount
- _updateSpecifierProfileInfo
- _updateSpecifierControllerClass
- _setConfigProfiles:
- _updateUIWithNewProfileList
- _setValidProvisioningProfiles:
- _reloadProvisioningProfilesInBackground
- parentController
- setParentController:
- initWithParentListController:
- specifiersWithSpecifier:
- .cxx_destruct
@end
