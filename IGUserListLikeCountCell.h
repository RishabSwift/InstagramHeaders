//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class UILabel;

@interface IGUserListLikeCountCell : IGPlainTableViewCell
{
    UILabel *_likeCountLabel;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
@property(readonly, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
- (void)setLikesString:(id)arg1;

@end

