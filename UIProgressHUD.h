@interface UIProgressHUD : UIView
{
	id _progressIndicator;
	id _progressMessage;
	id _doneView;
	id _parentWindow;
	struct _progressHUDFlags;
}

+ initWithWindow:
+ show:
+ initWithFrame:
+ dealloc
+ drawRect:
+ layoutSubviews
+ setText:
+ setFontSize:
+ hide
+ _progressIndicator
+ setShowsText:
+ showInView:
+ done
- initWithWindow:
- show:
- initWithFrame:
- dealloc
- drawRect:
- layoutSubviews
- setText:
- setFontSize:
- hide
- _progressIndicator
- setShowsText:
- showInView:
- done
@end
