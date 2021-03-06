//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGStoryBrushWidthPickerDelegate.h"
#import "IGStoryColorPaletteDelegate.h"
#import "IGStoryHuePickerDelegate.h"

@class IGStoryBrushWidthPickerView, IGStoryColorPaletteView, IGStoryHuePickerView, NSString, UIColor;

@interface IGStoryDrawingOptionsView : UIView <IGStoryColorPaletteDelegate, IGStoryBrushWidthPickerDelegate, IGStoryHuePickerDelegate>
{
    IGStoryBrushWidthPickerView *_brushWidthPicker;
    IGStoryColorPaletteView *_colorPalate;
    IGStoryHuePickerView *_huePicker;
    id <IGStoryDrawingOptionsViewDelegate> _delegate;
    double _currentWidth;
    UIColor *_currentColor;
    struct _IGRange _brushWidthRange;
}

- (void).cxx_destruct;
- (void)brushWidthPicker:(id)arg1 didPickBrushWidth:(double)arg2;
- (void)brushWidthPicker:(id)arg1 didUpdateBrushWidth:(double)arg2;
@property(nonatomic) struct _IGRange brushWidthRange; // @synthesize brushWidthRange=_brushWidthRange;
- (void)colorPalette:(id)arg1 didLongPressOnColor:(id)arg2 withGestureRecognizer:(id)arg3;
- (void)colorPalette:(id)arg1 didSelectColor:(id)arg2;
@property(retain, nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(nonatomic) __weak id <IGStoryDrawingOptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideBrushWidthOptions;
- (void)hideHuePicker;
- (void)huePicker:(id)arg1 didUpdateWithColor:(id)arg2;
- (void)huePickerDidEndSelection:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 brushWidthRange:(struct _IGRange)arg2 showBrushWidthPreview:(_Bool)arg3 colorPalettes:(id)arg4;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showHuePickerWithColorPalette:(id)arg1 gestureRecognizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

