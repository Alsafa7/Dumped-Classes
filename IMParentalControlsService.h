@interface IMParentalControlsService : NSObject
{
	BOOL _disableService;
	BOOL _forceWhiteList;
	id _whitelist;
	id _name;
}

+ whitelist
+ dealloc
+ setName:
+ name
+ setWhitelist:
+ disableService
+ setDisableService:
+ forceWhiteList
+ setForceWhiteList:
- whitelist
- dealloc
- setName:
- name
- setWhitelist:
- disableService
- setDisableService:
- forceWhiteList
- setForceWhiteList:
@end
