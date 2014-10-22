@interface WKOpenGLESView : UIView
{
	BOOL _initialized;
	id _context;
	unsigned int _framebuffer;
	unsigned int _renderbuffer;
	id displayQueue;
	id displayLink;
	long long frameInterval;
}

+ drawGL:
+ drawAtTime:
+ setDrawableSize:
+ prepare
+ initWithFrame:
+ init
+ layoutSubviews
+ _init
+ setFrameInterval:
+ frameInterval
+ setAnimating:
+ .cxx_destruct
- drawGL:
- drawAtTime:
- setDrawableSize:
- prepare
- initWithFrame:
- init
- layoutSubviews
- _init
- setFrameInterval:
- frameInterval
- setAnimating:
- .cxx_destruct
@end
