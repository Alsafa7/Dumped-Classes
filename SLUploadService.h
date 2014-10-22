@interface SLUploadService : NSObject
{
	id _session;
	id _XPCServiceName;
	id _notificationNames;
	long long _bulletinSubtype;
	id _variantIconResourceName;
}

+ bulletinSubtype
+ initWithXPCServiceName:notificationNames:bulletinSubtype:variantIconResourceName:
+ XPCServiceName
+ notificationNames
+ variantIconResourceName
+ setXPCServiceName:
+ setNotificationNames:
+ session
+ .cxx_destruct
- bulletinSubtype
- initWithXPCServiceName:notificationNames:bulletinSubtype:variantIconResourceName:
- XPCServiceName
- notificationNames
- variantIconResourceName
- setXPCServiceName:
- setNotificationNames:
- session
- .cxx_destruct
@end
