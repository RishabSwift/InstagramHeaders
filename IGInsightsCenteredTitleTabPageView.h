//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface IGInsightsCenteredTitleTabPageView : UIView
{
    id <IGInsightsCenteredTitleTabPageViewDataSource> _dataSource;
    UIView *_contentView;
    UILabel *_titleLabel;
    long long _activeIndex;
    UIButton *_forwardButton;
    UIButton *_backButton;
    unsigned long long _contentViewCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)buttonClick:(id)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long contentViewCount; // @synthesize contentViewCount=_contentViewCount;
@property(nonatomic) __weak id <IGInsightsCenteredTitleTabPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
- (id)init;
- (void)layoutButtonsWithY:(double)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setUpContentView;
- (void)setUpTitle;
- (void)setupNavigateButtons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
