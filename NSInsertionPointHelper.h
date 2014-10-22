@interface NSInsertionPointHelper : NSObject
{
	struct _charRange;
	long long _writingDirection;
	usigned long long _count;
	usigned long long _altCount;
	pointer _logicalPositions;
	pointer _logicalLeftBoundaries;
	pointer _logicalRightBoundaries;
	pointer _logicalCharIndexes;
	pointer _displayPositions;
	pointer _displayCharIndexes;
	pointer _logicalAltPositions;
	pointer _logicalAltCharIndexes;
	pointer _displayAltPositions;
	pointer _displayAltCharIndexes;
}

+ dealloc
- dealloc
@end
