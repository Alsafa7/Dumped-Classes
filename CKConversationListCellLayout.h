@interface CKConversationListCellLayout : NSObject
{
	BOOL _invalid;
	double _summaryLabelCapFrameYOrigin;
	struct _summaryFrame;
	struct _dateFrame;
	struct _senderFrame;
	struct _chevronFrame;
	struct _unreadFrame;
}

+ invalid
+ setInvalid:
+ init
+ invalidate
+ setSummaryLabelCapFrameYOrigin:
+ setSummaryFrame:
+ setSenderFrame:
+ setDateFrame:
+ setChevronFrame:
+ setUnreadFrame:
+ senderFrame
+ dateFrame
+ summaryFrame
+ summaryLabelCapFrameYOrigin
+ chevronFrame
+ unreadFrame
- invalid
- setInvalid:
- init
- invalidate
- setSummaryLabelCapFrameYOrigin:
- setSummaryFrame:
- setSenderFrame:
- setDateFrame:
- setChevronFrame:
- setUnreadFrame:
- senderFrame
- dateFrame
- summaryFrame
- summaryLabelCapFrameYOrigin
- chevronFrame
- unreadFrame
@end
