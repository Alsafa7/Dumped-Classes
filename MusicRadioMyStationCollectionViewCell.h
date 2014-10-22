@interface MusicRadioMyStationCollectionViewCell : MusicRadioStationCollectionViewCell
{
	id _subscriberLabel;
	BOOL _subscribed;
	long long _subscriberCount;
}

+ isSubscribed
+ setSubscribed:
+ initWithFrame:
+ layoutSubviews
+ tintColorDidChange
+ applyAttributesForInterfaceOrientation:
+ stackView:applyAttributesToItem:atIndex:
+ setNowPlaying:
+ _updateSubscriberLabel
+ setSubscriberCount:
+ subscriberCount
+ .cxx_destruct
- isSubscribed
- setSubscribed:
- initWithFrame:
- layoutSubviews
- tintColorDidChange
- applyAttributesForInterfaceOrientation:
- stackView:applyAttributesToItem:atIndex:
- setNowPlaying:
- _updateSubscriberLabel
- setSubscriberCount:
- subscriberCount
- .cxx_destruct
@end
