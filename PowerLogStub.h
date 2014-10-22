@interface PowerLogStub : NSObject
{
	id pllStubQueue;
	long long totalBackgroundDownloadPowerUsed;
	long long totalFetchPowerUsed;
	long long totalPushPowerUsed;
	long long totalSilentPushPowerUsed;
	long long totalNonDISCPowerUsed;
	id powerbackgroundDownloadBudgetPool;
	id powerFetchBudgetPool;
	id powerPushBudgetPool;
	id powerSilentPushBudgetPool;
	id powerNonDiscretionaryBudgetPool;
	id startPowerLogLiteDate;
	id batteryCapacity;
}

+ init
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ energyConsumedRefresh
+ energyConsumedForFetch
+ energyConsumedForPush
+ energyStopLogging:withPowerLogStubType:andSeqNum:
+ energyStartLogging:withPowerLogStubType:andSeqNum:
+ energyPoweronReset
+ getBatteryCapacity
+ energyConsumedForNonDiscDownload
+ energyConsumedForBackgroundDownload
+ duetUpdateTypeMapfrom:
+ .cxx_destruct
- init
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- energyConsumedRefresh
- energyConsumedForFetch
- energyConsumedForPush
- energyStopLogging:withPowerLogStubType:andSeqNum:
- energyStartLogging:withPowerLogStubType:andSeqNum:
- energyPoweronReset
- getBatteryCapacity
- energyConsumedForNonDiscDownload
- energyConsumedForBackgroundDownload
- duetUpdateTypeMapfrom:
- .cxx_destruct
@end
