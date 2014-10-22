@interface MailAccountViewsProvider : NSObject
{

}

+ viewControllerClassForCreatingAccountWithType:
+ configurationInfoForCreatingAccountWithType:
+ viewControllerClassForViewingAccount:
+ configurationInfoForViewingAccount:
+ supportedAccountTypeIdentifiers
- viewControllerClassForCreatingAccountWithType:
- configurationInfoForCreatingAccountWithType:
- viewControllerClassForViewingAccount:
- configurationInfoForViewingAccount:
- supportedAccountTypeIdentifiers
@end
