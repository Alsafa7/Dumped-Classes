@interface SLFacebookUpload : NSObject
{
	id _uploadID;
	long long _uploadType;
	usigned long long _totalBytes;
	usigned long long _transferredBytes;
}

+ uploadID
+ setUploadID:
+ uploadType
+ setUploadType:
+ transferredBytes
+ setTransferredBytes:
+ initWithCoder:
+ encodeWithCoder:
+ setTotalBytes:
+ totalBytes
+ .cxx_destruct
- uploadID
- setUploadID:
- uploadType
- setUploadType:
- transferredBytes
- setTransferredBytes:
- initWithCoder:
- encodeWithCoder:
- setTotalBytes:
- totalBytes
- .cxx_destruct
@end
