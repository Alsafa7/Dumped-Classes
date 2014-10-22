@interface CNLabeledValue : NSObject
{
	int _multiValueIdentifier;
	id _label;
	id _value;
}

+ setMultiValueIdentifier:
+ multiValueIdentifier
+ localizedLabel
+ labeledValueBySettingLabel:value:
+ initWithMultiValueIdentifier:label:value:
+ isEqualToLabelledValue:includeIdentifiers:
+ initWithLabel:value:
+ labeledValueBySettingValue:
+ isEqualToLabelledValue:
+ dealloc
+ isEqual:
+ description
+ copyWithZone:
+ value
+ identifier
+ label
- setMultiValueIdentifier:
- multiValueIdentifier
- localizedLabel
- labeledValueBySettingLabel:value:
- initWithMultiValueIdentifier:label:value:
- isEqualToLabelledValue:includeIdentifiers:
- initWithLabel:value:
- labeledValueBySettingValue:
- isEqualToLabelledValue:
- dealloc
- isEqual:
- description
- copyWithZone:
- value
- identifier
- label
@end
