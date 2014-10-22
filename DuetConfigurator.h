@interface DuetConfigurator : NSObject
{
	id bundle;
	id dictOfConfigurations;
	id appBlackMap;
	id appWhiteListArray;
	id sbDomain;
	id bkbdDDomain;
}

+ init
+ getStateFor:
+ appWhiteListArray
+ logAll:withMsg:withLevel:
+ logLight:withMsg:withLevel:
+ reloadBundleFromDisk
+ appBlackMap
+ loadBundleConfigurations
+ loadConfigurations:
+ updateSpringBoardConfiguration:
+ .cxx_destruct
- init
- getStateFor:
- appWhiteListArray
- logAll:withMsg:withLevel:
- logLight:withMsg:withLevel:
- reloadBundleFromDisk
- appBlackMap
- loadBundleConfigurations
- loadConfigurations:
- updateSpringBoardConfiguration:
- .cxx_destruct
@end
