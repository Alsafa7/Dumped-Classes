@interface NSISObjectiveLinearExpression : NSObject
{
	pointer _priorityMap;
	id _variablesSortedByPriorityVectors;
	pointer _constant;
}

+ verifyInternalIntegrity
+ enumerateVariables:
+ removeVariable:
+ addVariable:priority:times:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ addExpression:priority:times:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ replaceVariable:withExpression:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ replaceVariable:withVariablePlusDelta:timesVariable:processVariableNewToReceiver:processVariableDroppedFromReceiver:
+ restrictedVariableWithCoefficientOfLargestNegativeMagnitude
+ leadingPriority:andValue:forVariable:
+ initWithLinearExpression:priority:
+ constantTermIsZero
+ replaceVariable:withVariablePlusDelta:
+ variableCount
+ addVariable:priority:times:
+ incrementConstantWithPriority:value:
+ priorityVectorForVariable:
+ setPriorityVector:forKnownAbsentVariable:
+ incrementConstantWithPriorityVector:timesScalarCoefficient:
+ dealloc
+ init
+ description
- verifyInternalIntegrity
- enumerateVariables:
- removeVariable:
- addVariable:priority:times:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- addExpression:priority:times:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- replaceVariable:withExpression:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- replaceVariable:withVariablePlusDelta:timesVariable:processVariableNewToReceiver:processVariableDroppedFromReceiver:
- restrictedVariableWithCoefficientOfLargestNegativeMagnitude
- leadingPriority:andValue:forVariable:
- initWithLinearExpression:priority:
- constantTermIsZero
- replaceVariable:withVariablePlusDelta:
- variableCount
- addVariable:priority:times:
- incrementConstantWithPriority:value:
- priorityVectorForVariable:
- setPriorityVector:forKnownAbsentVariable:
- incrementConstantWithPriorityVector:timesScalarCoefficient:
- dealloc
- init
- description
@end
