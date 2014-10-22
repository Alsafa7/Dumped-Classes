@interface NSSQLColumn : NSSQLProperty
{
	id _columnName;
	int _sqlType;
	unsigned int _precision;
	int _scale;
	unsigned int _fetchIndex;
	unsigned int _slot;
	unsigned int _allowAliasing;
}

+ initWithColumnName:sqlType:
+ setAllowAliasing:
+ allowAliasing
+ columnName
+ sqlType
+ slot
+ initWithEntity:propertyDescription:
+ _setSQLType:
+ initForReadOnlyFetching
+ _setColumnName:
+ copyValuesForReadOnlyFetch:
+ precision
+ setPrecision:
+ roughSizeEstimate
+ fetchIndex
+ _setFetchIndex:
+ _setSlotIfDefault:
+ cloneForReadOnlyFetching
+ dealloc
+ description
+ scale
+ setScale:
- initWithColumnName:sqlType:
- setAllowAliasing:
- allowAliasing
- columnName
- sqlType
- slot
- initWithEntity:propertyDescription:
- _setSQLType:
- initForReadOnlyFetching
- _setColumnName:
- copyValuesForReadOnlyFetch:
- precision
- setPrecision:
- roughSizeEstimate
- fetchIndex
- _setFetchIndex:
- _setSlotIfDefault:
- cloneForReadOnlyFetching
- dealloc
- description
- scale
- setScale:
@end
