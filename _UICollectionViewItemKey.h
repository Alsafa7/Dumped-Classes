@interface _UICollectionViewItemKey : NSObject
{
	id _indexPath;
	id _identifier;
	BOOL _isClone;
	usigned long long _type;
}

+ dealloc
+ isEqual:
+ hash
+ description
+ type
+ copyWithZone:
+ indexPath
+ identifier
+ initWithType:indexPath:identifier:
+ initWithType:indexPath:identifier:clone:
+ isClone
+ copyAsClone:
- dealloc
- isEqual:
- hash
- description
- type
- copyWithZone:
- indexPath
- identifier
- initWithType:indexPath:identifier:
- initWithType:indexPath:identifier:clone:
- isClone
- copyAsClone:
@end
