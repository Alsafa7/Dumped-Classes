@interface UIStatusBarCustomItem : UIStatusBarItem
{
	id _views;
	id _properties;
	id _indicatorName;
}

+ setProperties:
+ properties
+ setIndicatorName:
+ indicatorName
+ removeAllViews
+ setView:forManager:
+ viewForManager:
+ description
+ priority
+ rightOrder
+ viewClass
+ leftOrder
+ type
- setProperties:
- properties
- setIndicatorName:
- indicatorName
- removeAllViews
- setView:forManager:
- viewForManager:
- description
- priority
- rightOrder
- viewClass
- leftOrder
- type
@end
