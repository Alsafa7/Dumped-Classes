@interface UIKeyboardAutocorrectionController : NSObject
{
	id _autocorrection;
	BOOL _needsAutocorrection;
	BOOL _deferredAutocorrection;
	BOOL _requestedAutocorrection;
}

+ dealloc
+ autocorrection
+ hasAutocorrection
+ setAutocorrection:
+ setNeedsAutocorrection
+ needsAutocorrection
+ requestedAutocorrection
+ requestAutocorrectionWithExecutionContext:
+ setNeedsAutocorrection:
+ deferredAutocorrection
+ setDeferredAutocorrection:
+ setRequestedAutocorrection:
- dealloc
- autocorrection
- hasAutocorrection
- setAutocorrection:
- setNeedsAutocorrection
- needsAutocorrection
- requestedAutocorrection
- requestAutocorrectionWithExecutionContext:
- setNeedsAutocorrection:
- deferredAutocorrection
- setDeferredAutocorrection:
- setRequestedAutocorrection:
@end
