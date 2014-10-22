@interface _UIReplicantView : UIView
{
	id _slotIdWrapper;
	id _screen;
	struct _snapshotSize;
	id _contentView;
}

+ initWithFrame:
+ dealloc
+ setFrame:
+ layoutSubviews
+ setBounds:
+ _copyResizableSnapshotViewFromRect:withCapInsets:
+ _appliedTransform
- initWithFrame:
- dealloc
- setFrame:
- layoutSubviews
- setBounds:
- _copyResizableSnapshotViewFromRect:withCapInsets:
- _appliedTransform
@end
