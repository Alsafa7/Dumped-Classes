@interface MCAirPlayPayload : MCPayload
{
	id _whitelistDestinations;
	id _destinationsWithPasswords;
	id _titlesAndDescriptions;
}

+ handlerWithProfileHandler:
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ subtitle2Label
+ subtitle2Description
+ setWhitelistDestinations:
+ setDestinationsWithPasswords:
+ whitelistDestinations
+ destinationsWithPasswords
+ titlesAndDescriptions
+ setTitlesAndDescriptions:
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- subtitle2Label
- subtitle2Description
- setWhitelistDestinations:
- setDestinationsWithPasswords:
- whitelistDestinations
- destinationsWithPasswords
- titlesAndDescriptions
- setTitlesAndDescriptions:
- .cxx_destruct
@end
