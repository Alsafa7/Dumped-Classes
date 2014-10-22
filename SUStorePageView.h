@interface SUStorePageView : UIView
{
	id _backdropView;
	id _contentView;
	id _headerView;
	id _headerScrollView;
	id _previewOverlayView;
	struct _contentViewInsets;
}

+ dealloc
+ layoutSubviews
+ contentView
+ setContentView:
+ headerView
+ setHeaderView:
+ setBackdropView:
+ backdropView
+ contentViewInsets
+ setPreviewOverlayView:
+ previewOverlayView
+ setContentViewInsets:
- dealloc
- layoutSubviews
- contentView
- setContentView:
- headerView
- setHeaderView:
- setBackdropView:
- backdropView
- contentViewInsets
- setPreviewOverlayView:
- previewOverlayView
- setContentViewInsets:
@end
