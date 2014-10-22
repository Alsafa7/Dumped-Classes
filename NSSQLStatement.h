@interface NSSQLStatement : NSObject
{
	id _entity;
	id _bindVariables;
	id _bindIntarrays;
	id _sqlString;
	BOOL _isImpossibleCondition;
	id _fakeEntityForFetch;
}

+ addBindVariable:
+ setImpossibleCondition:
+ sqlString
+ initWithEntity:
+ initWithEntity:sqlString:
+ setSQLString:
+ bindIntarrays
+ isImpossibleCondition
+ clearCaches
+ fakeEntityForFetch
+ removeAllBindVariables
+ bindVariables
+ setBindVariables:
+ cacheFakeEntityForFetch:
+ setBindIntarrays:
+ addBindIntarray:
+ removeAllBindIntarrays
+ dealloc
+ description
+ isReadOnly
+ entity
- addBindVariable:
- setImpossibleCondition:
- sqlString
- initWithEntity:
- initWithEntity:sqlString:
- setSQLString:
- bindIntarrays
- isImpossibleCondition
- clearCaches
- fakeEntityForFetch
- removeAllBindVariables
- bindVariables
- setBindVariables:
- cacheFakeEntityForFetch:
- setBindIntarrays:
- addBindIntarray:
- removeAllBindIntarrays
- dealloc
- description
- isReadOnly
- entity
@end
