@interface NSSQLConstantValueIntermediate : NSSQLIntermediate
{
	unsigned int _type;
	id _constantValue;
}

+ generateSQLStringInContext:
+ initWithConstantValue:inScope:
+ propertyAtEndOfKeyPathExpression:
+ sqlTypeForProperty:
+ _addBindVarForConstId:ofType:inContext:
+ _addBindVarForConstVal1:inContext:
+ initWithConstantValue:ofType:inScope:
+ dealloc
- generateSQLStringInContext:
- initWithConstantValue:inScope:
- propertyAtEndOfKeyPathExpression:
- sqlTypeForProperty:
- _addBindVarForConstId:ofType:inContext:
- _addBindVarForConstVal1:inContext:
- initWithConstantValue:ofType:inScope:
- dealloc
@end
