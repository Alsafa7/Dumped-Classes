@interface LSStatusBarClient : NSObject
{
	BOOL _isLocal;
	id _currentMessage;
	id _submittedMessages;
	id _titleStrings;
}

+ updateStatusBar
+ setProperties:forItem:
+ titleStringAtIndex:
+ resubmitContent
+ retrieveCurrentMessage
+ processCurrentMessage
+ init
+ currentMessage
- updateStatusBar
- setProperties:forItem:
- titleStringAtIndex:
- resubmitContent
- retrieveCurrentMessage
- processCurrentMessage
- init
- currentMessage
@end
