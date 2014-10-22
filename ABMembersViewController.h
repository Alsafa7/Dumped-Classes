@interface ABMembersViewController : ABAbstractViewController
{
	id _membersController;
	int _insertionProperty;
	id _insertionValue;
	id _insertionLabel;
	int _rightButtonBehavior;
	int _leftButtonBehavior;
	BOOL _shouldHandleExternalChangeOnPersonViewControllers;
	id _accessDeniedView;
}

@end
