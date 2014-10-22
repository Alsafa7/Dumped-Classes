@interface OACredential : NSObject
{
	id _consumerKey;
	id _consumerSecret;
	id _oauthToken;
	id _oauthTokenSecret;
}

+ consumerSecret
+ consumerKey
+ setConsumerKey:
+ setConsumerSecret:
+ dealloc
+ setOauthToken:
+ oauthTokenSecret
+ setOauthTokenSecret:
+ signingKey
+ oauthToken
- consumerSecret
- consumerKey
- setConsumerKey:
- setConsumerSecret:
- dealloc
- setOauthToken:
- oauthTokenSecret
- setOauthTokenSecret:
- signingKey
- oauthToken
@end
