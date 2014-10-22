@interface MusicMiniPlayerRadioTransportControls : MusicMiniPlayerTransportControls
{
	id _createActivityIndicatorView;
	id _infoButton;
	id _stackView;
	id _stackTapGestureRecognizer;
	id _trackDownloadView;
}

+ setItem:
+ buttonImageForPart:
+ tintColorForPart:
+ initWithFrame:
+ dealloc
+ didMoveToWindow
+ layoutSubviews
+ tintColorDidChange
+ _prospectivePlaybackInformationDidChangeAnimated:
+ stackView:applyAttributesToItem:atIndex:
+ _playbackContentsDidChangeNotification:
+ numberOfItemsInStackView:
+ stackView:didCreateItem:
+ _updateForItemChangeWithPreviousItem:animated:
+ _infoButtonAction:
+ setShowingCreateLoadingIndicator:
+ trackDownloadViewWillTransition:
+ viewForPresentingTrackActions
+ viewForPresentingStationActions
+ isShowingCreateLoadingIndicator
+ _requestStationVisiblityAction:
+ _imageCacheRequestForBaseItem:offsetIndex:
+ _expectedInfoButtonAlpha
+ .cxx_destruct
- setItem:
- buttonImageForPart:
- tintColorForPart:
- initWithFrame:
- dealloc
- didMoveToWindow
- layoutSubviews
- tintColorDidChange
- _prospectivePlaybackInformationDidChangeAnimated:
- stackView:applyAttributesToItem:atIndex:
- _playbackContentsDidChangeNotification:
- numberOfItemsInStackView:
- stackView:didCreateItem:
- _updateForItemChangeWithPreviousItem:animated:
- _infoButtonAction:
- setShowingCreateLoadingIndicator:
- trackDownloadViewWillTransition:
- viewForPresentingTrackActions
- viewForPresentingStationActions
- isShowingCreateLoadingIndicator
- _requestStationVisiblityAction:
- _imageCacheRequestForBaseItem:offsetIndex:
- _expectedInfoButtonAlpha
- .cxx_destruct
@end
