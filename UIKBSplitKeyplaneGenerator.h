@interface UIKBSplitKeyplaneGenerator : NSObject
{
	id _rows;
	id _splitLayoutHints;
	id _sourceKeyboard;
	id _sourceKeyplane;
	struct _splitKeySizeFactor;
	struct _keyboardSize;
	double _leftSideWidestRow;
	double _rightSideWidestRow;
	long long _keyboardType;
	id _sliceSet;
	id _leftSlice;
	id _rightSlice;
}

+ dealloc
+ init
+ generateRivenKeyplaneFromKeyplane:forKeyboard:
+ keysOrderedByPosition
+ addSliceStart:end:startToken:endToken:left:normalization:isDefaultWidth:row:
+ splitSpaceKey:leftSpace:left:right:
+ addKey:withShape:forRow:attribs:left:force:isDefaultWidth:
+ commitUncommittedSlices
+ alignSpaceKeyEdges
+ hintsForRow:
+ initializeGeneratorForKeyplane:name:
+ organizeKeyplaneIntoRows
+ splitRow:
+ finalizeSplitKeyplane
- dealloc
- init
- generateRivenKeyplaneFromKeyplane:forKeyboard:
- keysOrderedByPosition
- addSliceStart:end:startToken:endToken:left:normalization:isDefaultWidth:row:
- splitSpaceKey:leftSpace:left:right:
- addKey:withShape:forRow:attribs:left:force:isDefaultWidth:
- commitUncommittedSlices
- alignSpaceKeyEdges
- hintsForRow:
- initializeGeneratorForKeyplane:name:
- organizeKeyplaneIntoRows
- splitRow:
- finalizeSplitKeyplane
@end
