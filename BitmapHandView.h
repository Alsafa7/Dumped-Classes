@interface BitmapHandView : UIView
{
	id _partViews;
	id _partViewsMaintainingOrientation;
}

+ dealloc
+ initWithImage:rotationalCenter:
+ initWithBundle:resourcePath:partInfoList:rotationalCenter:
- dealloc
- initWithImage:rotationalCenter:
- initWithBundle:resourcePath:partInfoList:rotationalCenter:
@end
