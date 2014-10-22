@interface IMChatItem : NSObject
{
	id _date;
	id _datum1;
	id _datum2;
	id _datum3;
	BOOL _isFromArchive;
	id _guid;
}

+ dealloc
+ date
+ message
+ stringValue
+ _reverseCompareToChatItem:
+ _compareToChatItem:
+ _initWithGUID:date:datum1:datum2:datum3:
+ _setIsFromArchive:
+ isFromArchive
+ guid
+ setGuid:
- dealloc
- date
- message
- stringValue
- _reverseCompareToChatItem:
- _compareToChatItem:
- _initWithGUID:date:datum1:datum2:datum3:
- _setIsFromArchive:
- isFromArchive
- guid
- setGuid:
@end
