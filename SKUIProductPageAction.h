@interface SKUIProductPageAction : NSObject
{
	long long _actionType;
	id _urlTitle;
	id _viewControllerBlock;
	id _url;
}

+ viewController
+ URL
+ setURL:
+ setActionType:
+ actionType
+ viewControllerBlock
+ setViewControllerBlock:
+ .cxx_destruct
- viewController
- URL
- setURL:
- setActionType:
- actionType
- viewControllerBlock
- setViewControllerBlock:
- .cxx_destruct
@end
