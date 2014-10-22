@interface BKSCFBundle : NSObject
{
	pointer _cfBundle;
}

+ dealloc
+ bundleIdentifier
+ infoDictionary
+ localizedStringForKey:value:table:
+ bundlePath
+ executablePath
+ pathForResource:ofType:
+ initWithPath:
+ localizedInfoDictionary
+ initWithCFBundle:
+ cfBundle
- dealloc
- bundleIdentifier
- infoDictionary
- localizedStringForKey:value:table:
- bundlePath
- executablePath
- pathForResource:ofType:
- initWithPath:
- localizedInfoDictionary
- initWithCFBundle:
- cfBundle
@end
