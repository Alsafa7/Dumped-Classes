@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController
{
	id _airPlaySection;
	id _airDropSection;
	id _airPlayActionSheet;
	id _airPlayViewController;
	id _airPlayPopoverController;
	id _airDropDiscoveryController;
	BOOL _isVisible;
	BOOL _airPlayWasPreviouslyEnabled;
	id _resetTimer;
	BOOL _airPlayEnabled;
	BOOL _airDropEnabled;
}

@end
