@interface RTLocationOfInterest : NSObject
{
	id _location;
	id _identifier;
	long long _type;
	id _placeResult;
	id _nextEntryTime;
	id _visits;
}

+ name
+ relativeNameToPlaceResult:
+ localizedLastVisitDescription
+ localizedAllVisitsDescription
+ recentCompare:
+ frequencyCompare:
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ description
+ type
+ copyWithZone:
+ identifier
+ location
+ nextEntryTime
+ visits
+ initWithLocation:identifier:type:placeResult:nextEntryTime:visits:
+ placeResult
+ .cxx_destruct
- name
- relativeNameToPlaceResult:
- localizedLastVisitDescription
- localizedAllVisitsDescription
- recentCompare:
- frequencyCompare:
- initWithCoder:
- encodeWithCoder:
- isEqual:
- description
- type
- copyWithZone:
- identifier
- location
- nextEntryTime
- visits
- initWithLocation:identifier:type:placeResult:nextEntryTime:visits:
- placeResult
- .cxx_destruct
@end
