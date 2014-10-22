@interface CKEditableCollectionView : UICollectionView
{
	BOOL _editing;
	double _transcriptDrawerWidth;
}

+ isEditing
+ setEditing:animated:
+ setEditing:
+ dequeueReusableCellWithReuseIdentifier:forIndexPath:
+ initWithFrame:collectionViewLayout:
+ transcriptDrawerWidth
+ setTranscriptDrawerWidth:
- isEditing
- setEditing:animated:
- setEditing:
- dequeueReusableCellWithReuseIdentifier:forIndexPath:
- initWithFrame:collectionViewLayout:
- transcriptDrawerWidth
- setTranscriptDrawerWidth:
@end
