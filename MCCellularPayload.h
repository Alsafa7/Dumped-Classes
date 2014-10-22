@interface MCCellularPayload : MCPayload
{
	id _attachAPN;
	id _APNs;
}

+ handlerWithProfileHandler:
+ description
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ subtitle2Label
+ subtitle2Description
+ attachAPN
+ APNs
+ attachAPNConfigurationLabel
+ APNsLabel
+ APNConfigurationDescription
+ APNsDescription
+ setAttachAPN:
+ setAPNs:
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- subtitle2Label
- subtitle2Description
- attachAPN
- APNs
- attachAPNConfigurationLabel
- APNsLabel
- APNConfigurationDescription
- APNsDescription
- setAttachAPN:
- setAPNs:
- .cxx_destruct
@end
