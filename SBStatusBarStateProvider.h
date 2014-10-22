@interface SBStatusBarStateProvider : NSObject
{
	id _stateAggregator;
	id _stateObservers;
	struct _aggregatorData;
	int _aggregatorActions;
	struct _lastPost;
	usigned long long _coalescentBlockDepth;
	Array _itemNeedsPost;
	BOOL _anyItemNeedsPost;
	BOOL _nonItemDataNeedsPost;
	BOOL _posting;
}

+ beginCoalescentBlock
+ endCoalescentBlock
+ updateStatusBarItem:
+ statusBarStateAggregatorDidStartPost:
+ statusBarStateAggregator:didVisitItem:withUpdates:toData:
+ statusBarStateAggregator:didUpdateNonItemData:
+ statusBarStateAggregatorDidFinishPost:withData:actions:
+ _shouldPostForVisitedItem:withUpdates:toAggregatorData:
+ _composePostDataFromAggregatorData:
+ _composePostActionsFromAggregatorActions:
+ _shouldPostForUpdatesToNonItemData:
+ dealloc
+ init
+ addStatusBarStateObserver:
+ getStatusBarData:
+ removeStatusBarStateObserver:
- beginCoalescentBlock
- endCoalescentBlock
- updateStatusBarItem:
- statusBarStateAggregatorDidStartPost:
- statusBarStateAggregator:didVisitItem:withUpdates:toData:
- statusBarStateAggregator:didUpdateNonItemData:
- statusBarStateAggregatorDidFinishPost:withData:actions:
- _shouldPostForVisitedItem:withUpdates:toAggregatorData:
- _composePostDataFromAggregatorData:
- _composePostActionsFromAggregatorActions:
- _shouldPostForUpdatesToNonItemData:
- dealloc
- init
- addStatusBarStateObserver:
- getStatusBarData:
- removeStatusBarStateObserver:
@end
