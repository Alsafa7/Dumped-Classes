@interface _UIContentUnavailableView : UIView
{
	usigned long long _style;
	id _title;
	id _backdrop;
	id _containerView;
	id _titleLabel;
	id _messageLabel;
	id _actionButton;
	id titleToMessageConstraint;
	id messageToButtonConstraint;
	id _fromSnapshot;
	id _toSnapshot;
	struct _fromSnapshotSize;
	id _message;
	id _buttonTitle;
	id _buttonAction;
}

+ initWithFrame:
+ dealloc
+ didMoveToWindow
+ setTitle:
+ title
+ message
+ updateConstraints
+ setMessage:
+ initWithFrame:title:style:
+ setButtonAction:
+ _updateViewHierarchy
+ _actionButtonPressed:
+ _buttonBackgroundImageForStyle:
+ buttonAction
+ windowWillRotateNotification:
+ windowWillAnimateRotateNotification:
+ windowDidRotateNotification:
+ setButtonTitle:
+ buttonTitle
- initWithFrame:
- dealloc
- didMoveToWindow
- setTitle:
- title
- message
- updateConstraints
- setMessage:
- initWithFrame:title:style:
- setButtonAction:
- _updateViewHierarchy
- _actionButtonPressed:
- _buttonBackgroundImageForStyle:
- buttonAction
- windowWillRotateNotification:
- windowWillAnimateRotateNotification:
- windowDidRotateNotification:
- setButtonTitle:
- buttonTitle
@end
