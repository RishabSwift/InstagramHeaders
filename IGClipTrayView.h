//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UICollectionView, UILabel;

@interface IGClipTrayView : UIView
{
    UICollectionView *_collectionView;
    UILabel *_instructionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
- (void)layoutSubviews;

@end

