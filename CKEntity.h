@interface CKEntity : NSObject
{
	id _handle;
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
+ personViewControllerWithDelegate:
+ propertyType
+ dealloc
+ isEqual:
+ hash
+ description
+ name
+ identifier
+ defaultIMHandle
+ rawAddress
+ initWithIMHandle:
+ abRecord
+ originalAddress
+ textToneIdentifier
+ textVibrationIdentifier
+ transcriptContactImage
+ attributedTranscriptText
+ handle
+ setHandle:
+ fullName
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
- personViewControllerWithDelegate:
- propertyType
- dealloc
- isEqual:
- hash
- description
- name
- identifier
- defaultIMHandle
- rawAddress
- initWithIMHandle:
- abRecord
- originalAddress
- textToneIdentifier
- textVibrationIdentifier
- transcriptContactImage
- attributedTranscriptText
- handle
- setHandle:
- fullName
@end
