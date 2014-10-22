@interface GKPlayerWithSpeechBalloonView : UIView
{
	id _speechTextView;
	id _photoView;
	id _balloonView;
	id _replaceableConstraints;
}

+ replaceableConstraints
+ speechText
+ tipDirection
+ drawStyle
+ setReplaceableConstraints:
+ setDrawStyle:
+ _updateSpeechText:
+ setTipDirection:
+ speechTextView
+ setSpeechText:
+ setSpeechTextView:
+ balloonView
+ setBalloonView:
+ initWithFrame:
+ dealloc
+ intrinsicContentSize
+ updateConstraints
+ setPreferredMaxLayoutWidth:
+ preferredMaxLayoutWidth
+ metrics
+ photoView
+ setPhotoView:
+ player
+ setPlayer:
- replaceableConstraints
- speechText
- tipDirection
- drawStyle
- setReplaceableConstraints:
- setDrawStyle:
- _updateSpeechText:
- setTipDirection:
- speechTextView
- setSpeechText:
- setSpeechTextView:
- balloonView
- setBalloonView:
- initWithFrame:
- dealloc
- intrinsicContentSize
- updateConstraints
- setPreferredMaxLayoutWidth:
- preferredMaxLayoutWidth
- metrics
- photoView
- setPhotoView:
- player
- setPlayer:
@end
