@interface HistogramElement : NSObject
{
	id stringkey;
	double probability;
	usigned long long count;
	usigned long long queryID;
}

+ initWithCoder:
+ encodeWithCoder:
+ count
+ description
+ setCount:
+ stringkey
+ probability
+ initWithString:withProbability:withQueryID:
+ queryID
+ initWithString:withCount:withQueryID:
+ setStringkey:
+ setProbability:
+ setQueryID:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- count
- description
- setCount:
- stringkey
- probability
- initWithString:withProbability:withQueryID:
- queryID
- initWithString:withCount:withQueryID:
- setStringkey:
- setProbability:
- setQueryID:
- .cxx_destruct
@end
