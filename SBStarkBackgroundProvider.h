@interface SBStarkBackgroundProvider : NSObject
{
	id _serviceName;
	id _viewControllerClassName;
	usigned long long _priority;
}

+ viewControllerClassName
+ initWithServiceName:viewControllerClassName:priority:
+ initWithServiceName:options:
+ serviceName
+ dealloc
+ description
+ priority
- viewControllerClassName
- initWithServiceName:viewControllerClassName:priority:
- initWithServiceName:options:
- serviceName
- dealloc
- description
- priority
@end
