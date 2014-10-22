@interface SKUIScreenshotDataConsumer : SKUIImageDataConsumer
{
	BOOL _forcesPortrait;
	struct _screenshotSize;
}

+ imageForColor:size:
+ imageForImage:
+ forcesPortrait
+ setForcesPortrait:
+ constraintSize
+ imageForColor:
- imageForColor:size:
- imageForImage:
- forcesPortrait
- setForcesPortrait:
- constraintSize
- imageForColor:
@end
