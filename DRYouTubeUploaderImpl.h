@interface DRYouTubeUploaderImpl : DRYouTubeUploader
{
	id service;
	id activeTicket;
	usigned long long uploadedBytes;
	usigned long long uploadedBytesTotal;
	id lastFilePath;
	id lastDetails;
	id lastError;
}

@end
