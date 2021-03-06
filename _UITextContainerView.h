@interface _UITextContainerView : UIView
{
	struct _textContainerInset;
	struct _textContainerOrigin;
	struct _minSize;
	struct _maxSize;
	id _textContainer;
	id _linkTextAttributes;
	struct _tcvFlags;
}

+ initWithFrame:
+ dealloc
+ drawRect:
+ setDelegate:
+ setFrame:
+ setBounds:
+ description
+ delegate
+ maxSize
+ tintColorDidChange
+ sizeToFit
+ _didScroll
+ layoutManager
+ textStorage
+ textContainerOrigin
+ markedRange
+ visibleRect
+ textContainerInset
+ setConstrainedFrameSize:
+ invalidateTextContainerOrigin
+ minSize
+ isHorizontallyResizable
+ setNeedsDisplayInRect:avoidAdditionalLayout:
+ textContainer
+ setTextContainer:
+ layoutOrientation
+ setLayoutOrientation:
+ linkTextAttributes
+ updateInsertionPointStateAndRestartTimer:
+ setMaxSize:
+ initWithFrame:textContainer:
+ setVerticallyResizable:
+ setUsesTiledViews:
+ setMinSize:
+ usesTiledViews
+ setHorizontallyResizable:
+ setTextContainerInset:
+ setLinkTextAttributes:
+ _ensureMinAndMaxSizesConsistentWithBounds
+ _ensureLayoutCompleteForRect:withExtension:
+ _extendedGlyphRangeForRange:maxGlyphIndex:drawingToScreen:
+ _ensureLayoutCompleteForRect:withExtensionFactor:minimumExtensionDistance:repetitions:
+ isVerticallyResizable
+ _ensureLayoutCompleteToEndOfCharacterRange:
- initWithFrame:
- dealloc
- drawRect:
- setDelegate:
- setFrame:
- setBounds:
- description
- delegate
- maxSize
- tintColorDidChange
- sizeToFit
- _didScroll
- layoutManager
- textStorage
- textContainerOrigin
- markedRange
- visibleRect
- textContainerInset
- setConstrainedFrameSize:
- invalidateTextContainerOrigin
- minSize
- isHorizontallyResizable
- setNeedsDisplayInRect:avoidAdditionalLayout:
- textContainer
- setTextContainer:
- layoutOrientation
- setLayoutOrientation:
- linkTextAttributes
- updateInsertionPointStateAndRestartTimer:
- setMaxSize:
- initWithFrame:textContainer:
- setVerticallyResizable:
- setUsesTiledViews:
- setMinSize:
- usesTiledViews
- setHorizontallyResizable:
- setTextContainerInset:
- setLinkTextAttributes:
- _ensureMinAndMaxSizesConsistentWithBounds
- _ensureLayoutCompleteForRect:withExtension:
- _extendedGlyphRangeForRange:maxGlyphIndex:drawingToScreen:
- _ensureLayoutCompleteForRect:withExtensionFactor:minimumExtensionDistance:repetitions:
- isVerticallyResizable
- _ensureLayoutCompleteToEndOfCharacterRange:
@end
