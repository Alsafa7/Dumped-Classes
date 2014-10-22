@interface AppLaunchStatsAggD : NSObject
{
	BOOL buildLaunchStats;
	id aggDQueue;
	int hasStats;
	int fetchDeniedNoData;
	int fetchDeniedNoPW;
	int fetchDeniedPoorCell;
	int fetchDenied;
	int fetchAttempt;
	int pushDeniedNoData;
	int pushDeniedNoPW;
	int pushDeniedPoorCell;
	int pushDenied;
	int pushAttempt;
	long long fetchDataTotal;
	int fetchDataCount;
	int fetchPWTotal;
	int fetchGiven;
	int fetchFailedCount;
	long long fetchUpdateTimeTotal;
	int fetchUpdateTimeCount;
	int forceRelease;
	Array zoneCounts;
	id cycleStart;
	id pastCycle;
	id launchDict;
	Array prewarmZoneCounts;
	id prewarmDict;
	int prewarmHits;
	int prewarmMiss;
	long long avgDownloadsize;
	long long avgPWConsumed;
	int totalBGDownloads;
	long long totalNonDiscDownload;
	long long totalNonDiscEnergy;
	int BGReportToken;
}

+ uploadData
+ dealloc
+ init
+ fetchTimeUpdate:
+ forceReleaseCount
+ cycleStart
+ replacePredictionAtZone:zoneid:
+ fetchAttemptIncrement
+ fetchDenied
+ fetchDeniedBecause:withPWBudget:inwifi:incell:ignorePoorCell:
+ fetchCountUpdate:
+ fetchPWCount:
+ pushAttemptIncrement
+ pushDenied
+ pushDeniedBecause:withPWBudget:inwifi:incell:ignorePoorCell:
+ fetchDataCount:
+ appPrewarm:
+ fetchFailedUpdate
+ setCollectLaunchStats
+ pastCycle
+ populatePredictZones:
+ populatePrewarmZones:
+ newCycleWithApps:
+ appFGLaunch:
+ backgroundSucceeds:withPW:
+ nonDiscretionaryAdd:withPW:
+ distanceToLastPrewarm:currentSlot:currentoffset:
+ calculatePrewarmHitMiss:launch:
+ accountPredatePrewarm:launch:launchvalue:prewarmvalue:diff:
+ setPastCycle:
+ .cxx_destruct
- uploadData
- dealloc
- init
- fetchTimeUpdate:
- forceReleaseCount
- cycleStart
- replacePredictionAtZone:zoneid:
- fetchAttemptIncrement
- fetchDenied
- fetchDeniedBecause:withPWBudget:inwifi:incell:ignorePoorCell:
- fetchCountUpdate:
- fetchPWCount:
- pushAttemptIncrement
- pushDenied
- pushDeniedBecause:withPWBudget:inwifi:incell:ignorePoorCell:
- fetchDataCount:
- appPrewarm:
- fetchFailedUpdate
- setCollectLaunchStats
- pastCycle
- populatePredictZones:
- populatePrewarmZones:
- newCycleWithApps:
- appFGLaunch:
- backgroundSucceeds:withPW:
- nonDiscretionaryAdd:withPW:
- distanceToLastPrewarm:currentSlot:currentoffset:
- calculatePrewarmHitMiss:launch:
- accountPredatePrewarm:launch:launchvalue:prewarmvalue:diff:
- setPastCycle:
- .cxx_destruct
@end
