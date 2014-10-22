@interface SBNewsstandIconListView : SBFolderIconListView
{
	double _iconVPaddingPortrait;
	double _topIconInsetPortrait;
	double _iconVPaddingLandscape;
	double _topIconInsetLandscape;
}

+ sideIconInset
+ topIconInset
+ baseIconViewClass
+ bottomIconInset
+ verticalIconPadding
+ _updateVisibleIconsFromRow:toRow:includeIcon:layoutIfNeeded:
+ initWithFrame:
+ dealloc
- sideIconInset
- topIconInset
- baseIconViewClass
- bottomIconInset
- verticalIconPadding
- _updateVisibleIconsFromRow:toRow:includeIcon:layoutIfNeeded:
- initWithFrame:
- dealloc
@end
