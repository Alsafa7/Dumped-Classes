@interface EKTimeZone : NSObject
{
	id _name;
	pointer _internal;
	long long _lastStart;
	long long _lastEnd;
	usigned long long _lastIndex;
	double _offset;
}

+ abbreviationForDate:
+ abbreviation
+ secondsFromGMT
+ NSTimeZone
+ secondsFromGMTForAbsoluteTime:
+ nextDaylightSavingTimeTransitionAfterAbsoluteTime:
+ initWithOffset:name:
+ abbreviationForAbsoluteTime:
+ _indexForAbsoluteTime:
+ _abbreviationForIndex:
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ name
+ secondsFromGMTForDate:
+ initWithName:
- abbreviationForDate:
- abbreviation
- secondsFromGMT
- NSTimeZone
- secondsFromGMTForAbsoluteTime:
- nextDaylightSavingTimeTransitionAfterAbsoluteTime:
- initWithOffset:name:
- abbreviationForAbsoluteTime:
- _indexForAbsoluteTime:
- _abbreviationForIndex:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- name
- secondsFromGMTForDate:
- initWithName:
@end
