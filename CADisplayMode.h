@interface CADisplayMode : NSObject
{
	pointer _priv;
	id _dpy;
	usigned long long _width;
	usigned long long _height;
}

+ _mode
+ _initWithMode:display:
+ _setWidth:height:
+ dealloc
+ isEqual:
+ hash
+ description
+ width
+ height
+ pixelAspectRatio
+ _display
- _mode
- _initWithMode:display:
- _setWidth:height:
- dealloc
- isEqual:
- hash
- description
- width
- height
- pixelAspectRatio
- _display
@end
