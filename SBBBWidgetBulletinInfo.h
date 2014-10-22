@interface SBBBWidgetBulletinInfo : SBBBBulletinInfo
{
	id _identifier;
	struct _preferredViewSize;
	BOOL _visible;
	struct _widgetBulletinInfoFlags;
}

+ representedBulletin
+ setPreferredViewSize:
+ reusableViewClass
+ heightForReusableViewInTableView:
+ populateReusableView:
+ representedWidget
+ originalSectionIdentifier
+ dealloc
+ identifier
+ preferredViewSize
+ widgetIdentifier
- representedBulletin
- setPreferredViewSize:
- reusableViewClass
- heightForReusableViewInTableView:
- populateReusableView:
- representedWidget
- originalSectionIdentifier
- dealloc
- identifier
- preferredViewSize
- widgetIdentifier
@end
