@interface SULoadNetworkSectionsOperation : ISOperation
{
	id _baseOperation;
	id _clientInterface;
	id _expectedVersionString;
	id _sectionsResponse;
}

+ dealloc
+ run
+ _setSectionsResponse:
+ initWithURL:clientInterface:
+ setExpectedVersionString:
+ sectionsResponse
+ expectedVersionString
+ _loadArtworkForResponse:
+ _copyImageWithURL:scale:error:
+ _bestItemImageForImages:withImageKind:
+ _copyLoadedItemImage:error:
+ baseOperation
+ setBaseOperation:
- dealloc
- run
- _setSectionsResponse:
- initWithURL:clientInterface:
- setExpectedVersionString:
- sectionsResponse
- expectedVersionString
- _loadArtworkForResponse:
- _copyImageWithURL:scale:error:
- _bestItemImageForImages:withImageKind:
- _copyLoadedItemImage:error:
- baseOperation
- setBaseOperation:
@end
