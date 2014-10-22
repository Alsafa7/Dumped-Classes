@interface MusicSongTableViewCellContentView : MusicTableViewCellContentView
{
	BOOL _explicitTrack;
	BOOL _geniusTrack;
	BOOL _playing;
	BOOL _itemOfferButtonNeedsSetup;
	id _explicitImageView;
	id _geniusImageView;
	id _nowPlayingIndicatorView;
	id _itemOfferButton;
}

+ isExplicitTrack
+ isPlaying
+ drawRect:
+ setEditing:animated:
+ setGeniusTrack:
+ setExplicitTrack:
+ nowPlayingIndicatorView
+ explicitImageView
+ setPlaying:
+ geniusImageView
+ setItemOfferButton:
+ _itemOfferButtonShowConfirmationAction:
+ _itemOfferButtonCancelConfirmationAction:
+ isGeniusTrack
+ itemOfferButtonNeedsSetup
+ setItemOfferButtonNeedsSetup:
+ .cxx_destruct
+ itemOfferButton
- isExplicitTrack
- isPlaying
- drawRect:
- setEditing:animated:
- setGeniusTrack:
- setExplicitTrack:
- nowPlayingIndicatorView
- explicitImageView
- setPlaying:
- geniusImageView
- setItemOfferButton:
- _itemOfferButtonShowConfirmationAction:
- _itemOfferButtonCancelConfirmationAction:
- isGeniusTrack
- itemOfferButtonNeedsSetup
- setItemOfferButtonNeedsSetup:
- .cxx_destruct
- itemOfferButton
@end
