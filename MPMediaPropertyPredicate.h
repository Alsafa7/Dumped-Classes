@interface MPMediaPropertyPredicate : MPMediaPredicate
{
	id _property;
	id _value;
	long long _comparisonType;
}

+ ML3PredicateForTrack
+ ML3PredicateForContainer
+ _ML3PredicateForML3EntityProperty:
+ property
+ setProperty:
+ descriptionOfValue:forProperty:
+ setComparisonType:
+ comparisonType
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ setValue:
+ value
+ .cxx_destruct
- ML3PredicateForTrack
- ML3PredicateForContainer
- _ML3PredicateForML3EntityProperty:
- property
- setProperty:
- descriptionOfValue:forProperty:
- setComparisonType:
- comparisonType
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- setValue:
- value
- .cxx_destruct
@end
