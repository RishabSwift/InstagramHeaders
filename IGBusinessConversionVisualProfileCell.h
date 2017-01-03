//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGBusinessConversionDataEntity, IGImageView, UILabel;

@interface IGBusinessConversionVisualProfileCell : UICollectionViewCell
{
    IGBusinessConversionDataEntity *_data;
    IGImageView *_profileImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)configureWithDataModel:(id)arg1;
- (id)createProfileImageView;
- (id)createTitleLabel;
@property(retain, nonatomic) IGBusinessConversionDataEntity *data; // @synthesize data=_data;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)labelWidthForWidth:(double)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (id)titleFont;
- (double)titleHeightWithinWidth:(double)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

