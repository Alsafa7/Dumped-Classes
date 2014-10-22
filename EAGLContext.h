@interface EAGLContext : NSObject
{
	pointer _private;
	id debugLabel;
}

+ API
+ getMacroContextPrivate
+ sharegroup
+ attachImage:toCoreSurface:invertedRender:
+ GetMacroContextPrivate
+ setDebugLabel:
+ texImageIOSurface:target:internalFormat:width:height:format:type:plane:invert:
+ setParameter:to:
+ initWithAPI:properties:
+ setBlockFence:onQueue:
+ initWithAPI:sharedWithCompute:
+ debugLabel
+ swapNotification:forTransaction:onLayer:
+ sendNotification:forTransaction:onLayer:
+ dealloc
+ initWithAPI:
+ renderbufferStorage:fromDrawable:
+ presentRenderbuffer:
+ initWithAPI:sharegroup:
+ getParameter:to:
- API
- getMacroContextPrivate
- sharegroup
- attachImage:toCoreSurface:invertedRender:
- GetMacroContextPrivate
- setDebugLabel:
- texImageIOSurface:target:internalFormat:width:height:format:type:plane:invert:
- setParameter:to:
- initWithAPI:properties:
- setBlockFence:onQueue:
- initWithAPI:sharedWithCompute:
- debugLabel
- swapNotification:forTransaction:onLayer:
- sendNotification:forTransaction:onLayer:
- dealloc
- initWithAPI:
- renderbufferStorage:fromDrawable:
- presentRenderbuffer:
- initWithAPI:sharegroup:
- getParameter:to:
@end
