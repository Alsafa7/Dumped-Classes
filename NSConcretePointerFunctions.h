@interface NSConcretePointerFunctions : NSPointerFunctions
{
	struct slice;
}

+ setHashFunction:
+ setIsEqualFunction:
+ setSizeFunction:
+ setDescriptionFunction:
+ setAcquireFunction:
+ setRelinquishFunction:
+ setUsesStrongWriteBarrier:
+ setUsesWeakReadAndWriteBarriers:
+ sizeFunction
+ hashFunction
+ isEqualFunction
+ descriptionFunction
+ acquireFunction
+ relinquishFunction
+ usesStrongWriteBarrier
+ usesWeakReadAndWriteBarriers
+ isEqual:
+ hash
+ copyWithZone:
+ initWithOptions:
- setHashFunction:
- setIsEqualFunction:
- setSizeFunction:
- setDescriptionFunction:
- setAcquireFunction:
- setRelinquishFunction:
- setUsesStrongWriteBarrier:
- setUsesWeakReadAndWriteBarriers:
- sizeFunction
- hashFunction
- isEqualFunction
- descriptionFunction
- acquireFunction
- relinquishFunction
- usesStrongWriteBarrier
- usesWeakReadAndWriteBarriers
- isEqual:
- hash
- copyWithZone:
- initWithOptions:
@end
