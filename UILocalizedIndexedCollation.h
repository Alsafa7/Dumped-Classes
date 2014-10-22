@interface UILocalizedIndexedCollation : NSObject
{
	id _locale;
	id _sectionTitles;
	id _sectionStartStrings;
	id _sectionIndexTitles;
	id _sectionIndexMapping;
	id _transform;
	id _firstSectionStartString;
	id _lastSectionStartString;
	pointer _tokenizer;
}

+ initWithDictionary:
+ tokenizer
+ transformedCollationStringForString:
+ dealloc
+ sectionTitles
+ sectionIndexTitles
+ sectionForSectionIndexTitleAtIndex:
+ sectionForObject:collationStringSelector:
+ sortedArrayFromArray:collationStringSelector:
- initWithDictionary:
- tokenizer
- transformedCollationStringForString:
- dealloc
- sectionTitles
- sectionIndexTitles
- sectionForSectionIndexTitleAtIndex:
- sectionForObject:collationStringSelector:
- sortedArrayFromArray:collationStringSelector:
@end
