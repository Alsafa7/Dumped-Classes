@interface UITextInputTraits : NSObject
{
	long long autocapitalizationType;
	long long autocorrectionType;
	long long spellCheckingType;
	bit[8] keyboardType;
	bit[8] keyboardAppearance;
	long long returnKeyType;
	BOOL enablesReturnKeyAutomatically;
	BOOL secureTextEntry;
	pointer textTrimmingSet;
	id insertionPointColor;
	id selectionBarColor;
	id selectionHighlightColor;
	id selectionDragDotImage;
	usigned long long insertionPointWidth;
	int textLoupeVisibility;
	int textSelectionBehavior;
	id textSuggestionDelegate;
	BOOL isSingleLineDocument;
	BOOL contentsIsSingleValue;
	BOOL acceptsEmoji;
	BOOL returnKeyGoesToNextResponder;
	BOOL acceptsFloatingKeyboard;
	BOOL acceptsSplitKeyboard;
	BOOL displaySecureTextUsingPlainText;
	BOOL learnsCorrections;
	int emptyContentReturnKeyType;
	int shortcutConversionType;
	BOOL suppressReturnKeyStyling;
	BOOL forceEnableDictation;
	BOOL useInterfaceLanguageForLocalization;
	BOOL deferBecomingResponder;
	BOOL enablesReturnKeyOnNonWhiteSpaceContent;
}

+ _setColorsToMatchTintColor:
+ dealloc
+ init
+ isEqual:
+ description
+ copyWithZone:
+ setToDefaultValues
+ takeTraitsFrom:
+ textSelectionBehavior
+ keyboardAppearance
+ setSecureTextEntry:
+ isSecureTextEntry
+ displaySecureTextUsingPlainText
+ autocapitalizationType
+ setAutocapitalizationType:
+ autocorrectionType
+ setAutocorrectionType:
+ spellCheckingType
+ setSpellCheckingType:
+ keyboardType
+ setKeyboardType:
+ setKeyboardAppearance:
+ returnKeyType
+ setReturnKeyType:
+ enablesReturnKeyAutomatically
+ setEnablesReturnKeyAutomatically:
+ textTrimmingSet
+ acceptsSplitKeyboard
+ shortcutConversionType
+ acceptsFloatingKeyboard
+ learnsCorrections
+ setLearnsCorrections:
+ setTextTrimmingSet:
+ insertionPointColor
+ setInsertionPointColor:
+ selectionBarColor
+ setSelectionBarColor:
+ selectionHighlightColor
+ setSelectionHighlightColor:
+ selectionDragDotImage
+ setSelectionDragDotImage:
+ insertionPointWidth
+ setInsertionPointWidth:
+ textLoupeVisibility
+ setTextLoupeVisibility:
+ setTextSelectionBehavior:
+ textSuggestionDelegate
+ setTextSuggestionDelegate:
+ isSingleLineDocument
+ setIsSingleLineDocument:
+ contentsIsSingleValue
+ setContentsIsSingleValue:
+ acceptsEmoji
+ setAcceptsEmoji:
+ emptyContentReturnKeyType
+ setEmptyContentReturnKeyType:
+ returnKeyGoesToNextResponder
+ setReturnKeyGoesToNextResponder:
+ setAcceptsFloatingKeyboard:
+ setAcceptsSplitKeyboard:
+ setDisplaySecureTextUsingPlainText:
+ setShortcutConversionType:
+ suppressReturnKeyStyling
+ setSuppressReturnKeyStyling:
+ forceEnableDictation
+ setForceEnableDictation:
+ useInterfaceLanguageForLocalization
+ setUseInterfaceLanguageForLocalization:
+ deferBecomingResponder
+ setDeferBecomingResponder:
+ enablesReturnKeyOnNonWhiteSpaceContent
+ setEnablesReturnKeyOnNonWhiteSpaceContent:
+ dictionaryRepresentation
+ setToSecureValues
+ publicTraitsMatchTraits:
- _setColorsToMatchTintColor:
- dealloc
- init
- isEqual:
- description
- copyWithZone:
- setToDefaultValues
- takeTraitsFrom:
- textSelectionBehavior
- keyboardAppearance
- setSecureTextEntry:
- isSecureTextEntry
- displaySecureTextUsingPlainText
- autocapitalizationType
- setAutocapitalizationType:
- autocorrectionType
- setAutocorrectionType:
- spellCheckingType
- setSpellCheckingType:
- keyboardType
- setKeyboardType:
- setKeyboardAppearance:
- returnKeyType
- setReturnKeyType:
- enablesReturnKeyAutomatically
- setEnablesReturnKeyAutomatically:
- textTrimmingSet
- acceptsSplitKeyboard
- shortcutConversionType
- acceptsFloatingKeyboard
- learnsCorrections
- setLearnsCorrections:
- setTextTrimmingSet:
- insertionPointColor
- setInsertionPointColor:
- selectionBarColor
- setSelectionBarColor:
- selectionHighlightColor
- setSelectionHighlightColor:
- selectionDragDotImage
- setSelectionDragDotImage:
- insertionPointWidth
- setInsertionPointWidth:
- textLoupeVisibility
- setTextLoupeVisibility:
- setTextSelectionBehavior:
- textSuggestionDelegate
- setTextSuggestionDelegate:
- isSingleLineDocument
- setIsSingleLineDocument:
- contentsIsSingleValue
- setContentsIsSingleValue:
- acceptsEmoji
- setAcceptsEmoji:
- emptyContentReturnKeyType
- setEmptyContentReturnKeyType:
- returnKeyGoesToNextResponder
- setReturnKeyGoesToNextResponder:
- setAcceptsFloatingKeyboard:
- setAcceptsSplitKeyboard:
- setDisplaySecureTextUsingPlainText:
- setShortcutConversionType:
- suppressReturnKeyStyling
- setSuppressReturnKeyStyling:
- forceEnableDictation
- setForceEnableDictation:
- useInterfaceLanguageForLocalization
- setUseInterfaceLanguageForLocalization:
- deferBecomingResponder
- setDeferBecomingResponder:
- enablesReturnKeyOnNonWhiteSpaceContent
- setEnablesReturnKeyOnNonWhiteSpaceContent:
- dictionaryRepresentation
- setToSecureValues
- publicTraitsMatchTraits:
@end
