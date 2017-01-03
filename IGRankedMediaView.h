//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UILabel;

@interface IGRankedMediaView : UIView
{
    _Bool _rankedContentVisible;
    _Bool _allMediaContentVisible;
    id <IGRankedMediaViewDelegate> _delegate;
    NSArray *_thumbnailImageViews;
    UILabel *_rankedLabel;
    UILabel *_allMediaLabel;
    UIView *_overlayView;
    NSArray *_mediaURLs;
    UILabel *_postCountLabel;
}

+ (struct CGSize)thumbnailSizeForConstrainedWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *allMediaLabel; // @synthesize allMediaLabel=_allMediaLabel;
@property(nonatomic) __weak id <IGRankedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isAllMediaContentVisible) _Bool allMediaContentVisible; // @synthesize allMediaContentVisible=_allMediaContentVisible;
@property(nonatomic, getter=isRankedContentVisible) _Bool rankedContentVisible; // @synthesize rankedContentVisible=_rankedContentVisible;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *mediaURLs; // @synthesize mediaURLs=_mediaURLs;
- (id)newThumbnailView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UILabel *postCountLabel; // @synthesize postCountLabel=_postCountLabel;
@property(retain, nonatomic) UILabel *rankedLabel; // @synthesize rankedLabel=_rankedLabel;
- (void)setAllMediaCount:(unsigned long long)arg1;
- (void)setMediaURLs:(id)arg1 videoIconIndexes:(id)arg2;
@property(copy, nonatomic) NSArray *thumbnailImageViews; // @synthesize thumbnailImageViews=_thumbnailImageViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tappedImageView:(id)arg1;
- (id)thumbnailViewAtPoint:(struct CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
