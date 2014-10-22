@interface SUStorePageDataProvider : ISDataProvider
{
	id _clientInterface;
	long long _outputType;
	id _propertyListDataProvider;
}

+ dealloc
+ setOutputType:
+ outputType
+ clientInterface
+ setClientInterface:
+ propertyListDataProvider
+ parseData:returningError:
+ _loadPersonalizedStoreOffersForPage:
+ setPropertyListDataProvider:
- dealloc
- setOutputType:
- outputType
- clientInterface
- setClientInterface:
- propertyListDataProvider
- parseData:returningError:
- _loadPersonalizedStoreOffersForPage:
- setPropertyListDataProvider:
@end
