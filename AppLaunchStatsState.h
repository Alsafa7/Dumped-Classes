@interface AppLaunchStatsState : NSObject
{
	BOOL isDeviceInCall;
	BOOL isDeviceUnderThermalPressure;
	BOOL isDeviceInGoodCellularCondition;
	BOOL isDataResourceAvailable;
	BOOL isFetchPowerResourceAvailable;
	BOOL isFetchPushPowerResourceAvailable;
	BOOL doUniformBudget;
	BOOL isWIFIConnected;
	BOOL isBatteryChargerConnected;
	id stateQueue;
	long long globalDataBudgetCap;
	long long globalPowerBudgetCap;
	long long BGDataBudgetCap;
	id saveAndRestoreContext;
	id startTimeStamp;
	id startTimeStampOOB;
	id appsAliveInLSTDict;
	id fireDates;
	id cacheAppsforFullDebug;
	id dailyLaunchArrays;
	id recentLaunchArrays;
	id weeklyLaunchArrays;
	id appForecastArray;
	id dataForecastArray;
	usigned long long appForecastQuality;
	usigned long long dataForecastQuality;
	id powerFetchForecastArray;
	id powerPushForecastArray;
	id dailyAppForecastSlots;
	id dailyDataBudgetSlots;
	id dailyDataBGBudgetSlots;
	id dailyDataNDISCBudgetSlots;
	id dailyPowerFetchBudgetSlots;
	id dailyPowerPushBudgetSlots;
	id dailyPowerNDISCBudgetSlots;
	long long endofdayDataBudget;
	long long endofdayBGDataBudget;
	long long endofdayNDISCDataBudget;
	BOOL _enableLiveListCheck;
	BOOL _enableBlackListCheck;
	BOOL _enableOpportunisticFetchCheck;
	BOOL _enableForeGroundAppCheck;
	BOOL _enableBudgetCheck;
	float _globalNonactivePWPC;
	float _globalFetchPWPC;
	float _globalPushPWPC;
	float _dataWifiMultiplier;
	float _dataCellMultiplier;
	long long globalDataCarryCap;
	long long BGDataCarryCap;
	long long _globalMinSlotData;
	long long _BGMinSlotData;
	long long _globalTimeThreshold;
}

+ init
+ save:
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ reloadConfiguration
+ saveContext:
+ restore:
+ recentLaunchArrays
+ dailyLaunchArrays
+ weeklyLaunchArrays
+ setDataForecastQuality:
+ dataForecastArray
+ dataForecastQuality
+ appForecastArray
+ setAppForecastQuality:
+ appForecastQuality
+ powerFetchForecastArray
+ powerPushForecastArray
+ setIsDataResourceAvailable:
+ setIsFetchPowerResourceAvailable:
+ setIsFetchPushPowerResourceAvailable:
+ dataWifiMultiplier
+ dataCellMultiplier
+ resetAppsAliveInLSTList
+ updateAppsAliveInLSTList:
+ fireDates
+ setFireDates:
+ dailyAppForecastSlots
+ addPredictedSlotsToDailyOutOfBandQueue:
+ calculateSlotMinDataBudget:
+ calculateDailyDataBudgetFor:
+ convertPCdistributionToInt:fetchOver:array:dailyInt:
+ addToOutOfBandAppList:withCacheDict:withAppList:
+ popFirstSlotInDailyBudgetQueue:
+ addPredictedSlotsToDailyAppForecastQueue:
+ addPredictedSlotsToDailyDataBudgetQueue:forcastquality:
+ addPredictedSlotsToDailyPowerBudgetQueue:forcastquality:batteryCapacity:
+ getAppsAliveInLSTList:
+ isOutOfBand
+ getOutOfBandAppList
+ hasResourcesAvailable:forTriggerType:
+ isChargeOnWifiOn
+ isDeviceInCall
+ setIsDeviceInCall:
+ isDeviceUnderThermalPressure
+ setIsDeviceUnderThermalPressure:
+ isDeviceInGoodCellularCondition
+ isDataResourceAvailable
+ isFetchPowerResourceAvailable
+ isFetchPushPowerResourceAvailable
+ doUniformBudget
+ setDoUniformBudget:
+ isWIFIConnected
+ isBatteryChargerConnected
+ setIsBatteryChargerConnected:
+ appsAliveInLSTDict
+ setAppsAliveInLSTDict:
+ cacheAppsforFullDebug
+ setDailyLaunchArrays:
+ setRecentLaunchArrays:
+ setWeeklyLaunchArrays:
+ setAppForecastArray:
+ setDataForecastArray:
+ setPowerFetchForecastArray:
+ setPowerPushForecastArray:
+ setDailyAppForecastSlots:
+ dailyDataBudgetSlots
+ setDailyDataBudgetSlots:
+ dailyDataBGBudgetSlots
+ setDailyDataBGBudgetSlots:
+ dailyPowerFetchBudgetSlots
+ setDailyPowerFetchBudgetSlots:
+ dailyPowerPushBudgetSlots
+ setDailyPowerPushBudgetSlots:
+ dailyPowerNDISCBudgetSlots
+ setDailyPowerNDISCBudgetSlots:
+ dailyDataNDISCBudgetSlots
+ setDailyDataNDISCBudgetSlots:
+ globalDataCarryCap
+ globalDataBudgetCap
+ BGDataBudgetCap
+ BGDataCarryCap
+ endofdayDataBudget
+ setEndofdayDataBudget:
+ endofdayBGDataBudget
+ setEndofdayBGDataBudget:
+ endofdayNDISCDataBudget
+ setEndofdayNDISCDataBudget:
+ globalMinSlotData
+ BGMinSlotData
+ globalTimeThreshold
+ globalNonactivePWPC
+ globalFetchPWPC
+ globalPushPWPC
+ enableLiveListCheck
+ enableBlackListCheck
+ setEnableBlackListCheck:
+ enableOpportunisticFetchCheck
+ enableForeGroundAppCheck
+ enableBudgetCheck
+ .cxx_destruct
- init
- save:
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- reloadConfiguration
- saveContext:
- restore:
- recentLaunchArrays
- dailyLaunchArrays
- weeklyLaunchArrays
- setDataForecastQuality:
- dataForecastArray
- dataForecastQuality
- appForecastArray
- setAppForecastQuality:
- appForecastQuality
- powerFetchForecastArray
- powerPushForecastArray
- setIsDataResourceAvailable:
- setIsFetchPowerResourceAvailable:
- setIsFetchPushPowerResourceAvailable:
- dataWifiMultiplier
- dataCellMultiplier
- resetAppsAliveInLSTList
- updateAppsAliveInLSTList:
- fireDates
- setFireDates:
- dailyAppForecastSlots
- addPredictedSlotsToDailyOutOfBandQueue:
- calculateSlotMinDataBudget:
- calculateDailyDataBudgetFor:
- convertPCdistributionToInt:fetchOver:array:dailyInt:
- addToOutOfBandAppList:withCacheDict:withAppList:
- popFirstSlotInDailyBudgetQueue:
- addPredictedSlotsToDailyAppForecastQueue:
- addPredictedSlotsToDailyDataBudgetQueue:forcastquality:
- addPredictedSlotsToDailyPowerBudgetQueue:forcastquality:batteryCapacity:
- getAppsAliveInLSTList:
- isOutOfBand
- getOutOfBandAppList
- hasResourcesAvailable:forTriggerType:
- isChargeOnWifiOn
- isDeviceInCall
- setIsDeviceInCall:
- isDeviceUnderThermalPressure
- setIsDeviceUnderThermalPressure:
- isDeviceInGoodCellularCondition
- isDataResourceAvailable
- isFetchPowerResourceAvailable
- isFetchPushPowerResourceAvailable
- doUniformBudget
- setDoUniformBudget:
- isWIFIConnected
- isBatteryChargerConnected
- setIsBatteryChargerConnected:
- appsAliveInLSTDict
- setAppsAliveInLSTDict:
- cacheAppsforFullDebug
- setDailyLaunchArrays:
- setRecentLaunchArrays:
- setWeeklyLaunchArrays:
- setAppForecastArray:
- setDataForecastArray:
- setPowerFetchForecastArray:
- setPowerPushForecastArray:
- setDailyAppForecastSlots:
- dailyDataBudgetSlots
- setDailyDataBudgetSlots:
- dailyDataBGBudgetSlots
- setDailyDataBGBudgetSlots:
- dailyPowerFetchBudgetSlots
- setDailyPowerFetchBudgetSlots:
- dailyPowerPushBudgetSlots
- setDailyPowerPushBudgetSlots:
- dailyPowerNDISCBudgetSlots
- setDailyPowerNDISCBudgetSlots:
- dailyDataNDISCBudgetSlots
- setDailyDataNDISCBudgetSlots:
- globalDataCarryCap
- globalDataBudgetCap
- BGDataBudgetCap
- BGDataCarryCap
- endofdayDataBudget
- setEndofdayDataBudget:
- endofdayBGDataBudget
- setEndofdayBGDataBudget:
- endofdayNDISCDataBudget
- setEndofdayNDISCDataBudget:
- globalMinSlotData
- BGMinSlotData
- globalTimeThreshold
- globalNonactivePWPC
- globalFetchPWPC
- globalPushPWPC
- enableLiveListCheck
- enableBlackListCheck
- setEnableBlackListCheck:
- enableOpportunisticFetchCheck
- enableForeGroundAppCheck
- enableBudgetCheck
- .cxx_destruct
@end
