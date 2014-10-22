@interface NSISLinearExpression : NSObject
{
	unsigned int inline_capacity;
	unsigned int var_count;
	double constant;
	union data;
}

+ verifyInternalIntegrity
+ enumerateVariablesAndCoefficients:
+ enumerateVariables:
+ removeVariable:
+ addVariable:coefficient:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ addExpression:times:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ replaceVariable:withExpression:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ coefficientForVariable:
+ replaceVariable:withVariable:coefficient:
+ replaceVariable:withVariablePlusDelta:timesVariable:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ copyContentsAndReturnToPool
+ enumerateVariablesAndCoefficientsUntil:
+ isConstant
+ replaceVariable:withVariablePlusDelta:
+ variableCount
+ initWithInlineCapacity:
+ setCoefficient:forVariable:
+ variablesArray
+ returnToPool
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ init
+ description
+ copyWithZone:
+ setConstant:
+ constant
+ addVariable:coefficient:
+ addExpression:times:
+ incrementConstant:
+ scaleBy:
- verifyInternalIntegrity
- enumerateVariablesAndCoefficients:
- enumerateVariables:
- removeVariable:
- addVariable:coefficient:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- addExpression:times:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- replaceVariable:withExpression:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- coefficientForVariable:
- replaceVariable:withVariable:coefficient:
- replaceVariable:withVariablePlusDelta:timesVariable:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- copyContentsAndReturnToPool
- enumerateVariablesAndCoefficientsUntil:
- isConstant
- replaceVariable:withVariablePlusDelta:
- variableCount
- initWithInlineCapacity:
- setCoefficient:forVariable:
- variablesArray
- returnToPool
- dealloc
- countByEnumeratingWithState:objects:count:
- init
- description
- copyWithZone:
- setConstant:
- constant
- addVariable:coefficient:
- addExpression:times:
- incrementConstant:
- scaleBy:
@end
