@interface SBSnippetBulletinInfo : SBBBBulletinInfo
{
	double _viewHeight;
	struct _textRect;
	struct _referenceSize;
	id _icon;
}

+ reusableViewClass
+ heightForReusableViewInTableView:
+ _isLayoutValidWithReferenceSize:
+ _representedBulletin
+ invalidateCachedLayoutData
+ populateReusableView:
+ icon
+ dealloc
+ identifier
+ setIcon:
- reusableViewClass
- heightForReusableViewInTableView:
- _isLayoutValidWithReferenceSize:
- _representedBulletin
- invalidateCachedLayoutData
- populateReusableView:
- icon
- dealloc
- identifier
- setIcon:
@end
