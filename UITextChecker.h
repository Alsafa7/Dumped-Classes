@interface UITextChecker : NSObject
{
	id _reserved;
	long long _usdt;
}

+ dealloc
+ init
+ _initWithAsynchronousLoading:
+ _doneLoading
+ rangeOfMisspelledWordInString:range:startingAt:wrap:language:
+ guessesForWordRange:inString:language:
+ _nameOfDictionaryForDocumentTag:
+ initUserDictionaries
+ queryUpdateBundle
+ initGlobals
+ setIgnoredWords:
+ checkSpellingOfString:startingAt:language:wrap:correction:
+ _checker
+ adjustOffsetToNextWordBoundaryInString:startingAt:
+ _setLanguageDictionaryName:
+ _setDocumentDictionaryName:
+ _chunkAndFindMisspelledWordInString:language:learnedDictionaries:wordCount:correction:usingChecker:
+ _chunkAndCheckGrammarInString:language:usingChecker:details:
+ checkGrammarOfString:startingAt:language:wrap:details:
+ correctionForWordRange:inString:language:
+ completionsForPartialWordRange:inString:language:
+ suggestWordInLanguage:
+ canChangeCaseOfFirstLetterInString:toUpperCase:language:
+ stringForInputString:language:
+ alternativesForPinyinInputString:
+ ignoreWord:
+ ignoredWords
+ isWordInUserDictionaries:caseSensitive:
- dealloc
- init
- _initWithAsynchronousLoading:
- _doneLoading
- rangeOfMisspelledWordInString:range:startingAt:wrap:language:
- guessesForWordRange:inString:language:
- _nameOfDictionaryForDocumentTag:
- initUserDictionaries
- queryUpdateBundle
- initGlobals
- setIgnoredWords:
- checkSpellingOfString:startingAt:language:wrap:correction:
- _checker
- adjustOffsetToNextWordBoundaryInString:startingAt:
- _setLanguageDictionaryName:
- _setDocumentDictionaryName:
- _chunkAndFindMisspelledWordInString:language:learnedDictionaries:wordCount:correction:usingChecker:
- _chunkAndCheckGrammarInString:language:usingChecker:details:
- checkGrammarOfString:startingAt:language:wrap:details:
- correctionForWordRange:inString:language:
- completionsForPartialWordRange:inString:language:
- suggestWordInLanguage:
- canChangeCaseOfFirstLetterInString:toUpperCase:language:
- stringForInputString:language:
- alternativesForPinyinInputString:
- ignoreWord:
- ignoredWords
- isWordInUserDictionaries:caseSensitive:
@end
