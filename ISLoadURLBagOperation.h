@interface ISLoadURLBagOperation : ISOperation
{
	id _context;
	id _outputBag;
}

+ uniqueKey
+ dealloc
+ init
+ context
+ run
+ URLBag
+ _setOutputURLBag:
+ _postBagDidLoadNotificationWithURLBag:
+ _sendPingsForURLBag:
+ _addHeadersToRequestProperties:
+ _setURLBagWithDictionary:response:error:
+ operation:willSendRequest:
+ operation:shouldSetStoreFrontID:
+ initWithBagContext:
- uniqueKey
- dealloc
- init
- context
- run
- URLBag
- _setOutputURLBag:
- _postBagDidLoadNotificationWithURLBag:
- _sendPingsForURLBag:
- _addHeadersToRequestProperties:
- _setURLBagWithDictionary:response:error:
- operation:willSendRequest:
- operation:shouldSetStoreFrontID:
- initWithBagContext:
@end
