@interface NSKeyValueChangeDictionary : NSDictionary
{
	struct _details;
	id _originalObservable;
	BOOL _isPriorNotification;
	BOOL _isRetainingObjects;
}

+ setOriginalObservable:
+ setDetailsNoCopy:originalObservable:
+ initWithDetailsNoCopy:originalObservable:isPriorNotification:
+ retainObjects
+ dealloc
+ count
+ keyEnumerator
+ objectForKey:
- setOriginalObservable:
- setDetailsNoCopy:originalObservable:
- initWithDetailsNoCopy:originalObservable:isPriorNotification:
- retainObjects
- dealloc
- count
- keyEnumerator
- objectForKey:
@end
