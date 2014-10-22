@interface NSContentSizeLayoutConstraint : NSLayoutConstraint
{
	double _huggingPriority;
	double _compressionResistancePriority;
}

+ _priorityDescription
+ priorityForVariable:
+ huggingPriority
+ compressionResistancePriority
+ initWithLayoutItem:value:huggingPriority:compressionResistancePriority:orientation:
- _priorityDescription
- priorityForVariable:
- huggingPriority
- compressionResistancePriority
- initWithLayoutItem:value:huggingPriority:compressionResistancePriority:orientation:
@end
