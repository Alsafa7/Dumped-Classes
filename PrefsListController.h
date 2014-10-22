@interface PrefsListController : PSListController
{
	BOOL _didFirstLoad;
	id _speakerAccessory;
	id _eqSpecifier;
	id _thirdPartySpecifiers;
	id _movedThirdPartySpecifiers;
	BOOL _victoriaCapable;
	id _victoriaSpecifier;
	BOOL _notificationState;
	id _notificationsSpecifier;
	id _castleSpecifier;
	id _twitterSpecifier;
	id _facebookSpecifier;
	id _flickrSpecifier;
	id _vimeoSpecifier;
	id _weiboSpecifier;
	id _tencentweiboSpecifier;
	id _messagesSpecifier;
	id _faceTimeSpecifier;
	id _gameCenterSpecifier;
	id _carrierSelectionSpecifier;
	id _personalHotspotSpecifier;
	BOOL _suppressControllerAnimationForExpiry;
	BOOL _wifiValueIsClean;
	BOOL _bluetoothValueIsClean;
	id _originalSpecifiers;
	id _originalDisplayIdentifiers;
	id _iconCacheQueue;
	id _iconCache;
	id _airplaneSheet;
	id _accountStore;
	id _wifiString;
	id _bluetoothString;
}

@end
