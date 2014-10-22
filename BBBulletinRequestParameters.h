@interface BBBulletinRequestParameters : NSObject
{
	usigned long long _publisherDestination;
	long long _maximumCount;
	id _enabledSectionIDs;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ maximumCount
+ initWithDestination:maximumCount:enabledSectionIDs:
+ enabledSectionIDs
+ publisherDestination
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- maximumCount
- initWithDestination:maximumCount:enabledSectionIDs:
- enabledSectionIDs
- publisherDestination
@end
