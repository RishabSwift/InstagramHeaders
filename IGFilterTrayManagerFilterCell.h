//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface IGFilterTrayManagerFilterCell : UICollectionViewCell
{
    Class _filterClass;
    UILabel *_textLabel;
    UIImageView *_visibleIndicator;
    UIButton *_rearrangeControl;
    UIImageView *_filterIconView;
    UIImageView *_filterFrameView;
    UIView *_topLine;
    UIView *_bottomLine;
    NSString *_imageName;
}

- (void).cxx_destruct;
- (struct CGRect)LX_rearrangeHotspot;
- (id)LX_snapshotView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
@property(retain, nonatomic) UIImageView *filterFrameView; // @synthesize filterFrameView=_filterFrameView;
@property(retain, nonatomic) UIImage *filterIcon;
@property(retain, nonatomic) UIImageView *filterIconView; // @synthesize filterIconView=_filterIconView;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *rearrangeControl; // @synthesize rearrangeControl=_rearrangeControl;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *visibleIndicator; // @synthesize visibleIndicator=_visibleIndicator;

@end

