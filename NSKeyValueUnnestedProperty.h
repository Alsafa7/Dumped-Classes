@interface NSKeyValueUnnestedProperty : NSKeyValueProperty
{
	id _affectingProperties;
	BOOL _cachedIsaForAutonotifyingIsValid;
	Class _cachedIsaForAutonotifying;
}

+ object:didAddObservance:recurse:
+ isaForAutonotifying
+ object:didRemoveObservance:recurse:
+ matchesWithoutOperatorComponentsKeyPath:
+ object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:
+ keyPathIfAffectedByValueForMemberOfKeys:
+ keyPathIfAffectedByValueForKey:exactMatch:
+ object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:
+ _isaForAutonotifying
+ _keyPathIfAffectedByValueForKey:exactMatch:
+ _keyPathIfAffectedByValueForMemberOfKeys:
+ _givenPropertiesBeingInitialized:getAffectingProperties:
+ _addDependentValueKey:
+ _initWithContainerClass:key:propertiesBeingInitialized:
+ dealloc
+ description
- object:didAddObservance:recurse:
- isaForAutonotifying
- object:didRemoveObservance:recurse:
- matchesWithoutOperatorComponentsKeyPath:
- object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:
- keyPathIfAffectedByValueForMemberOfKeys:
- keyPathIfAffectedByValueForKey:exactMatch:
- object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:
- _isaForAutonotifying
- _keyPathIfAffectedByValueForKey:exactMatch:
- _keyPathIfAffectedByValueForMemberOfKeys:
- _givenPropertiesBeingInitialized:getAffectingProperties:
- _addDependentValueKey:
- _initWithContainerClass:key:propertiesBeingInitialized:
- dealloc
- description
@end
