@interface UITableViewCountView : UILabel
{
	id _countString;
	int _count;
}

+ dealloc
+ count
+ setCount:
+ initWithFrame:withCountString:withCount:
+ setCountString:withCount:
- dealloc
- count
- setCount:
- initWithFrame:withCountString:withCount:
- setCountString:withCount:
@end
