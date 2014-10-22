@interface AlarmScheduleCollectionView : UICollectionView
{
	id _gridView;
}

+ setShowingNoAlarms:
+ frontmostVisibleCellWithAlarmBodyContainingPoint:
+ isShowingNoAlarms
+ updateGridLayout
+ dealloc
+ layoutSubviews
+ setContentOffset:
+ setContentSize:
+ initWithFrame:collectionViewLayout:
+ collectionViewLayout
+ gridView
- setShowingNoAlarms:
- frontmostVisibleCellWithAlarmBodyContainingPoint:
- isShowingNoAlarms
- updateGridLayout
- dealloc
- layoutSubviews
- setContentOffset:
- setContentSize:
- initWithFrame:collectionViewLayout:
- collectionViewLayout
- gridView
@end
