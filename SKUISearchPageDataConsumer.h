@interface SKUISearchPageDataConsumer : SSVURLDataConsumer
{
	id _clientContext;
	id _searchTerm;
}

+ searchTerm
+ setSearchTerm:
+ _newSearchResultGroupWithBubbleDictionary:platformDictionary:editorialDictionary:
+ _priceFacet
+ _categoriesFacetWithCategories:
+ _sortFacetWithSorts:
+ .cxx_destruct
+ objectForData:response:error:
- searchTerm
- setSearchTerm:
- _newSearchResultGroupWithBubbleDictionary:platformDictionary:editorialDictionary:
- _priceFacet
- _categoriesFacetWithCategories:
- _sortFacetWithSorts:
- .cxx_destruct
- objectForData:response:error:
@end
