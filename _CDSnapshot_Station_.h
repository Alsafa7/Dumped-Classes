@interface _CDSnapshot_Station_ : _CDSnapshot
{
	Array _cd_nullFlags2_;
	char edit_enabled;
	char is_featured;
	char is_gateway_video_ad_enabled;
	char is_premium_placement;
	char is_shared;
	char is_sponsored;
	char is_subscribed;
	char likes_enabled;
	char sharing_enabled;
	char skip_enabled;
	char tracks_need_refresh;
	char virtual_play_enabled;
	int impression_threshold;
	int listeners;
	int skip_frequency;
	int song_mix_type;
	int sort_order;
	long long adam_id;
	double current_playing_track_time;
	long long persistent_id;
	double skip_interval;
	long long station_id;
	id ad_data;
	id additional_referenced_track_descriptors_data;
	id artwork_url;
	id artwork_url_data;
	id core_seed_name;
	id current_playing_track_descriptor;
	id debug_dictionary;
	id editable_fields;
	id name;
	id ordered_track_descriptors_data;
	id seed_tracks;
	id share_token;
	id skip_identifier;
	id skip_timestamps;
	id station_description;
	id station_hash;
	id stream_certificate_url;
	id stream_key_url;
	id stream_url;
	id track_descriptors_by_expiration_date_dictionary;
}

@end
