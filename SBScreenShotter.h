@interface SBScreenShotter : NSObject
{
	BOOL _writingScreenshot;
}

+ setWritingScreenshot:
+ writingScreenshot
+ finishedWritingScreenshot:didFinishSavingWithError:context:
+ saveScreenshot:
- setWritingScreenshot:
- writingScreenshot
- finishedWritingScreenshot:didFinishSavingWithError:context:
- saveScreenshot:
@end
