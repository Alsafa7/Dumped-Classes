@interface _NSJSONReader : NSObject
{
	id input;
	int kind;
	id error;
}

+ setError:
+ findEncodingFromData:withBOMSkipLength:
+ parseUTF8JSONData:skipBytes:options:
+ parseData:options:
+ parseStream:options:
+ dealloc
+ init
+ error
- setError:
- findEncodingFromData:withBOMSkipLength:
- parseUTF8JSONData:skipBytes:options:
- parseData:options:
- parseStream:options:
- dealloc
- init
- error
@end
