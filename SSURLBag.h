@interface SSURLBag : NSObject
{
	id _connection;
	id _context;
	id _dictionary;
	id _dispatchQueue;
	double _expirationTime;
	id _pendingLookups;
}

+ loadWithCompletionBlock:
+ initWithURLBagContext:
+ valueForKey:error:
+ dealloc
+ init
+ invalidate
+ _connection
+ loadValueForKey:completionBlock:
+ URLBagContext
+ _loadWithCompletionBlock:
+ _drainPendingLookupsWithError:
+ _loadURLBag
+ getTrustForURL:completionBlock:
- loadWithCompletionBlock:
- initWithURLBagContext:
- valueForKey:error:
- dealloc
- init
- invalidate
- _connection
- loadValueForKey:completionBlock:
- URLBagContext
- _loadWithCompletionBlock:
- _drainPendingLookupsWithError:
- _loadURLBag
- getTrustForURL:completionBlock:
@end
