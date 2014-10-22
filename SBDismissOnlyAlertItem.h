@interface SBDismissOnlyAlertItem : SBAlertItem
{
	id _title;
	id _body;
	double _autoDismissInterval;
}

+ setAutoDismissInterval:
+ configure:requirePasscodeForActions:
+ dealloc
+ setTitle:
+ title
+ setBodyText:
+ bodyText
+ initWithTitle:body:
+ autoDismissInterval
+ performUnlockAction
- setAutoDismissInterval:
- configure:requirePasscodeForActions:
- dealloc
- setTitle:
- title
- setBodyText:
- bodyText
- initWithTitle:body:
- autoDismissInterval
- performUnlockAction
@end
