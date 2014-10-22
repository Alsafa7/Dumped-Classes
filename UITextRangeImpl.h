@interface UITextRangeImpl : UITextRange
{
	id _domRange;
	long long _affinityIfCollapsed;
}

+ dealloc
+ isEqual:
+ description
+ isEmpty
+ start
+ end
+ affinity
+ domRange
+ setDomRange:
+ setAffinity:
+ adjustAffinityOfPosition:isStart:
- dealloc
- isEqual:
- description
- isEmpty
- start
- end
- affinity
- domRange
- setDomRange:
- setAffinity:
- adjustAffinityOfPosition:isStart:
@end
