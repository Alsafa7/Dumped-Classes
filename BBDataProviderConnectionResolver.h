@interface BBDataProviderConnectionResolver : NSObject
{
	id _connection;
	id _establishedBlock;
}

+ dealloc
+ invalidate
+ proxy:detailedSignatureForSelector:
+ connection:connectionStateDidChange:
+ establishSectionID:completion:
+ initWithConnection:queue:completion:
- dealloc
- invalidate
- proxy:detailedSignatureForSelector:
- connection:connectionStateDidChange:
- establishSectionID:completion:
- initWithConnection:queue:completion:
@end
