@interface CKTypingIndicator : NSObject
{
	BOOL _hasAppeared;
	id _message;
}

+ __ck_displayGUIDWithMessage:
+ __ck_displayCellClass
+ __ck_displayCellIdentifier
+ __ck_prewarmForDisplay
+ __ck_displayContactImage
+ __ck_displayContentAlignmentInsets
+ __ck_displayTranscriptOrientation
+ __ck_transcriptUsesTextAlignmentInsets
+ __ck_displayDuringSend
+ __ck_wantsDrawerLayout
+ __ck_displaySize:
+ dealloc
+ isEqual:
+ message
+ setMessage:
+ sender
+ hasAppeared
+ setHasAppeared:
+ guid
+ initWithMessage:
- __ck_displayGUIDWithMessage:
- __ck_displayCellClass
- __ck_displayCellIdentifier
- __ck_prewarmForDisplay
- __ck_displayContactImage
- __ck_displayContentAlignmentInsets
- __ck_displayTranscriptOrientation
- __ck_transcriptUsesTextAlignmentInsets
- __ck_displayDuringSend
- __ck_wantsDrawerLayout
- __ck_displaySize:
- dealloc
- isEqual:
- message
- setMessage:
- sender
- hasAppeared
- setHasAppeared:
- guid
- initWithMessage:
@end
