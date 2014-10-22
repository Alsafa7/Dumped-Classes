@interface SBWindowContext : NSObject
{
	unsigned int _identifier;
	float _level;
	id _screen;
	BOOL _orderOutPending;
}

+ setOrderOutPending:
+ isOrderOutPending
+ initWithIdentifier:level:screen:
+ dealloc
+ isEqual:
+ hash
+ description
+ screen
+ level
+ identifier
- setOrderOutPending:
- isOrderOutPending
- initWithIdentifier:level:screen:
- dealloc
- isEqual:
- hash
- description
- screen
- level
- identifier
@end
