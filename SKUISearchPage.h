@interface SKUISearchPage : NSObject
{
	BOOL _autoCorrected;
	id _facets;
	id _metricsConfiguration;
	id _metricsPageDescription;
	long long _preAutoCorrectCount;
	id _relatedQueries;
	id _resultGroups;
	id _searchTerm;
	id _spellCorrectedTerm;
}

+ searchTerm
+ setSearchTerm:
+ copyWithZone:
+ numberOfResults
+ setMetricsConfiguration:
+ setMetricsPageDescription:
+ metricsConfiguration
+ metricsPageDescription
+ facets
+ setRelatedQueries:
+ relatedQueries
+ resultGroups
+ spellCorrectedTerm
+ setSpellCorrectedTerm:
+ autoCorrected
+ setAutoCorrected:
+ preAutoCorrectCount
+ setPreAutoCorrectCount:
+ setResultGroups:
+ setFacets:
+ .cxx_destruct
- searchTerm
- setSearchTerm:
- copyWithZone:
- numberOfResults
- setMetricsConfiguration:
- setMetricsPageDescription:
- metricsConfiguration
- metricsPageDescription
- facets
- setRelatedQueries:
- relatedQueries
- resultGroups
- spellCorrectedTerm
- setSpellCorrectedTerm:
- autoCorrected
- setAutoCorrected:
- preAutoCorrectCount
- setPreAutoCorrectCount:
- setResultGroups:
- setFacets:
- .cxx_destruct
@end
