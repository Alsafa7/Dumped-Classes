@interface BasicAceContext : NSObject
{
	id _groupMap;
}

+ dealloc
+ init
+ classWithClassName:group:
+ aceObjectWithDictionary:
+ registerGroupAcronym:forGroupWithIdentifier:
- dealloc
- init
- classWithClassName:group:
- aceObjectWithDictionary:
- registerGroupAcronym:forGroupWithIdentifier:
@end
