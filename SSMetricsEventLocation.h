@interface SSMetricsEventLocation : NSObject
{
	long long _position;
	id _type;
	id _values;
}

+ setLocationPosition:
+ setLocationType:
+ setValue:forLocationKey:
+ reportingDictionary
+ valueForLocationKey:
+ locationPosition
+ locationType
+ .cxx_destruct
- setLocationPosition:
- setLocationType:
- setValue:forLocationKey:
- reportingDictionary
- valueForLocationKey:
- locationPosition
- locationType
- .cxx_destruct
@end
