@interface CKTimestamp : NSObject
{
	id _date;
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
+ date
+ message
+ setDate:
+ setMessage:
+ attributedTranscriptText
+ initWithDate:message:
+ timestampCache
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
- date
- message
- setDate:
- setMessage:
- attributedTranscriptText
- initWithDate:message:
- timestampCache
- guid
@end
