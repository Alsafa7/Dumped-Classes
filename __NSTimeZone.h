@interface __NSTimeZone : NSTimeZone
{
	pointer _name;
	pointer _data;
	pointer _ucal;
	int _lock;
}

+ daylightSavingTimeOffsetForDate:
+ abbreviationForDate:
+ isDaylightSavingTimeForDate:
+ localizedName:locale:
+ dealloc
+ data
+ name
+ nextDaylightSavingTimeTransitionAfterDate:
+ secondsFromGMTForDate:
+ finalize
- daylightSavingTimeOffsetForDate:
- abbreviationForDate:
- isDaylightSavingTimeForDate:
- localizedName:locale:
- dealloc
- data
- name
- nextDaylightSavingTimeTransitionAfterDate:
- secondsFromGMTForDate:
- finalize
@end
