@interface UIStatusBarForegroundStyleAttributes : NSObject
{
	double _height;
	long long _legibilityStyle;
	id _cachedFonts;
}

+ dealloc
+ scale
+ imageNamed:
+ tintColor
+ textColorForStyle:
+ height
+ legibilityStyle
+ initWithHeight:legibilityStyle:
+ edgePadding
+ drawText:forWidth:lineBreakMode:letterSpacing:bounds:textAlignment:style:textSize:
+ textFontForStyle:
+ standardPadding
+ shadowPadding
+ imageWithText:forWidth:lineBreakMode:letterSpacing:bounds:textAlignment:style:cacheImage:withLegibilityStyle:legibilityStrength:
+ imageNamed:withLegibilityStyle:legibilityStrength:
+ textForNetworkType:
+ cachedImageWithText:forWidth:lineBreakMode:letterSpacing:bounds:textAlignment:style:
+ batteryAccessoryMargin
+ drawBatteryInsidesWithSize:capacity:charging:
+ airplaneItemExtraMargin
+ drawBluetoothBatteryInsidesWithSize:capacity:
+ bluetoothBatteryExtraPadding
+ activityIndicatorStyleWithSyncActivity:
+ setThermalColorShadow
+ uniqueIdentifier
+ sizeForMoonMaskVisible:
+ positionForMoonMaskInBounds:
+ homeImageName
+ untintedImageNamed:
+ textOffsetForStyle:
+ _drawText:inRect:withFont:lineBreakMode:letterSpacing:textAlignment:
+ drawTextInRect:withColor:withBlock:
+ expandedNameForImageName:
+ _cachedImageNamed:
+ uncachedImageNamed:
+ _cacheImage:named:
+ shadowImageForImage:withIdentifier:forStyle:withStrength:cachesImage:
+ makeTextFontForStyle:
+ legacyStyle
- dealloc
- scale
- imageNamed:
- tintColor
- textColorForStyle:
- height
- legibilityStyle
- initWithHeight:legibilityStyle:
- edgePadding
- drawText:forWidth:lineBreakMode:letterSpacing:bounds:textAlignment:style:textSize:
- textFontForStyle:
- standardPadding
- shadowPadding
- imageWithText:forWidth:lineBreakMode:letterSpacing:bounds:textAlignment:style:cacheImage:withLegibilityStyle:legibilityStrength:
- imageNamed:withLegibilityStyle:legibilityStrength:
- textForNetworkType:
- cachedImageWithText:forWidth:lineBreakMode:letterSpacing:bounds:textAlignment:style:
- batteryAccessoryMargin
- drawBatteryInsidesWithSize:capacity:charging:
- airplaneItemExtraMargin
- drawBluetoothBatteryInsidesWithSize:capacity:
- bluetoothBatteryExtraPadding
- activityIndicatorStyleWithSyncActivity:
- setThermalColorShadow
- uniqueIdentifier
- sizeForMoonMaskVisible:
- positionForMoonMaskInBounds:
- homeImageName
- untintedImageNamed:
- textOffsetForStyle:
- _drawText:inRect:withFont:lineBreakMode:letterSpacing:textAlignment:
- drawTextInRect:withColor:withBlock:
- expandedNameForImageName:
- _cachedImageNamed:
- uncachedImageNamed:
- _cacheImage:named:
- shadowImageForImage:withIdentifier:forStyle:withStrength:cachesImage:
- makeTextFontForStyle:
- legacyStyle
@end
