@interface SKUIAccountButtonsView : UIView
{
	id _accountCreditsLabel;
	id _appleIDButton;
	id _clientContext;
	id _colorScheme;
	id _ecommerceButton;
	id _giftingButton;
	long long _interfaceOrientation;
	id _termsAndConditionsButton;
	id _usernameButton;
	id _redeemButton;
}

+ layoutSubviews
+ sizeThatFits:
+ interfaceOrientation
+ setInterfaceOrientation:
+ colorScheme
+ setColorScheme:
+ initWithClientContext:
+ _newLinkButtonWithTitle:
+ _layoutForIPhone
+ _layoutForIPad
+ _termsChevronImage
+ accountCredits
+ ECommerceLinkTitle
+ setECommerceLinkTitle:
+ isGiftingHidden
+ isTermsAndConditionsHidden
+ setAccountCredits:
+ setGiftingHidden:
+ setTermsAndConditionsHidden:
+ appleIDButton
+ ECommerceButton
+ giftingButton
+ redeemButton
+ termsAndConditionsButton
+ .cxx_destruct
- layoutSubviews
- sizeThatFits:
- interfaceOrientation
- setInterfaceOrientation:
- colorScheme
- setColorScheme:
- initWithClientContext:
- _newLinkButtonWithTitle:
- _layoutForIPhone
- _layoutForIPad
- _termsChevronImage
- accountCredits
- ECommerceLinkTitle
- setECommerceLinkTitle:
- isGiftingHidden
- isTermsAndConditionsHidden
- setAccountCredits:
- setGiftingHidden:
- setTermsAndConditionsHidden:
- appleIDButton
- ECommerceButton
- giftingButton
- redeemButton
- termsAndConditionsButton
- .cxx_destruct
@end
