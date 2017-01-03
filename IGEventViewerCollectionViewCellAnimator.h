//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UICollectionView;

@interface IGEventViewerCollectionViewCellAnimator : NSObject
{
    UICollectionView *_collectionView;
    NSString *_videoCellId;
    NSString *_photoCellId;
    NSString *_headerCellId;
    NSString *_actionCellId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionCellId; // @synthesize actionCellId=_actionCellId;
- (double)alphaForActionCellAtSection:(unsigned long long)arg1 frameInWindow:(struct CGRect)arg2;
- (double)alphaForHeaderCellAtSection:(unsigned long long)arg1 frameInWindow:(struct CGRect)arg2;
- (double)cellHeightForItem:(long long)arg1 atSection:(unsigned long long)arg2;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, copy, nonatomic) NSString *headerCellId; // @synthesize headerCellId=_headerCellId;
- (id)initWithCollectionView:(id)arg1;
- (_Bool)isActionCell:(id)arg1;
- (_Bool)isHeaderCell:(id)arg1;
- (_Bool)isMediaCell:(id)arg1;
@property(readonly, copy, nonatomic) NSString *photoCellId; // @synthesize photoCellId=_photoCellId;
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2 forTargetIndexPath:(id)arg3;
- (void)updateCrossFadeForVisibleActionCells:(id)arg1 centeredIndexPath:(id)arg2;
- (void)updateCrossFadeForVisibleHeaderCells:(id)arg1 centeredIndexPath:(id)arg2;
- (void)updateCrossFadeForVisibleMediaCells:(id)arg1;
- (void)updateVisibleCellsForTargetIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)updateVisibleCellsWithDynamicCrossFadeAnimated:(_Bool)arg1 centeredIndexPath:(id)arg2;
@property(readonly, copy, nonatomic) NSString *videoCellId; // @synthesize videoCellId=_videoCellId;
- (id)visibleActionCells;
- (id)visibleCellsUsingPredicate:(id)arg1;
- (id)visibleHeaderCells;
- (id)visibleMediaCells;

@end

