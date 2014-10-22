@interface LARootSettingsController : LASettingsViewController
{
	pointer libhide;
	pointer libhideIsHidden;
	BOOL alive;
	id rootSettingsDelegate;
	BOOL showsPersistentSelection;
	id selectedIndexPath;
}

@end
