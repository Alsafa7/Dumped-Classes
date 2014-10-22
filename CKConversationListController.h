@interface CKConversationListController : UIViewController
{
	id _table;
	id _previouslySelectedIndexPath;
	id _buttonBar;
	usigned long long _willBeMarkedReadCount;
	int _disableUpdatesCount;
	bit[1] _dirty;
	bit[1] _isVisible;
	bit[1] _willRotate;
	id _messagesController;
	id _conversationList;
	id _searcher;
	BOOL _isInitialLoad;
}

@end
