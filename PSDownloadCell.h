@interface PSDownloadCell : PSTableCell
{
	BOOL downloading;
	id downloadProgress;
	id savePath;
	id url;
	id connectionManager;
	id downloadedMutableData;
	id urlResponse;
	double progress;
}

@end
