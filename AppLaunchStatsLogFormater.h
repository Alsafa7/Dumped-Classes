@interface AppLaunchStatsLogFormater : NSObject
{
	id fetchCandidatesStr;
	id fetchForeground;
	id fetchBlackList;
	id fetchRecentLaunch;
	id filteredCandidates;
	id trendingCandidates;
	id prewarmCandidate;
	id foregroundCandidate;
	id blacklistCandidate;
	id resourceRestrictCandidates;
	id filteredCandidatesTrend;
}

+ init
+ resetStringIdentifierWhatToLaunch
+ resetStringIdentifierTrending
+ concat:withSlot:
+ dumpTrending
+ dumpWhatToLaunch
+ .cxx_destruct
- init
- resetStringIdentifierWhatToLaunch
- resetStringIdentifierTrending
- concat:withSlot:
- dumpTrending
- dumpWhatToLaunch
- .cxx_destruct
@end
