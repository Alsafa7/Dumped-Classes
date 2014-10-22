@interface MFComposeTextField : UITextField
{
	BOOL _isShowingDictationPlaceholder;
}

+ insertDictationResultPlaceholder
+ removeDictationResultPlaceholder:willInsertResult:
+ isShowingDictationPlaceholder
- insertDictationResultPlaceholder
- removeDictationResultPlaceholder:willInsertResult:
- isShowingDictationPlaceholder
@end
