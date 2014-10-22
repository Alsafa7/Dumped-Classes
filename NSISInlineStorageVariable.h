@interface NSISInlineStorageVariable : NSISVariable
{
	id _name;
	int _valueRestriction;
	BOOL _shouldBeMinimized;
}

+ valueRestriction
+ markedConstraint
+ shouldBeMinimized
+ setValueRestriction:
+ setShouldBeMinimized:
+ dealloc
+ setName:
+ name
+ nsis_valueOfVariable:didChangeInEngine:
+ nsis_descriptionOfVariable:
+ nsis_shouldIntegralizeVariable:
+ nsis_valueOfVariableIsUserObservable:
- valueRestriction
- markedConstraint
- shouldBeMinimized
- setValueRestriction:
- setShouldBeMinimized:
- dealloc
- setName:
- name
- nsis_valueOfVariable:didChangeInEngine:
- nsis_descriptionOfVariable:
- nsis_shouldIntegralizeVariable:
- nsis_valueOfVariableIsUserObservable:
@end
