@interface City : NSObject
{
	id _delegate;
	id _updateTimeString;
	id _dayForecasts;
	id _hourlyForecasts;
	BOOL _autoUpdate;
	BOOL _isLocalWeatherCity;
	BOOL _isHourlyDataCelsius;
	BOOL _dataCelsius;
	BOOL _isUpdating;
	BOOL _isRequestedByFrameworkClient;
	BOOL _lockedForDemoMode;
	float _longitude;
	float _latitude;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	float _dewPoint;
	float _feelsLike;
	float _heatIndex;
	int _lastUpdateStatus;
	int _updateInterval;
	id _temperature;
	id _updateTime;
	usigned long long _conditionCode;
	id _woeid;
	id _name;
	id _locationID;
	id _state;
	usigned long long _observationTime;
	usigned long long _sunsetTime;
	usigned long long _sunriseTime;
	usigned long long _moonPhase;
	id _link;
	long long _secondsFromGMT;
	usigned long long _lastUpdateDetail;
	long long _pressureRising;
	id _autoUpdateTimer;
}

@end
