@interface IMChatHistoryController : NSObject
{
	id _runningQueries;
}

+ dealloc
+ init
+ loadMessageWithGUID:completionBlock:
+ messageQuery:finishedWithResult:chatGUIDs:
+ databaseFull
+ databaseNoLongerFull
+ _runningQueries
+ set_runningQueries:
- dealloc
- init
- loadMessageWithGUID:completionBlock:
- messageQuery:finishedWithResult:chatGUIDs:
- databaseFull
- databaseNoLongerFull
- _runningQueries
- set_runningQueries:
@end
