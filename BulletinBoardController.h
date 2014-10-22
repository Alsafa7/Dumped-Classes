@interface BulletinBoardController : PSEditableListController
{
	int _inCount;
	long long _orderRule;
	id _inGroupEmptyCell;
	id _outGroupEmptyCell;
	usigned long long _cellChangeAction;
	id _loadSem;
	long long _todaySection;
	long long _inNotificationCenterSection;
	long long _outOfNotificationCenterSection;
	BOOL _loadingFromBBGateway;
	BOOL _telephonyDevice;
	usigned long long _dndDataTypes;
	id _urlResourceDictionary;
	id _todaySectionInfo;
	id _stocksSectionInfo;
	id _attributionSectionInfo;
}

@end
