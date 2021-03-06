//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGVideoGlyphView, UIImageView, UILabel;

@interface IGChannelOverlayView : UIView
{
    _Bool _shouldShowPlayIcon;
    IGVideoGlyphView *_playIcon;
    long long _fontStyle;
    UILabel *_headerLabel;
    UILabel *_titleLabel;
    UILabel *_contextLabel;
    UIImageView *_backgroundView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UILabel *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(nonatomic) long long fontStyle; // @synthesize fontStyle=_fontStyle;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBackgroundView;
- (void)layoutContext;
- (void)layoutHeader;
- (void)layoutPlayIcon;
- (void)layoutSubviews;
- (void)layoutTitle;
- (double)maxWidthForLabels;
@property(readonly, nonatomic) IGVideoGlyphView *playIcon; // @synthesize playIcon=_playIcon;
- (double)preferredFontSizeWithTitle:(id)arg1;
- (id)secondaryTextAttributes;
- (void)setContext:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeader:(id)arg1 title:(id)arg2 context:(id)arg3;
@property(nonatomic) _Bool shouldShowPlayIcon; // @synthesize shouldShowPlayIcon=_shouldShowPlayIcon;
- (void)setTitle:(id)arg1;
- (void)setUpContextLabel;
- (void)setupBackgroundView;
- (void)setupHeaderLabel;
- (void)setupPlayIcon;
- (void)setupSubviews;
- (void)setupTitleLabel;
- (id)textKerning;
- (id)titleAttributesWithFontSize:(double)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

