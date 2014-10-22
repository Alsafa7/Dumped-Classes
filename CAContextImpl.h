@interface CAContextImpl : CAContext
{
	pointer _impl;
}

+ renderContext
+ initWithOptions:localContext:
+ initRemoteWithOptions:
+ orderBelow:
+ dealloc
+ layer
+ invalidate
+ contextId
+ orderAbove:
+ setLayer:
+ setLevel:
+ setFencePort:commitHandler:
+ setFencePort:
+ setFence:count:
+ level
+ createFencePort
+ createImageSlot:hasAlpha:
+ deleteSlot:
+ options
+ valid
+ createSlot
+ setObject:forSlot:
+ setColorSpace:
+ colorSpace
- renderContext
- initWithOptions:localContext:
- initRemoteWithOptions:
- orderBelow:
- dealloc
- layer
- invalidate
- contextId
- orderAbove:
- setLayer:
- setLevel:
- setFencePort:commitHandler:
- setFencePort:
- setFence:count:
- level
- createFencePort
- createImageSlot:hasAlpha:
- deleteSlot:
- options
- valid
- createSlot
- setObject:forSlot:
- setColorSpace:
- colorSpace
@end
