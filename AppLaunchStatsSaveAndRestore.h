@interface AppLaunchStatsSaveAndRestore : NSObject
{
	BOOL allowSave;
	BOOL hasSavedData;
	id aplsSaveAndRestoreQueue;
	id saveRestoreObjects;
	id saveRestoreDefaults;
}

+ addDataSource:
+ init
+ getList:
+ createBasicStoreStructure
+ getDict:
+ getString:
+ quickSave:forKey:
+ restoreAll
+ saveAll
+ saveState:withKey:
+ allowSave
+ setAllowSave:
+ hasSavedData
+ .cxx_destruct
- addDataSource:
- init
- getList:
- createBasicStoreStructure
- getDict:
- getString:
- quickSave:forKey:
- restoreAll
- saveAll
- saveState:withKey:
- allowSave
- setAllowSave:
- hasSavedData
- .cxx_destruct
@end
