@interface SBOrderedRequesters : NSObject
{
	Array _bands;
}

+ requesters
+ frontmostRequester
+ containsRequester:inBand:
+ addRequester:toBand:
+ prioritizeRequester:
+ removeRequester:
+ dealloc
+ init
+ description
- requesters
- frontmostRequester
- containsRequester:inBand:
- addRequester:toBand:
- prioritizeRequester:
- removeRequester:
- dealloc
- init
- description
@end
