@interface CKTranscriptMessageCell : CKTranscriptCell
{
	char _orientation;
	BOOL _wantsContactImageLayout;
	id _failureButton;
	id _contactImageView;
}

+ configureForRowObject:
+ configureForRow:
+ contactImageView
+ setContactImageView:
+ dealloc
+ layoutSubviews
+ description
+ orientation
+ setOrientation:
+ failureButton
+ contactImage
+ wantsContactImageLayout
+ failed
+ setFailureButton:
+ setWantsContactImageLayout:
+ setContactImage:
+ setFailed:
- configureForRowObject:
- configureForRow:
- contactImageView
- setContactImageView:
- dealloc
- layoutSubviews
- description
- orientation
- setOrientation:
- failureButton
- contactImage
- wantsContactImageLayout
- failed
- setFailureButton:
- setWantsContactImageLayout:
- setContactImage:
- setFailed:
@end
