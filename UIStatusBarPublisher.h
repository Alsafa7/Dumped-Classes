@interface UIStatusBarPublisher : NSObject
{
	pointer _machPort;
	int _styleOverrides;
	id _statusBarItems;
}

+ dealloc
+ addStyleOverrides:
+ removeStyleOverrides:
+ addStatusBarItem:
+ removeStatusBarItem:
+ publisherPort
+ initWithCFMachPort:
+ statusBarItems
+ styleOverrides
- dealloc
- addStyleOverrides:
- removeStyleOverrides:
- addStatusBarItem:
- removeStatusBarItem:
- publisherPort
- initWithCFMachPort:
- statusBarItems
- styleOverrides
@end
