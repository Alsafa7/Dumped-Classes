@interface BudgetPool : NSObject
{
	long long itemPoolLimit;
	long long globalPoolLimit;
	long long currentGlobalPool;
	int budgetMode;
	id itemsDictionary;
}

+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ resetAllPoolLimits
+ init:andItemLimit:withBudgetMode:
+ hasBudgetAvailable:
+ hasGlobalPoolReachedLimit
+ UpdateBudget:withCost:
+ totalBudget
+ resetAllDiff
+ totalDiffBudget
+ findPoolResource:
+ .cxx_destruct
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- resetAllPoolLimits
- init:andItemLimit:withBudgetMode:
- hasBudgetAvailable:
- hasGlobalPoolReachedLimit
- UpdateBudget:withCost:
- totalBudget
- resetAllDiff
- totalDiffBudget
- findPoolResource:
- .cxx_destruct
@end
