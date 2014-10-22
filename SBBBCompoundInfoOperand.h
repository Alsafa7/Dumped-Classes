@interface SBBBCompoundInfoOperand : NSObject
{
	id _activeOperand;
	id _referenceOperand;
}

+ activeOperand
+ referenceOperand
+ isSectionOperand
+ initWithOperand:operand:
+ dealloc
+ isEqual:
+ hash
+ description
- activeOperand
- referenceOperand
- isSectionOperand
- initWithOperand:operand:
- dealloc
- isEqual:
- hash
- description
@end
