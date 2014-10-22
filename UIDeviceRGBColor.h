@interface UIDeviceRGBColor : UIColor
{
	double redComponent;
	double greenComponent;
	double blueComponent;
	double alphaComponent;
	pointer cachedColor;
	long long cachedColorOnceToken;
}

@end
