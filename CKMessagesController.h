@interface CKMessagesController : UIViewController
{
	id _rightController;
	id _blankNavController;
	id _primaryNavigationController;
	id _conversationListController;
	id _transcriptController;
	id _transcriptDimmingView;
	id _messagesSplitViewController;
	id _mailComposeController;
	id _mainController;
	id _currentConversation;
	id _conversationCache;
	BOOL _ignoreConversationsBecomingStale;
	BOOL _transcriptDimmed;
	id _modalPresentationGroup;
	id _alertViewHandler;
}

@end
