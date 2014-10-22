@interface NSPointerFunctions : NSObject
{

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
- copyWithZone:
- initWithOptions:
@end
