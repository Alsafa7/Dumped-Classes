@interface _UIActivityGroupActivityCell : UICollectionViewCell
{
	BOOL _darkStyleOnLegacyApp;
	id _activityImageView;
	id _activityLabel;
}

+ dealloc
+ layoutSubviews
+ setHighlighted:
+ prepareForReuse
+ setActivityImageView:
+ darkStyleOnLegacyApp
+ setActivityLabel:
+ reloadImage:
+ activityImageView
+ setActivity:withCustomTitle:
+ activityLabel
+ setDarkStyleOnLegacyApp:
- dealloc
- layoutSubviews
- setHighlighted:
- prepareForReuse
- setActivityImageView:
- darkStyleOnLegacyApp
- setActivityLabel:
- reloadImage:
- activityImageView
- setActivity:withCustomTitle:
- activityLabel
- setDarkStyleOnLegacyApp:
@end
