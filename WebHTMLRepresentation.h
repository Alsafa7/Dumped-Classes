@interface WebHTMLRepresentation : NSObject
{
	id _private;
}

+ dealloc
+ setDataSource:
+ init
+ title
+ DOMDocument
+ finalize
+ finishedLoadingWithDataSource:
+ receivedData:withDataSource:
+ receivedError:withDataSource:
+ _redirectDataToManualLoader:forPluginView:
+ _isDisplayingWebArchive
+ searchForLabels:beforeElement:resultDistance:resultIsInCellAbove:
+ canProvideDocumentSource
+ documentSource
+ canSaveAsWebArchive
+ elementWithName:inForm:
+ elementDoesAutoComplete:
+ elementIsPassword:
+ formForElement:
+ currentForm
+ controlsInForm:
+ searchForLabels:beforeElement:
+ matchLabels:againstElement:
- dealloc
- setDataSource:
- init
- title
- DOMDocument
- finalize
- finishedLoadingWithDataSource:
- receivedData:withDataSource:
- receivedError:withDataSource:
- _redirectDataToManualLoader:forPluginView:
- _isDisplayingWebArchive
- searchForLabels:beforeElement:resultDistance:resultIsInCellAbove:
- canProvideDocumentSource
- documentSource
- canSaveAsWebArchive
- elementWithName:inForm:
- elementDoesAutoComplete:
- elementIsPassword:
- formForElement:
- currentForm
- controlsInForm:
- searchForLabels:beforeElement:
- matchLabels:againstElement:
@end
