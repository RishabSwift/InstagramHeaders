//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface IGHashtagMostRecentPostsHeaderCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_postCountLabel;
}

- (void).cxx_destruct;
- (void)configureForRecentPostsWithCount:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *postCountLabel; // @synthesize postCountLabel=_postCountLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
