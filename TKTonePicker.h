@interface TKTonePicker : UIView
{
	id _table;
	id _tableController;
	id _delegate;
}

+ styleProvider
+ setStyleProvider:
+ setSelectedRingtoneIdentifier:
+ setSelectedVibrationIdentifier:
+ setShowsNothingSelected:
+ setShowsNone:
+ setNoneAtTop:
+ setShowsDefault:
+ setShowsVibrations:
+ selectedRingtoneIdentifier
+ stopPlaying
+ setCustomTableViewCellClass:
+ selectedVibrationIdentifier
+ setAVController:
+ initWithFrame:
+ dealloc
+ setDelegate:
+ didMoveToWindow
+ layoutSubviews
+ delegate
+ setContext:
+ displayScrollerIndicators
+ _reloadData
+ initWithFrame:avController:
+ initWithFrame:avController:filter:tonePicker:
+ buildUIWithAVController:filter:tonePicker:
+ setDefaultIdentifier:
+ vibrationAccountIdentifier
+ setVibrationAccountIdentifier:
+ setNoneString:
+ selectedIdentifier:
+ setShowsMedia:
+ setSelectedMediaIdentifier:
+ setMediaAtTop:
+ setShowsStoreButtonInNavigationBar:
+ _buildTable
+ _toneManagerContentsChanged
+ addMediaItems:
+ removeMediaItems:
+ setShowsDefaultVibration:
+ setShowsUserGeneratedVibrations:
+ setShowsNoneVibration:
+ setShowsNoVibrationSelected:
+ allowsDeletingCurrentSystemVibration
+ setAllowsDeletingCurrentSystemVibration:
+ stopPlayingWithFadeOut:
+ finishedWithPicker
+ ringtoneManagerContentsChanged:
+ ringtoneTableController:selectedRingtoneWithIdentifier:
+ ringtoneTableController:selectedMediaItemWithIdentifier:
+ ringtoneTableController:willPlayRingtoneWithIdentifier:
+ contentHeight
- styleProvider
- setStyleProvider:
- setSelectedRingtoneIdentifier:
- setSelectedVibrationIdentifier:
- setShowsNothingSelected:
- setShowsNone:
- setNoneAtTop:
- setShowsDefault:
- setShowsVibrations:
- selectedRingtoneIdentifier
- stopPlaying
- setCustomTableViewCellClass:
- selectedVibrationIdentifier
- setAVController:
- initWithFrame:
- dealloc
- setDelegate:
- didMoveToWindow
- layoutSubviews
- delegate
- setContext:
- displayScrollerIndicators
- _reloadData
- initWithFrame:avController:
- initWithFrame:avController:filter:tonePicker:
- buildUIWithAVController:filter:tonePicker:
- setDefaultIdentifier:
- vibrationAccountIdentifier
- setVibrationAccountIdentifier:
- setNoneString:
- selectedIdentifier:
- setShowsMedia:
- setSelectedMediaIdentifier:
- setMediaAtTop:
- setShowsStoreButtonInNavigationBar:
- _buildTable
- _toneManagerContentsChanged
- addMediaItems:
- removeMediaItems:
- setShowsDefaultVibration:
- setShowsUserGeneratedVibrations:
- setShowsNoneVibration:
- setShowsNoVibrationSelected:
- allowsDeletingCurrentSystemVibration
- setAllowsDeletingCurrentSystemVibration:
- stopPlayingWithFadeOut:
- finishedWithPicker
- ringtoneManagerContentsChanged:
- ringtoneTableController:selectedRingtoneWithIdentifier:
- ringtoneTableController:selectedMediaItemWithIdentifier:
- ringtoneTableController:willPlayRingtoneWithIdentifier:
- contentHeight
@end