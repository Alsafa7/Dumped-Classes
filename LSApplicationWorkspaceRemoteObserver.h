@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver
{
	BOOL _observinglsd;
	id _observers;
	id _progressSubscriptionsQueue;
}

+ setObservinglsd:
+ isObservinglsd
+ currentObserverCount
+ addLocalObserver:
+ applicationInstallsDidCancel:
+ applicationInstallsDidPause:
+ applicationInstallsDidPrioritize:
+ applicationInstallsDidResume:
+ networkUsageChanged:
+ removeLocalObserver:
+ localObservers
+ applicationInstallsDidStart:
+ applicationInstallsDidUpdateIcon:
+ applicationInstallsDidChange:
+ applicationsDidInstall:
+ applicationsDidUninstall:
+ applicationInstallsArePrioritized:arePaused:
+ dealloc
+ init
- setObservinglsd:
- isObservinglsd
- currentObserverCount
- addLocalObserver:
- applicationInstallsDidCancel:
- applicationInstallsDidPause:
- applicationInstallsDidPrioritize:
- applicationInstallsDidResume:
- networkUsageChanged:
- removeLocalObserver:
- localObservers
- applicationInstallsDidStart:
- applicationInstallsDidUpdateIcon:
- applicationInstallsDidChange:
- applicationsDidInstall:
- applicationsDidUninstall:
- applicationInstallsArePrioritized:arePaused:
- dealloc
- init
@end
