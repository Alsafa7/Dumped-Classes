@interface GKImageContext : NSObject
{
	double _scale;
	pointer _CGContext;
	struct _size;
}

+ CGContext
+ initWithSize:scale:options:data:
+ initWithSize:scale:options:
+ writeRawPixelsToURL:error:
+ dealloc
+ size
+ scale
+ image
+ setSize:
- CGContext
- initWithSize:scale:options:data:
- initWithSize:scale:options:
- writeRawPixelsToURL:error:
- dealloc
- size
- scale
- image
- setSize:
@end
