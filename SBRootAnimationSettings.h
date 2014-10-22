@interface SBRootAnimationSettings : _UISettings
{
	id _reducedMotionSettings;
	id _unlockSettings;
	id _centerLaunchSettings;
	id _centerSuspendSettings;
	id _crossfadeLaunchSettings;
	id _crossfadeSuspendSettings;
	id _folderOpenSettings;
	id _folderCloseSettings;
}

+ unlockSettings
+ centerSuspendSettings
+ centerLaunchSettings
+ crossfadeLaunchSettings
+ crossfadeSuspendSettings
+ folderOpenSettings
+ folderCloseSettings
+ reducedMotionSettings
+ setReducedMotionSettings:
+ setUnlockSettings:
+ setCenterLaunchSettings:
+ setCenterSuspendSettings:
+ setCrossfadeLaunchSettings:
+ setCrossfadeSuspendSettings:
+ setFolderOpenSettings:
+ setFolderCloseSettings:
+ setDefaultValues
- unlockSettings
- centerSuspendSettings
- centerLaunchSettings
- crossfadeLaunchSettings
- crossfadeSuspendSettings
- folderOpenSettings
- folderCloseSettings
- reducedMotionSettings
- setReducedMotionSettings:
- setUnlockSettings:
- setCenterLaunchSettings:
- setCenterSuspendSettings:
- setCrossfadeLaunchSettings:
- setCrossfadeSuspendSettings:
- setFolderOpenSettings:
- setFolderCloseSettings:
- setDefaultValues
@end
