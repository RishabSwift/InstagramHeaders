//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UIView;

@interface IGHashtagRelatedItemsCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <IGHashtagRelatedItemsCollectionViewCellDelegate> _delegate;
    NSArray *_relatedItems;
    UICollectionView *_collectionView;
    UIView *_separatorView;
    NSMutableDictionary *_cellTextToSizesCache;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cellTextToSizesCache; // @synthesize cellTextToSizesCache=_cellTextToSizesCache;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureWithRelatedItems:(id)arg1;
@property(nonatomic) __weak id <IGHashtagRelatedItemsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSArray *relatedItems; // @synthesize relatedItems=_relatedItems;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)sizeForText:(id)arg1 collectionView:(id)arg2 layout:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

