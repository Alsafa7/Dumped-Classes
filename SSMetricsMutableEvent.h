@interface SSMetricsMutableEvent : SSMetricsEvent
{
	id _mutableBody;
}

+ dealloc
+ init
+ debugDescription
+ mutableCopyWithZone:
+ initWithBodyDictionary:
+ bodyDictionary
+ appendPropertiesToBody:
+ addPropertiesWithDictionary:
+ propertyForBodyKey:
+ setProperty:forBodyKey:
- dealloc
- init
- debugDescription
- mutableCopyWithZone:
- initWithBodyDictionary:
- bodyDictionary
- appendPropertiesToBody:
- addPropertiesWithDictionary:
- propertyForBodyKey:
- setProperty:forBodyKey:
@end
