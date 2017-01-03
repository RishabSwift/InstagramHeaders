//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGUnreadBubbleView, UIImageView, UILabel;

@interface IGNewsAdManagerView : UIView
{
    unsigned long long _pendingAdsCount;
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_icon;
    UIImageView *_rightArrow;
    IGUnreadBubbleView *_unreadBubbleView;
}

+ (double)maxTextWidthForFrameWidth:(double)arg1;
+ (double)preferredSizeForCellWithWidth:(double)arg1;
+ (id)subtitleFont;
+ (id)subtitleString;
+ (id)titleFont;
+ (id)titleString;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)layoutForIcon;
- (struct CGRect)layoutForRightArrow;
- (struct CGRect)layoutForSubtitleWithIconRect:(struct CGRect)arg1 subtitleSize:(struct CGSize)arg2;
- (struct CGRect)layoutForTitleWithIconRect:(struct CGRect)arg1 titleSize:(struct CGSize)arg2;
- (struct CGRect)layoutForUnreadBubbleWithTitleRect:(struct CGRect)arg1 iconRect:(struct CGRect)arg2;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long pendingAdsCount; // @synthesize pendingAdsCount=_pendingAdsCount;
@property(readonly, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
- (void)setUpIcon;
- (void)setUpRightArrow;
- (void)setUpSubtitle;
- (void)setUpTitle;
- (void)setUpUnreadBubbleView;
- (void)setUpViewHierarchy;
@property(readonly, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
@property(readonly, nonatomic) IGUnreadBubbleView *unreadBubbleView; // @synthesize unreadBubbleView=_unreadBubbleView;

@end
