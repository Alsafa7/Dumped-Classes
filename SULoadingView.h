@interface SULoadingView : UIView
{
	long long _activityIndicatorStyle;
	id _activityIndicatorColor;
	id _label;
	id _progressIndicator;
	usigned long long _style;
	id _textColor;
	id _textShadowColor;
}

+ activityIndicatorColor
+ newProgressIndicator
+ _setupSubviews
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ setStyle:
+ sizeToFit
+ setTextColor:
+ textColor
+ activityIndicatorStyle
+ textShadowColor
+ setActivityIndicatorStyle:
+ setActivityIndicatorColor:
+ setTextShadowColor:
+ newTextLabel
- activityIndicatorColor
- newProgressIndicator
- _setupSubviews
- initWithFrame:
- dealloc
- layoutSubviews
- setStyle:
- sizeToFit
- setTextColor:
- textColor
- activityIndicatorStyle
- textShadowColor
- setActivityIndicatorStyle:
- setActivityIndicatorColor:
- setTextShadowColor:
- newTextLabel
@end
