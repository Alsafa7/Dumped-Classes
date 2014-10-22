@interface SUDescriptor : NSObject
{
	id _documentation;
	id _publisher;
	id _humanReadableUpdateName;
	id _productSystemName;
	id _productVersion;
	id _productBuildVersion;
	usigned long long _downloadSize;
	usigned long long _preparationSize;
	usigned long long _installationSize;
	int _updateType;
	BOOL _autoDownloadAllowableForCellular;
	BOOL _downloadAllowableForCellular;
	BOOL _downloadable;
	BOOL _downloadableOverCellular;
}

+ setUpdateType:
+ updateType
+ isDownloadable
+ downloadSize
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ productBuildVersion
+ setDownloadable:
+ setProductVersion:
+ setProductBuildVersion:
+ setProductSystemName:
+ setPublisher:
+ setAutoDownloadAllowableForCellular:
+ setDownloadableOverCellular:
+ setDownloadSize:
+ setPreparationSize:
+ setInstallationSize:
+ setDocumentation:
+ humanReadableUpdateName
+ productSystemName
+ publisher
+ preparationSize
+ installationSize
+ documentation
+ autoDownloadAllowableForCellular
+ isDownloadableOverCellular
+ _hasValue:
+ _buildCompareKey
+ totalRequiredFreeSpace
+ isValidDescriptor
+ productVersion
- setUpdateType:
- updateType
- isDownloadable
- downloadSize
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- isEqual:
- hash
- description
- copyWithZone:
- productBuildVersion
- setDownloadable:
- setProductVersion:
- setProductBuildVersion:
- setProductSystemName:
- setPublisher:
- setAutoDownloadAllowableForCellular:
- setDownloadableOverCellular:
- setDownloadSize:
- setPreparationSize:
- setInstallationSize:
- setDocumentation:
- humanReadableUpdateName
- productSystemName
- publisher
- preparationSize
- installationSize
- documentation
- autoDownloadAllowableForCellular
- isDownloadableOverCellular
- _hasValue:
- _buildCompareKey
- totalRequiredFreeSpace
- isValidDescriptor
- productVersion
@end
