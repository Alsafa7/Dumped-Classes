@interface MPUMediaControlsTitlesView : MPUNowPlayingTitlesView
{
	id _edgesLayerMask;
	BOOL _highlighted;
	long long _mediaControlsStyle;
	id _delegate;
}

+ dealloc
+ setDelegate:
+ layoutSubviews
+ delegate
+ setHighlighted:
+ isHighlighted
+ _titleTextAttributes
+ _detailTextAttributes
+ updateTrackInformationWithNowPlayingInfo:
+ initWithMediaControlsStyle:
+ _touchControlActivate:
+ _touchControlDeactivate:
+ _touchControlTapped:
+ _setupEdgesLayerMask
+ _secondaryLabelsColor
+ _setGlowEnabled:forLabel:
+ mediaControlsStyle
+ .cxx_destruct
- dealloc
- setDelegate:
- layoutSubviews
- delegate
- setHighlighted:
- isHighlighted
- _titleTextAttributes
- _detailTextAttributes
- updateTrackInformationWithNowPlayingInfo:
- initWithMediaControlsStyle:
- _touchControlActivate:
- _touchControlDeactivate:
- _touchControlTapped:
- _setupEdgesLayerMask
- _secondaryLabelsColor
- _setGlowEnabled:forLabel:
- mediaControlsStyle
- .cxx_destruct
@end
