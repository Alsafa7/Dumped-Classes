@interface SUDialogManager : NSObject
{
	id _dialogs;
}

+ dealloc
+ presentDialog:
+ numberOfPendingDialogs
+ _performDefaultActionForDialog:buttonIndex:
+ presentDialog:withCompletionBlock:
+ _haveEquivalentDialog:
+ _finishDialog:withButtonIndex:
+ presentDialogForError:withCompletionBlock:
+ dialog:didDismissWithButtonIndex:
+ dialogDidCancel:
+ presentDialogForError:
- dealloc
- presentDialog:
- numberOfPendingDialogs
- _performDefaultActionForDialog:buttonIndex:
- presentDialog:withCompletionBlock:
- _haveEquivalentDialog:
- _finishDialog:withButtonIndex:
- presentDialogForError:withCompletionBlock:
- dialog:didDismissWithButtonIndex:
- dialogDidCancel:
- presentDialogForError:
@end
