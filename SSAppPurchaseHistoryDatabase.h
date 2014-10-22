@interface SSAppPurchaseHistoryDatabase : NSObject
{
	id _database;
}

+ database
+ dealloc
+ init
+ valueForDatabaseProperty:
+ setValue:forDatabaseProperty:
+ readAsyncUsingTransactionBlock:
+ initWithDatabaseURL:readOnly:
+ readUsingTransactionBlock:
+ modifyUsingAppPurchaseHistoryTransactionBlock:
+ currentAccountUniqueIdentifier
+ localRevisionForAccountUniqueIdentifier:
+ setLocalRevision:forAccountUniqueIdentifier:
+ allProperties:accountID:includingHidden:
+ resetCacheForNewAccountID:
- database
- dealloc
- init
- valueForDatabaseProperty:
- setValue:forDatabaseProperty:
- readAsyncUsingTransactionBlock:
- initWithDatabaseURL:readOnly:
- readUsingTransactionBlock:
- modifyUsingAppPurchaseHistoryTransactionBlock:
- currentAccountUniqueIdentifier
- localRevisionForAccountUniqueIdentifier:
- setLocalRevision:forAccountUniqueIdentifier:
- allProperties:accountID:includingHidden:
- resetCacheForNewAccountID:
@end
