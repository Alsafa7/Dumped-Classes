@interface NSConcreteScanner : NSScanner
{
	id scanString;
	id skipSet;
	id invertedSkipSet;
	id locale;
	usigned long long scanLocation;
	struct flags;
}

+ charactersToBeSkipped
+ caseSensitive
+ setCaseSensitive:
+ _invertedSkipSet
+ dealloc
+ string
+ initWithString:
+ setLocale:
+ setScanLocation:
+ locale
+ scanInt:
+ scanLocation
+ setCharactersToBeSkipped:
+ scanLongLong:
+ finalize
- charactersToBeSkipped
- caseSensitive
- setCaseSensitive:
- _invertedSkipSet
- dealloc
- string
- initWithString:
- setLocale:
- setScanLocation:
- locale
- scanInt:
- scanLocation
- setCharactersToBeSkipped:
- scanLongLong:
- finalize
@end
