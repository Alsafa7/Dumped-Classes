@interface MPItemDownloadProperties : NSObject
{
	long long _assetFileSize;
	id _destinationURL;
	BOOL _downloadExists;
	id _downloadIdentifier;
	long long _downloadSizeLimit;
	usigned long long _downloadToken;
	id _downloadTokenCompletionHandlers;
	id _sinfs;
	id _sourceURL;
}

+ destinationURL
+ sourceURL
+ downloadManager:downloadStatesDidChange:
+ initWithMediaItem:
+ downloadToken
+ downloadIdentifier
+ assetFileSize
+ downloadSizeLimit
+ _reloadNetworkConstraints
+ initWithDownload:
+ initWithDownloadIdentifier:
+ acquireDownloadTokenWithCompletionHandler:
+ newAVAssetOptionsWithDownloadStyle:
+ downloadExists
+ setDownloadToken:
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ .cxx_destruct
- destinationURL
- sourceURL
- downloadManager:downloadStatesDidChange:
- initWithMediaItem:
- downloadToken
- downloadIdentifier
- assetFileSize
- downloadSizeLimit
- _reloadNetworkConstraints
- initWithDownload:
- initWithDownloadIdentifier:
- acquireDownloadTokenWithCompletionHandler:
- newAVAssetOptionsWithDownloadStyle:
- downloadExists
- setDownloadToken:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- .cxx_destruct
@end
