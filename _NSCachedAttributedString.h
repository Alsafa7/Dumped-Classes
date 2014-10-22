@interface _NSCachedAttributedString : NSMutableAttributedString
{
	id _contents;
	id _baseAttributes;
	long long _length;
	usigned long long _hashValue;
	pointer _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;
}

@end
