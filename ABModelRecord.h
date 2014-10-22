@interface ABModelRecord : NSObject
{
	int _recordID;
	pointer _sortKey;
	long long _highlightIndex;
	BOOL _isGroup;
	id _namePieces;
}

+ initWithRecordID:highlightIndex:group:namePieces:sortKey:
+ highlightIndex
+ namePieces
+ sortKey
+ dealloc
+ isGroup
+ recordID
- initWithRecordID:highlightIndex:group:namePieces:sortKey:
- highlightIndex
- namePieces
- sortKey
- dealloc
- isGroup
- recordID
@end
