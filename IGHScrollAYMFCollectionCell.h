//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGHScrollUnitLayout, IGListCollectionView;

@interface IGHScrollAYMFCollectionCell : UICollectionViewCell
{
    IGListCollectionView *_collectionView;
    IGHScrollUnitLayout *_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) IGHScrollUnitLayout *layout; // @synthesize layout=_layout;
- (void)layoutSubviews;

@end
