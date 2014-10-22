@interface MPUStackView : UIView
{
	long long _distanceIgnoreCount;
	id _items;
	id _window;
	BOOL _forcesIntegralX;
	BOOL _forcesIntegralY;
	id _dataSource;
	Class _itemClass;
	id _itemReuseIdentifier;
	long long _numberOfItems;
	id _perspectiveTargetView;
	struct _baseSize;
	struct _maximumRelativeOffsetStep;
	struct _sizeInsetStep;
	struct _vanishingPoint;
}

+ itemClass
+ initWithFrame:
+ dealloc
+ setDataSource:
+ didMoveToWindow
+ reloadData
+ layoutSubviews
+ sizeThatFits:
+ dataSource
+ didMoveToSuperview
+ items
+ numberOfItems
+ _normalizedDistanceFromVanishingPointForCenter:perspectiveTargetView:
+ _relativeOffsetForMinimumRelativeOffset:maximumRelativeOffset:normalizedDistanceFromVanishingPoint:
+ _dequeueReusableItem
+ _centerInPerspectiveTargetViewCoordinates
+ _applyLayoutToItem:atIndex:centerInPerspectiveTargetViewCoordinates:
+ beginIgnoringDistanceUpdates
+ endIgnoringDistanceUpdates
+ forcesIntegralX
+ forcesIntegralY
+ itemReuseIdentifier
+ maximumRelativeOffsetStep
+ sizeInsetStep
+ setForcesIntegralY:
+ setMaximumRelativeOffsetStep:
+ setSizeInsetStep:
+ setForcesIntegralX:
+ setPerspectiveTargetView:
+ setVanishingPoint:
+ updateForChangedDistanceFromVanishingPoint
+ initWithFrame:itemClass:itemReuseIdentifier:
+ baseSize
+ setBaseSize:
+ sizeOfItemAtIndex:
+ relativeOffsetOfItemAtIndex:withCenter:
+ reloadDataWithTransition:
+ perspectiveTargetView
+ vanishingPoint
+ itemAtIndex:
+ .cxx_destruct
- itemClass
- initWithFrame:
- dealloc
- setDataSource:
- didMoveToWindow
- reloadData
- layoutSubviews
- sizeThatFits:
- dataSource
- didMoveToSuperview
- items
- numberOfItems
- _normalizedDistanceFromVanishingPointForCenter:perspectiveTargetView:
- _relativeOffsetForMinimumRelativeOffset:maximumRelativeOffset:normalizedDistanceFromVanishingPoint:
- _dequeueReusableItem
- _centerInPerspectiveTargetViewCoordinates
- _applyLayoutToItem:atIndex:centerInPerspectiveTargetViewCoordinates:
- beginIgnoringDistanceUpdates
- endIgnoringDistanceUpdates
- forcesIntegralX
- forcesIntegralY
- itemReuseIdentifier
- maximumRelativeOffsetStep
- sizeInsetStep
- setForcesIntegralY:
- setMaximumRelativeOffsetStep:
- setSizeInsetStep:
- setForcesIntegralX:
- setPerspectiveTargetView:
- setVanishingPoint:
- updateForChangedDistanceFromVanishingPoint
- initWithFrame:itemClass:itemReuseIdentifier:
- baseSize
- setBaseSize:
- sizeOfItemAtIndex:
- relativeOffsetOfItemAtIndex:withCenter:
- reloadDataWithTransition:
- perspectiveTargetView
- vanishingPoint
- itemAtIndex:
- .cxx_destruct
@end
