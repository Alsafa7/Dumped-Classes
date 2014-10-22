@interface SBPlaceholderIcon : SBIcon
{
	id _nodeIdentifier;
	id _icon;
}

+ shouldCacheImageForFormat:
+ generateIconImage:
+ automationID
+ isEmptyPlaceholder
+ isGrabbedIconPlaceholder
+ nodeIdentifier
+ matchesRepresentation:
+ isPlaceholderForIcon:
+ _initWithNodeIdentifier:icon:
+ dealloc
+ representation
+ isPlaceholder
- shouldCacheImageForFormat:
- generateIconImage:
- automationID
- isEmptyPlaceholder
- isGrabbedIconPlaceholder
- nodeIdentifier
- matchesRepresentation:
- isPlaceholderForIcon:
- _initWithNodeIdentifier:icon:
- dealloc
- representation
- isPlaceholder
@end
