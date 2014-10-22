@interface NSKeyValueNestedProperty : NSKeyValueProperty
{
	id _relationshipKey;
	id _keyPathFromRelatedObject;
	id _relationshipProperty;
	id _keyPathWithoutOperatorComponents;
	BOOL _isAllowedToResultInForwarding;
	id _dependentValueKeyOrKeys;
	BOOL _dependentValueKeyOrKeysIsASet;
}

+ dependentValueKeyOrKeysIsASet:
+ object:didAddObservance:recurse:
+ object:didRemoveObservance:recurse:
+ matchesWithoutOperatorComponentsKeyPath:
+ object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:
+ object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:
+ _isaForAutonotifying
+ _keyPathIfAffectedByValueForKey:exactMatch:
+ _keyPathIfAffectedByValueForMemberOfKeys:
+ _givenPropertiesBeingInitialized:getAffectingProperties:
+ _addDependentValueKey:
+ _initWithContainerClass:keyPath:firstDotIndex:propertiesBeingInitialized:
+ dealloc
+ description
- dependentValueKeyOrKeysIsASet:
- object:didAddObservance:recurse:
- object:didRemoveObservance:recurse:
- matchesWithoutOperatorComponentsKeyPath:
- object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:
- object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:
- _isaForAutonotifying
- _keyPathIfAffectedByValueForKey:exactMatch:
- _keyPathIfAffectedByValueForMemberOfKeys:
- _givenPropertiesBeingInitialized:getAffectingProperties:
- _addDependentValueKey:
- _initWithContainerClass:keyPath:firstDotIndex:propertiesBeingInitialized:
- dealloc
- description
@end
