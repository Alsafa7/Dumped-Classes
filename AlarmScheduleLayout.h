@interface AlarmScheduleLayout : UICollectionViewLayout
{
	BOOL _needsRefreshDateInfo;
	long long _firstDayOfWeek;
	id _calendar;
	id _now;
	id _nowComps;
	id _alarmIdForSection;
	id _layoutDataMap;
	Array _itemZOrder;
	Array _overlappingItemLists;
	id _pendingFrontIndexPath;
	id _pendingUpdatedAlarmId;
	long long _pendingUpdatedAlarmAction;
	BOOL _needsRefreshLayout;
	id _changedAlarmIds;
	id _pendingSnoozeChangedAlarms;
	long long _dragState;
	id _draggingLayoutData;
	double _dragXStartLocation;
	double _dragYOffset;
	struct _pendingDragLocation;
	id _dragCompletionBlock;
	id _nextNonRepeatingAlarmTimer;
	id _cachedAttributes;
	id _previousCachedAttributes;
	Array _cachedAttributesAlarmMap;
	Array _previousCachedAttributesAlarmMap;
	id _previousAlarmIdForSection;
	id _reloadedAlarms;
	id _dayOfOverlappingReloadedAlarms;
}

+ bringAlarmToFront:
+ isAlarmOverlapping:
+ cycleAlarmToBack:
+ beginDraggingAlarmId:fromLocationInSuperview:
+ dragAlarmToLocationInSuperview:completion:
+ endDraggingAlarmWithInvalidation:
+ setPendingUpdatedAlarmId:action:
+ addPendingSnoozeChangedForAlarmId:
+ setNeedsRefreshLayoutWithChangedAlarmIds:
+ currentDayOfWeek
+ setNeedsRefreshDateInfo
+ nowComps
+ refreshDateInfo
+ setNeedsRefreshDateInfoWithInvalidation:
+ resetEverything
+ handleNextNonRepeatingAlarm
+ fullyOverlappingAlarmsForAlarm:forDay:
+ resetAllAlarmLayout
+ resetAllAlarmOperations
+ calculateLayoutForAllAlarms
+ handleReloadOfAlarm:
+ handleInsertOfAlarm:
+ handleDeleteOfAlarm:
+ columnIndexForX:
+ handleDeleteOfAlarm:forDays:
+ handleInsertOfAlarm:atZIndex:forDays:
+ scheduleTimerForNextNonRepeatingAlarm
+ determineOverlappingItemListsForAlarms:onDay:
+ sortLayoutDataByTime:forDay:
+ handleNoLongerOverlappingAlarm:forDay:
+ daysVisibleInRect:
+ timesVisibleInRect:
+ now
+ dealloc
+ init
+ collectionViewContentSize
+ layoutAttributesForItemAtIndexPath:
+ columnWidth
+ prepareLayout
+ layoutAttributesForElementsInRect:
+ shouldInvalidateLayoutForBoundsChange:
+ finalLayoutAttributesForDisappearingItemAtIndexPath:
+ initialLayoutAttributesForAppearingItemAtIndexPath:
+ prepareForCollectionViewUpdates:
+ finalizeCollectionViewUpdates
+ firstDayOfWeek
+ leftMargin
+ rightMargin
- bringAlarmToFront:
- isAlarmOverlapping:
- cycleAlarmToBack:
- beginDraggingAlarmId:fromLocationInSuperview:
- dragAlarmToLocationInSuperview:completion:
- endDraggingAlarmWithInvalidation:
- setPendingUpdatedAlarmId:action:
- addPendingSnoozeChangedForAlarmId:
- setNeedsRefreshLayoutWithChangedAlarmIds:
- currentDayOfWeek
- setNeedsRefreshDateInfo
- nowComps
- refreshDateInfo
- setNeedsRefreshDateInfoWithInvalidation:
- resetEverything
- handleNextNonRepeatingAlarm
- fullyOverlappingAlarmsForAlarm:forDay:
- resetAllAlarmLayout
- resetAllAlarmOperations
- calculateLayoutForAllAlarms
- handleReloadOfAlarm:
- handleInsertOfAlarm:
- handleDeleteOfAlarm:
- columnIndexForX:
- handleDeleteOfAlarm:forDays:
- handleInsertOfAlarm:atZIndex:forDays:
- scheduleTimerForNextNonRepeatingAlarm
- determineOverlappingItemListsForAlarms:onDay:
- sortLayoutDataByTime:forDay:
- handleNoLongerOverlappingAlarm:forDay:
- daysVisibleInRect:
- timesVisibleInRect:
- now
- dealloc
- init
- collectionViewContentSize
- layoutAttributesForItemAtIndexPath:
- columnWidth
- prepareLayout
- layoutAttributesForElementsInRect:
- shouldInvalidateLayoutForBoundsChange:
- finalLayoutAttributesForDisappearingItemAtIndexPath:
- initialLayoutAttributesForAppearingItemAtIndexPath:
- prepareForCollectionViewUpdates:
- finalizeCollectionViewUpdates
- firstDayOfWeek
- leftMargin
- rightMargin
@end
