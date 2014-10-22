@interface MPReshuffledArrayIndexMap : NSObject
{
	usigned long long _arrayCount;
	usigned long long _identityIndexesCount;
	id _shuffledIndexesQueue;
	id _shuffledIndexesData;
	struct _focusedRange;
	BOOL _autoReshufflingDisabled;
}

+ initWithSourceArrayCount:identityIndexesCount:
+ _canExtendShuffleMapToCount:
+ _onQueueExtendMap
+ initWithSourceArrayCount:identityArraysCount:
+ countOfArrayIndexMappings
+ sourceArrayIndexForIndex:
+ focusedRange
+ setFocusedRange:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ copyWithZone:
+ .cxx_destruct
- initWithSourceArrayCount:identityIndexesCount:
- _canExtendShuffleMapToCount:
- _onQueueExtendMap
- initWithSourceArrayCount:identityArraysCount:
- countOfArrayIndexMappings
- sourceArrayIndexForIndex:
- focusedRange
- setFocusedRange:
- dealloc
- initWithCoder:
- encodeWithCoder:
- copyWithZone:
- .cxx_destruct
@end
