@interface ADConnectionType : NSObject
{
	BOOL _WWAN;
	long long _technology;
}

+ isWWAN
+ technology
+ aggregatorConnectionType
+ diagnosticConnectionType
+ initWithTechnology:
+ setTechnology:
+ setWWAN:
- isWWAN
- technology
- aggregatorConnectionType
- diagnosticConnectionType
- initWithTechnology:
- setTechnology:
- setWWAN:
@end
