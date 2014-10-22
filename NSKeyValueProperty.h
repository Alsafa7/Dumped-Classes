@interface NSKeyValueProperty : NSObject
{
	id _containerClass;
	id _keyPath;
}

+ dependentValueKeyOrKeysIsASet:
+ object:didAddObservance:recurse:
+ isaForAutonotifying
+ object:didRemoveObservance:recurse:
+ restOfKeyPathIfContainedByValueForKeyPath:
+ matchesWithoutOperatorComponentsKeyPath:
+ object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:
+ keyPathIfAffectedByValueForMemberOfKeys:
+ keyPathIfAffectedByValueForKey:exactMatch:
+ object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:
+ _initWithContainerClass:keyPath:propertiesBeingInitialized:
+ dealloc
+ copyWithZone:
+ keyPath
- dependentValueKeyOrKeysIsASet:
- object:didAddObservance:recurse:
- isaForAutonotifying
- object:didRemoveObservance:recurse:
- restOfKeyPathIfContainedByValueForKeyPath:
- matchesWithoutOperatorComponentsKeyPath:
- object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:
- keyPathIfAffectedByValueForMemberOfKeys:
- keyPathIfAffectedByValueForKey:exactMatch:
- object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:
- _initWithContainerClass:keyPath:propertiesBeingInitialized:
- dealloc
- copyWithZone:
- keyPath
@end
