@interface _UIHostedWindowHostingHandle : NSObject
{
	unsigned int _contextID;
	struct _rootLayerTransform;
	struct _rootLayerFrame;
}

+ initWithCoder:
+ encodeWithCoder:
+ contextID
+ rootLayerTransform
+ rootLayerFrame
- initWithCoder:
- encodeWithCoder:
- contextID
- rootLayerTransform
- rootLayerFrame
@end
