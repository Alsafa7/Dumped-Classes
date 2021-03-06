@interface TIKeyboardState : NSObject
{
	union _mask;
	id _inputMode;
	id _keyLayout;
	id _layoutState;
	id _documentState;
	id _inputForMarkedText;
	id _searchStringForMarkedText;
	id _currentCandidate;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ autocapitalizationType
+ setAutocapitalizationType:
+ keyboardType
+ setKeyboardType:
+ currentCandidate
+ setHardwareKeyboardMode:
+ setTypologyLoggingEnabled:
+ setInputMode:
+ layoutState
+ setLayoutState:
+ setCurrentCandidate:
+ setNeedsCandidateMetadata:
+ setShortcutConversionEnabled:
+ keyLayout
+ setKeyLayout:
+ setAutocorrectionEnabled:
+ splitKeyboardMode
+ setSplitKeyboardMode:
+ setWordLearningEnabled:
+ setDocumentState:
+ setShouldSkipCandidateSelection:
+ setInputForMarkedText:
+ setSearchStringForMarkedText:
+ documentState
+ searchStringForMarkedText
+ inputMode
+ hardwareKeyboardMode
+ setAutocapitalizationEnabled:
+ shouldSkipCandidateSelection
+ suppressingCandidateSelection
+ setSuppressingCandidateSelection:
+ setUserSelectedCurrentCandidate:
+ userSelectedCurrentCandidate
+ inputForMarkedText
+ setKeyboardEventsLagging:
+ typologyLoggingEnabled
+ autocapitalizationEnabled
+ autocorrectionEnabled
+ keyboardEventsLagging
+ wordLearningEnabled
+ needsCandidateMetadata
+ shortcutConversionEnabled
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- autocapitalizationType
- setAutocapitalizationType:
- keyboardType
- setKeyboardType:
- currentCandidate
- setHardwareKeyboardMode:
- setTypologyLoggingEnabled:
- setInputMode:
- layoutState
- setLayoutState:
- setCurrentCandidate:
- setNeedsCandidateMetadata:
- setShortcutConversionEnabled:
- keyLayout
- setKeyLayout:
- setAutocorrectionEnabled:
- splitKeyboardMode
- setSplitKeyboardMode:
- setWordLearningEnabled:
- setDocumentState:
- setShouldSkipCandidateSelection:
- setInputForMarkedText:
- setSearchStringForMarkedText:
- documentState
- searchStringForMarkedText
- inputMode
- hardwareKeyboardMode
- setAutocapitalizationEnabled:
- shouldSkipCandidateSelection
- suppressingCandidateSelection
- setSuppressingCandidateSelection:
- setUserSelectedCurrentCandidate:
- userSelectedCurrentCandidate
- inputForMarkedText
- setKeyboardEventsLagging:
- typologyLoggingEnabled
- autocapitalizationEnabled
- autocorrectionEnabled
- keyboardEventsLagging
- wordLearningEnabled
- needsCandidateMetadata
- shortcutConversionEnabled
@end
