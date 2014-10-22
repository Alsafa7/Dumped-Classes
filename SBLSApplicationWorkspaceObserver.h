@interface SBLSApplicationWorkspaceObserver : LSApplicationWorkspaceObserver
{
	id _appWorkspace;
	id _applicationObservers;
	id _placeholderObservers;
	id _placeholderProxies;
}

+ addApplicationLifecycleObserver:
+ removeApplicationLifecycleObserver:
+ workspace
+ addPlaceholderLifecycleObserver:
+ placeholderProxies
+ removePlaceholderLifecycleObserver:
+ _addObserver:table:
+ _removeObserver:table:
+ setPlaceholderProxies:
+ applicationInstallsDidCancel:
+ applicationInstallsDidPause:
+ applicationInstallsDidPrioritize:
+ applicationInstallsDidResume:
+ networkUsageChanged:
+ applicationInstallsDidStart:
+ applicationInstallsDidUpdateIcon:
+ applicationInstallsDidChange:
+ applicationsDidInstall:
+ applicationsDidUninstall:
+ applicationInstallsArePrioritized:arePaused:
+ dealloc
+ init
- addApplicationLifecycleObserver:
- removeApplicationLifecycleObserver:
- workspace
- addPlaceholderLifecycleObserver:
- placeholderProxies
- removePlaceholderLifecycleObserver:
- _addObserver:table:
- _removeObserver:table:
- setPlaceholderProxies:
- applicationInstallsDidCancel:
- applicationInstallsDidPause:
- applicationInstallsDidPrioritize:
- applicationInstallsDidResume:
- networkUsageChanged:
- applicationInstallsDidStart:
- applicationInstallsDidUpdateIcon:
- applicationInstallsDidChange:
- applicationsDidInstall:
- applicationsDidUninstall:
- applicationInstallsArePrioritized:arePaused:
- dealloc
- init
@end
