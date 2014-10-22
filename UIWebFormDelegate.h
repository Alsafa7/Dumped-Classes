@interface UIWebFormDelegate : NSObject
{
	id _webBrowserView;
	id _editedForms;
}

+ _shouldIgnoreFormTextChangesInFrame:
+ _didEditFormElement:inFrame:
+ _clearEditedFormsInFrame:
+ dealloc
+ acceptedAutoFillWord:
+ suggestionsForString:inputIndex:
+ hasCurrentSuggestions
+ textFieldDidBeginEditing:inFrame:
+ textFieldDidEndEditing:inFrame:
+ textDidChangeInTextField:inFrame:
+ textDidChangeInTextArea:inFrame:
+ didFocusTextField:inFrame:
+ textField:doCommandBySelector:inFrame:
+ frame:sourceFrame:willSubmitForm:withValues:submissionListener:
+ willSendSubmitEventToForm:inFrame:withValues:
+ initWithWebBrowserView:
+ dataSourceHasChangedForFrame:
+ formWasEdited
- _shouldIgnoreFormTextChangesInFrame:
- _didEditFormElement:inFrame:
- _clearEditedFormsInFrame:
- dealloc
- acceptedAutoFillWord:
- suggestionsForString:inputIndex:
- hasCurrentSuggestions
- textFieldDidBeginEditing:inFrame:
- textFieldDidEndEditing:inFrame:
- textDidChangeInTextField:inFrame:
- textDidChangeInTextArea:inFrame:
- didFocusTextField:inFrame:
- textField:doCommandBySelector:inFrame:
- frame:sourceFrame:willSubmitForm:withValues:submissionListener:
- willSendSubmitEventToForm:inFrame:withValues:
- initWithWebBrowserView:
- dataSourceHasChangedForFrame:
- formWasEdited
@end
