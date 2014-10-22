@interface _CDSnapshot_Note_ : _CDSnapshot
{
	char containsCJK;
	char deletedFlag;
	char isBookkeepingEntry;
	short contentType;
	int integerId;
	double creationDate;
	long long externalFlags;
	long long externalSequenceNumber;
	long long externalServerIntId;
	double modificationDate;
	id author;
	id guid;
	id serverId;
	id summary;
	id title;
	id body;
	id store;
}

@end
