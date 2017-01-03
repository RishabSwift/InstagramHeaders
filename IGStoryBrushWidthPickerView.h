//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "POPAnimationDelegate.h"

@class CAShapeLayer, IGSloppyTouchSlider, NSString, UIButton, UIColor;

@interface IGStoryBrushWidthPickerView : UIView <POPAnimationDelegate>
{
    struct _IGRange _brushWidthRange;
    UIButton *_brushesButton;
    IGSloppyTouchSlider *_widthSlider;
    CAShapeLayer *_brushWidthPreview;
    _Bool _showBrushWidthPreview;
    id <IGStoryBrushWidthPickerDelegate> _delegate;
    double _selectedBrushWidth;
    UIColor *_brushColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *brushColor; // @synthesize brushColor=_brushColor;
@property(nonatomic) struct _IGRange brushWidthRange; // @synthesize brushWidthRange=_brushWidthRange;
- (void)brushesButtonTapped;
@property(nonatomic) __weak id <IGStoryBrushWidthPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideBrushOptions;
- (void)hideWidthSlider;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 brushWidthRange:(struct _IGRange)arg2 showBrushWidthPreview:(_Bool)arg3;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) double selectedBrushWidth; // @synthesize selectedBrushWidth=_selectedBrushWidth;
- (void)setBrushButtonSelected:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)showWidthSlider;
- (void)sliderDidChange;
- (void)sliderDidFinish;
- (void)sliderWillChange;
- (void)updateBrushesButtonColors;
- (void)updatePreviewFrameWithBrushWidth:(double)arg1;
- (void)updateSliderValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
