@interface CKMessageStatus : NSObject
{
	int _status;
	id _guid;
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
+ now
+ dealloc
+ isEqual:
+ description
+ message
+ setMessage:
+ status
+ setStatus:
+ attributedTranscriptText
+ initWithStatus:message:
+ guid
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
- now
- dealloc
- isEqual:
- description
- message
- setMessage:
- status
- setStatus:
- attributedTranscriptText
- initWithStatus:message:
- guid
@end
