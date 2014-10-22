@interface SoundsPrefController : PSListController
{
	id _ringtoneIdentifier;
	id _texttoneIdentifier;
	float _volume;
	float _rateLimitedVolume;
	int _lastPlayedSound;
	BOOL _hasTelephony;
	BOOL _volumeHUDSupressed;
	double _lastTime;
	id _voiceMailSpecifier;
	long long _voiceMailSpecifierIndex;
}

@end
