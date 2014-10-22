@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider
{
	BOOL _overridePercent;
	BOOL _killActivity;
	Array _itemIsDisabled;
	Array _itemWasDisabled;
	BOOL _timeEnabled;
	BOOL _timeCloaked;
	BOOL _allButBatteryCloaked;
	BOOL _telephonyAndBluetoothCloaked;
}

+ enableTime:
+ setTimeCloaked:
+ setTelephonyAndBluetoothItemsCloaked:
+ enableTime:crossfade:crossfadeDuration:
+ isTimeEnabled
+ _updateDisabledItems
+ setAllItemsExceptBatteryCloaked:
+ _shouldPostForVisitedItem:withUpdates:toAggregatorData:
+ _composePostDataFromAggregatorData:
+ dealloc
+ init
+ statusBarStateProvider:didPostStatusBarData:withActions:
- enableTime:
- setTimeCloaked:
- setTelephonyAndBluetoothItemsCloaked:
- enableTime:crossfade:crossfadeDuration:
- isTimeEnabled
- _updateDisabledItems
- setAllItemsExceptBatteryCloaked:
- _shouldPostForVisitedItem:withUpdates:toAggregatorData:
- _composePostDataFromAggregatorData:
- dealloc
- init
- statusBarStateProvider:didPostStatusBarData:withActions:
@end
