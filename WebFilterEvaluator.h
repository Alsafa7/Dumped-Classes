@interface WebFilterEvaluator : NSObject
{
	usigned long long _filterState;
	id _url;
	id _pageTitle;
	id _buffer;
}

+ dealloc
+ initWithResponse:
+ addData:
+ debugPageForPageWithData:forURL:debugString:
+ blockPageForPageWithTitle:origURL:
+ attemptUnblockWithCompletion:
+ filterState
+ wasBlocked
+ dataComplete
+ unblockWithCompletion:
- dealloc
- initWithResponse:
- addData:
- debugPageForPageWithData:forURL:debugString:
- blockPageForPageWithTitle:origURL:
- attemptUnblockWithCompletion:
- filterState
- wasBlocked
- dataComplete
- unblockWithCompletion:
@end
