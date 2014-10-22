@interface TICharacterSetDescription : NSObject
{
	id _characterSet;
	BOOL _inverted;
	long long _baseIdentifier;
	id _charactersAddedToBase;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ awakeAfterUsingCoder:
+ initWithBase:additionalCharacters:inverted:
+ baseIdentifier
+ inverted
+ charactersAddedToBase
+ newCharacterSetFromDescription
+ invertedSetDescription
+ clearCachedCharacterSet
+ setCharactersAddedToBase:
+ characterSet
+ initWithBaseCharacterSet:
+ initWithCharactersInString:
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- awakeAfterUsingCoder:
- initWithBase:additionalCharacters:inverted:
- baseIdentifier
- inverted
- charactersAddedToBase
- newCharacterSetFromDescription
- invertedSetDescription
- clearCachedCharacterSet
- setCharactersAddedToBase:
- characterSet
- initWithBaseCharacterSet:
- initWithCharactersInString:
@end
