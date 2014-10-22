@interface CKMessageEntryView : UIView
{
	id _dimmingView;
	int _animationState;
	BOOL _shouldShowSubject;
	BOOL _shouldShowPhotoButton;
	BOOL _shouldShowCharacterCount;
	char _sendButtonColor;
	BOOL _dimmed;
	BOOL _characterCountHidden;
	id _delegate;
	id _contentView;
	id _photoButton;
	id _sendButton;
	id _characterCountLabel;
	id _coverView;
	id _backdropView;
	id _knockoutCoverView;
	struct _photoButtonSize;
	struct _sendButtonSize;
	struct _characterCountSize;
	struct _sendTextAlignmentInsets;
}

+ send:
+ dealloc
+ setDelegate:
+ hitTest:withEvent:
+ setFrame:
+ layoutSubviews
+ sizeThatFits:
+ delegate
+ contentView
+ setContentView:
+ animationState
+ _accessoryViewFadeDuration
+ setAnimationState:
+ setBackdropView:
+ backdropView
+ photoButton
+ shouldShowPhotoButton
+ photoButtonSize
+ sendButton
+ sendTextAlignmentInsets
+ sendButtonSize
+ characterCountLabel
+ shouldShowCharacterCount
+ characterCountSize
+ coverView
+ contentTextAlignmentInsets
+ isCharacterCountHidden
+ placeholderHeight
+ setShouldShowSubject:
+ setShouldShowPhotoButton:
+ setShouldShowCharacterCount:
+ setSendButton:
+ setSendButtonSize:
+ setSendTextAlignmentInsets:
+ setPhotoButton:
+ setPhotoButtonSize:
+ setCharacterCountLabel:
+ setCharacterCountSize:
+ setCoverView:
+ setComposition:
+ knockoutCoverView
+ messageEntryContentViewDidChange:
+ messageEntryContentViewShouldBeginEditing:
+ messageEntryContentViewDidBeginEditing:
+ messageEntryContentView:shouldInsertMediaObjects:
+ initWithFrame:shouldShowSubject:shouldShowPhotoButton:shouldShowCharacterCount:
+ setSendButtonColor:
+ setCharacterCountHidden:
+ animateKnockedOutTextField
+ setKnocksOutTextField:
+ shouldShowSubject
+ sendButtonColor
+ setKnockoutCoverView:
+ setDimmed:
+ isDimmed
+ composition
+ placeholderText
+ setPlaceholderText:
- send:
- dealloc
- setDelegate:
- hitTest:withEvent:
- setFrame:
- layoutSubviews
- sizeThatFits:
- delegate
- contentView
- setContentView:
- animationState
- _accessoryViewFadeDuration
- setAnimationState:
- setBackdropView:
- backdropView
- photoButton
- shouldShowPhotoButton
- photoButtonSize
- sendButton
- sendTextAlignmentInsets
- sendButtonSize
- characterCountLabel
- shouldShowCharacterCount
- characterCountSize
- coverView
- contentTextAlignmentInsets
- isCharacterCountHidden
- placeholderHeight
- setShouldShowSubject:
- setShouldShowPhotoButton:
- setShouldShowCharacterCount:
- setSendButton:
- setSendButtonSize:
- setSendTextAlignmentInsets:
- setPhotoButton:
- setPhotoButtonSize:
- setCharacterCountLabel:
- setCharacterCountSize:
- setCoverView:
- setComposition:
- knockoutCoverView
- messageEntryContentViewDidChange:
- messageEntryContentViewShouldBeginEditing:
- messageEntryContentViewDidBeginEditing:
- messageEntryContentView:shouldInsertMediaObjects:
- initWithFrame:shouldShowSubject:shouldShowPhotoButton:shouldShowCharacterCount:
- setSendButtonColor:
- setCharacterCountHidden:
- animateKnockedOutTextField
- setKnocksOutTextField:
- shouldShowSubject
- sendButtonColor
- setKnockoutCoverView:
- setDimmed:
- isDimmed
- composition
- placeholderText
- setPlaceholderText:
@end
