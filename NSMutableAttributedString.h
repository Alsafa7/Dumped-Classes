@interface NSMutableAttributedString : NSAttributedString
{

}

+ appendString:withAttributes:
+ scrcAppendFormat:
+ appendString:withAttributes:
+ _ui_restoreOriginalFontAttributes
+ MP_addAttributes:toOccurrencesOfSubstring:options:
+ _shouldSetOriginalFontAttribute
+ convertBidiControlCharactersToWritingDirection
+ _attributeFixingInProgress
+ _setAttributeFixingInProgress:
+ fixGlyphInfoAttributeInRange:
+ fixFontAttributeInRange:
+ fixParagraphStyleAttributeInRange:
+ fixAttachmentAttributeInRange:
+ _changeIntAttribute:by:range:
+ readFromURL:options:documentAttributes:error:
+ readFromData:options:documentAttributes:error:
+ setBaseWritingDirection:range:
+ convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:
+ convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:
+ fixAttributesInRange:
+ setAlignment:range:
+ superscriptRange:
+ subscriptRange:
+ unscriptRange:
+ readFromFileURL:options:documentAttributes:error:
+ readFromURL:options:documentAttributes:
+ readFromData:options:documentAttributes:
+ convertWritingDirectionToBidiControlCharacters
+ replaceNewlinesWithSpaces
+ replaceAttribute:value:withValue:
+ removeCharactersWithAttribute:
+ trimWhitespace
+ mf_addAttribute:value:
+ mf_removeAttribute:
+ mf_setString:
+ dd_makeLinksForResultsInAttributesOfType:context:
+ dd_resetResults
+ dd_urlifyResult:withBlock:referenceDate:
+ insertAttributedString:atIndex:
+ addAttributesWeakly:range:
+ deleteCharactersInRange:
+ addAttribute:value:range:
+ removeAttribute:range:
+ mutableString
+ beginEditing
+ endEditing
+ setAttributedString:
+ setAttributes:range:
+ addAttributes:range:
+ replaceCharactersInRange:withString:
+ appendAttributedString:
+ replaceCharactersInRange:withAttributedString:
- appendString:withAttributes:
- scrcAppendFormat:
- appendString:withAttributes:
- _ui_restoreOriginalFontAttributes
- MP_addAttributes:toOccurrencesOfSubstring:options:
- _shouldSetOriginalFontAttribute
- convertBidiControlCharactersToWritingDirection
- _attributeFixingInProgress
- _setAttributeFixingInProgress:
- fixGlyphInfoAttributeInRange:
- fixFontAttributeInRange:
- fixParagraphStyleAttributeInRange:
- fixAttachmentAttributeInRange:
- _changeIntAttribute:by:range:
- readFromURL:options:documentAttributes:error:
- readFromData:options:documentAttributes:error:
- setBaseWritingDirection:range:
- convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:
- convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:
- fixAttributesInRange:
- setAlignment:range:
- superscriptRange:
- subscriptRange:
- unscriptRange:
- readFromFileURL:options:documentAttributes:error:
- readFromURL:options:documentAttributes:
- readFromData:options:documentAttributes:
- convertWritingDirectionToBidiControlCharacters
- replaceNewlinesWithSpaces
- replaceAttribute:value:withValue:
- removeCharactersWithAttribute:
- trimWhitespace
- mf_addAttribute:value:
- mf_removeAttribute:
- mf_setString:
- dd_makeLinksForResultsInAttributesOfType:context:
- dd_resetResults
- dd_urlifyResult:withBlock:referenceDate:
- insertAttributedString:atIndex:
- addAttributesWeakly:range:
- deleteCharactersInRange:
- addAttribute:value:range:
- removeAttribute:range:
- mutableString
- beginEditing
- endEditing
- setAttributedString:
- setAttributes:range:
- addAttributes:range:
- replaceCharactersInRange:withString:
- appendAttributedString:
- replaceCharactersInRange:withAttributedString:
@end
