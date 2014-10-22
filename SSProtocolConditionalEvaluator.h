@interface SSProtocolConditionalEvaluator : NSObject
{
	id _context;
	id _dictionary;
}

+ dealloc
+ init
+ initWithDictionary:
+ initWithDictionary:conditionalContext:
+ _dictionaryByEvaluatingWithForcedValue:
+ _dictionaryByEvaluatingDictionary:withForcedValue:
+ _arrayByEvaluatingChildrenOfArray:withForcedValue:
+ _logicalOperatorForString:
+ _checkConditions:withOperator:
+ _dictionaryByEvaluatingChildrenOfDictionary:withForcedValue:
+ dictionaryByEvaluatingConditions
+ dictionaryByRemovingConditions
- dealloc
- init
- initWithDictionary:
- initWithDictionary:conditionalContext:
- _dictionaryByEvaluatingWithForcedValue:
- _dictionaryByEvaluatingDictionary:withForcedValue:
- _arrayByEvaluatingChildrenOfArray:withForcedValue:
- _logicalOperatorForString:
- _checkConditions:withOperator:
- _dictionaryByEvaluatingChildrenOfDictionary:withForcedValue:
- dictionaryByEvaluatingConditions
- dictionaryByRemovingConditions
@end
