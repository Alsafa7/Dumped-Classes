@interface NSScanner : NSObject
{

}

+ scanDecimal:
+ _remainingString
+ _scanDecimal:into:
+ mf_scanUpToRegularExpression:
+ _rangeOfFirstMatchWithRegularExpression:
+ mf_remainingString
+ mf_scanUpAndOverString:
+ mf_nextTokenWithPunctuation:
+ charactersToBeSkipped
+ caseSensitive
+ setCaseSensitive:
+ scanUnsignedLongLong:
+ scanHexLongLong:
+ _invertedSkipSet
+ scanDouble:
+ scanFloat:
+ scanHexDouble:
+ scanHexFloat:
+ scanUnsignedInteger:
+ copyWithZone:
+ string
+ initWithString:
+ setLocale:
+ scanString:intoString:
+ scanInteger:
+ isAtEnd
+ scanUpToString:intoString:
+ setScanLocation:
+ locale
+ scanInt:
+ scanLocation
+ scanHexInt:
+ scanCharactersFromSet:intoString:
+ setCharactersToBeSkipped:
+ scanLongLong:
+ scanUpToCharactersFromSet:intoString:
- scanDecimal:
- _remainingString
- _scanDecimal:into:
- mf_scanUpToRegularExpression:
- _rangeOfFirstMatchWithRegularExpression:
- mf_remainingString
- mf_scanUpAndOverString:
- mf_nextTokenWithPunctuation:
- charactersToBeSkipped
- caseSensitive
- setCaseSensitive:
- scanUnsignedLongLong:
- scanHexLongLong:
- _invertedSkipSet
- scanDouble:
- scanFloat:
- scanHexDouble:
- scanHexFloat:
- scanUnsignedInteger:
- copyWithZone:
- string
- initWithString:
- setLocale:
- scanString:intoString:
- scanInteger:
- isAtEnd
- scanUpToString:intoString:
- setScanLocation:
- locale
- scanInt:
- scanLocation
- scanHexInt:
- scanCharactersFromSet:intoString:
- setCharactersToBeSkipped:
- scanLongLong:
- scanUpToCharactersFromSet:intoString:
@end
