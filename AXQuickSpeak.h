@interface AXQuickSpeak : NSObject
{
	long long _speechJobStartLocationInSelectedTextRange;
	struct _lastQuickSpeakOffset;
	BOOL _cachedIdleTimerPref;
	BOOL _paused;
	id _selectedContent;
	id _speakingContent;
	id _speechSynthesizer;
	id _speechSequenceItems;
	id _quickSpeakInitiator;
	id _highlightView;
	id _hiddenTextSelectionViews;
	id _hiddenTextSelectionDelegates;
	id _highlightViewDispatcher;
	id _contentOwner;
}

@end
