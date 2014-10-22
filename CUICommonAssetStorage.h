@interface CUICommonAssetStorage : NSObject
{
	pointer _header;
	pointer _keyfmt;
	pointer _imagedb;
	pointer _colordb;
	pointer _fontdb;
	pointer _fontsizedb;
	pointer _zcglyphdb;
	pointer _zcbezeldb;
	pointer _facetKeysdb;
	pointer _elementDebugInfoDB;
	pointer _partDebugInfoDB;
	BOOL _swap;
}

@end
