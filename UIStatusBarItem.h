@interface UIStatusBarItem : NSObject
{
	long long _idiom;
	int _type;
}

+ description
+ type
+ initWithType:
+ appearsOnLeft
+ appearsOnRight
+ appearsInRegion:
+ comparePriority:
+ priority
+ indicatorName
+ leftOrder
+ rightOrder
+ viewClass
+ compareLeftOrder:
+ compareRightOrder:
- description
- type
- initWithType:
- appearsOnLeft
- appearsOnRight
- appearsInRegion:
- comparePriority:
- priority
- indicatorName
- leftOrder
- rightOrder
- viewClass
- compareLeftOrder:
- compareRightOrder:
@end
