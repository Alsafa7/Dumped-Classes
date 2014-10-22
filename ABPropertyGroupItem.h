@interface ABPropertyGroupItem : ABCardGroupItem
{
	BOOL _allowsIMessage;
	BOOL _allowsPhone;
	BOOL _allowsEmail;
	BOOL _modified;
	id _labeledValues;
	id _labeledValue;
	id _property;
	id _contacts;
	id _contact;
	id _delegate;
}

+ contact
+ setContact:
+ contacts
+ emptyLabeledValue
+ updateLabeledValueWithValue:
+ mergeItem:
+ isEquivalentToItem:whenEditing:
+ labeledValue
+ modified
+ setContacts:
+ isFavoriteOfType:
+ displayValue
+ canRemove
+ updateLabeledValueWithLabel:
+ displayLabel
+ setAllowsIMessage:
+ normalizedValue
+ allowsIMessage
+ setAllowsPhone:
+ setAllowsEmail:
+ defaultActionURL
+ displayStringForValue:
+ allowsEmail
+ isEquivalentToItem:
+ bestValue:
+ valueForDisplayString:
+ editingStringValue
+ initWithLabeledValue:property:contacts:
+ _enumerateContactsAndValuesWithBlock:
+ labeledValues
+ setLabeledValues:
+ bestLabel:
+ setLabeledValue:
+ updateWithLabel:value:
+ setModified:
+ isValidIdentifier:
+ allowsPhone
+ initWithProperty:
+ property
+ saveChanges
+ dealloc
+ setDelegate:
+ init
+ description
+ delegate
+ isEmpty
+ isFavorite
+ isReadonly
+ placeholderString
- contact
- setContact:
- contacts
- emptyLabeledValue
- updateLabeledValueWithValue:
- mergeItem:
- isEquivalentToItem:whenEditing:
- labeledValue
- modified
- setContacts:
- isFavoriteOfType:
- displayValue
- canRemove
- updateLabeledValueWithLabel:
- displayLabel
- setAllowsIMessage:
- normalizedValue
- allowsIMessage
- setAllowsPhone:
- setAllowsEmail:
- defaultActionURL
- displayStringForValue:
- allowsEmail
- isEquivalentToItem:
- bestValue:
- valueForDisplayString:
- editingStringValue
- initWithLabeledValue:property:contacts:
- _enumerateContactsAndValuesWithBlock:
- labeledValues
- setLabeledValues:
- bestLabel:
- setLabeledValue:
- updateWithLabel:value:
- setModified:
- isValidIdentifier:
- allowsPhone
- initWithProperty:
- property
- saveChanges
- dealloc
- setDelegate:
- init
- description
- delegate
- isEmpty
- isFavorite
- isReadonly
- placeholderString
@end
