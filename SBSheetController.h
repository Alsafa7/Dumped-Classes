@interface SBSheetController : NSObject
{
	id _appToSheetMap;
	id _presentationWindow;
	id _topHostedApp;
	id _topHostedAppView;
}

+ isShowingSheetsForApplication:
+ dismissAllSheets
+ isShowingSheets
+ applicationForTopSheet
+ dismissSheetsForApplication:
+ presentRemoteViewIdentifier:asSheetForApplication:requireTopApplication:animated:
+ dismissRemoteViewIdentifier:forApplication:animated:
+ _positionFakeStatusBarView:forOrientation:
+ _tearDownSheet:
+ presentSheetView:animated:
+ dismissSheetView:animated:
+ sendStatusBarOrientationWillChangeToSheets:duration:
+ sheetWantsProgress
+ dealloc
+ init
- isShowingSheetsForApplication:
- dismissAllSheets
- isShowingSheets
- applicationForTopSheet
- dismissSheetsForApplication:
- presentRemoteViewIdentifier:asSheetForApplication:requireTopApplication:animated:
- dismissRemoteViewIdentifier:forApplication:animated:
- _positionFakeStatusBarView:forOrientation:
- _tearDownSheet:
- presentSheetView:animated:
- dismissSheetView:animated:
- sendStatusBarOrientationWillChangeToSheets:duration:
- sheetWantsProgress
- dealloc
- init
@end
