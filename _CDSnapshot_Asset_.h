@interface _CDSnapshot_Asset_ : _CDSnapshot
{
	Array _cd_nullFlags2_;
	char cloudHasCommentsByMe;
	char cloudHasCommentsConversation;
	char cloudHasUnseenComments;
	char cloudIsDeletable;
	char cloudIsMyAsset;
	char complete;
	short cloudDownloadRequests;
	short cloudPlaceholderKind;
	short height;
	short kind;
	short kindSubtype;
	short orientation;
	short savedAssetType;
	short visibilityState;
	short width;
	int avalanchePickType;
	int thumbnailIndex;
	double cloudBatchPublishDate;
	double cloudLastViewedCommentDate;
	double cloudServerPublishDate;
	double dateCreated;
	double modificationDate;
	double sortToken;
	id avalancheUUID;
	id cloudAssetGUID;
	id cloudBatchID;
	id cloudCollectionGUID;
	id cloudMetadata;
	id cloudOwnerHashedPersonID;
	id directory;
	id faceRectangles;
	id filename;
	id locationData;
	id uniformTypeIdentifier;
	id uuid;
	id location;
	id additionalAttributes;
	id cloudFeedAssetsEntry;
	id moment;
	id albums;
	id albumsBeingKeyAssetFor;
	id albumsBeingSecondaryKeyAssetFor;
	id albumsBeingTertiaryKeyAssetFor;
	id faces;
	id sidecarFiles;
	id adjustments;
	id cloudComments;
	id likeComments;
}

@end
