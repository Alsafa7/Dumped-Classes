@interface ABPersonLinker : NSObject
{
	pointer _addressBook;
	id _peopleByFirstName;
	id _peopleByLastName;
	id _peopleByOrganization;
}

+ initWithAddressBook:
+ makeInitialLinks
+ linkRecentlyAddedPeople
+ otherPeopleInDatabaseMatchingPerson:notIncludingPeople:
+ shouldLinkPerson:toPeopleInDatabase:andNewlyAddedPeople:inInitialLinking:
+ addPerson:toDictionary:withProperty:
+ removeAllLinks
+ presortPeople:
+ otherPeopleInArray:matchingPerson:
+ makeLinksForAddedPeople:inInitialLinking:countingOuterIterations:
+ makeInitialLinksCountingOuterIterations:
+ copyArrayOfAllPeopleWithROWIDGreatThan:withLimit:
+ linkRecentlyAddedPeopleWithLimit:
+ suggestedPeopleToLinkWithPerson:isInitialLinking:
+ linkNewlyAddedPerson:
+ dealloc
+ init
- initWithAddressBook:
- makeInitialLinks
- linkRecentlyAddedPeople
- otherPeopleInDatabaseMatchingPerson:notIncludingPeople:
- shouldLinkPerson:toPeopleInDatabase:andNewlyAddedPeople:inInitialLinking:
- addPerson:toDictionary:withProperty:
- removeAllLinks
- presortPeople:
- otherPeopleInArray:matchingPerson:
- makeLinksForAddedPeople:inInitialLinking:countingOuterIterations:
- makeInitialLinksCountingOuterIterations:
- copyArrayOfAllPeopleWithROWIDGreatThan:withLimit:
- linkRecentlyAddedPeopleWithLimit:
- suggestedPeopleToLinkWithPerson:isInitialLinking:
- linkNewlyAddedPerson:
- dealloc
- init
@end
