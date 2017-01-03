//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGSidecarCellDelegate.h"
#import "LXReorderableCollectionViewDataSource.h"
#import "LXReorderableCollectionViewDelegateFlowLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSDictionary, NSIndexPath, NSMutableArray, NSString, UICollectionView, UIView;

@interface IGSidecarCollectionController : UIViewController <IGSidecarCellDelegate, LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _allowsCellSelection;
    _Bool _cellInDeleteZone;
    id <IGSidecarMediaCollectionControllerDelegate> _delegate;
    NSMutableArray *_assets;
    NSDictionary *_filterMapping;
    UICollectionView *_collectionView;
    NSIndexPath *_selectedIndexPath;
    UIView *_cellBeingDeletedView;
    Class _groupFilterClass;
    double _groupFilterStrength;
}

- (void).cxx_destruct;
- (void)adjustFilter:(Class)arg1 strength:(double)arg2;
- (void)adjustFilterForSelectedCell:(Class)arg1 strength:(double)arg2;
@property(nonatomic) _Bool allowsCellSelection; // @synthesize allowsCellSelection=_allowsCellSelection;
- (void)applyFilter:(Class)arg1 strength:(double)arg2 toMetadata:(id)arg3;
- (void)applyFilter:(Class)arg1 withStrength:(double)arg2;
- (void)applyFilterForSelectedCell:(Class)arg1 strength:(double)arg2;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (_Bool)canDeleteItem;
@property(retain, nonatomic) UIView *cellBeingDeletedView; // @synthesize cellBeingDeletedView=_cellBeingDeletedView;
@property(nonatomic) _Bool cellInDeleteZone; // @synthesize cellInDeleteZone=_cellInDeleteZone;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didDragView:(id)arg3 withOffset:(struct CGPoint)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(nonatomic) __weak id <IGSidecarMediaCollectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deselectCell;
- (void)disableVisibleCells:(_Bool)arg1;
@property(retain, nonatomic) NSDictionary *filterMapping; // @synthesize filterMapping=_filterMapping;
- (id)getPhotoCellForIndexPath:(id)arg1;
- (id)getVideoCellForIndexPath:(id)arg1;
@property(retain, nonatomic) Class groupFilterClass; // @synthesize groupFilterClass=_groupFilterClass;
@property(nonatomic) double groupFilterStrength; // @synthesize groupFilterStrength=_groupFilterStrength;
- (id)initWithAssets:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)selectCellAtIndexPath:(id)arg1;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
- (void)setPlayingForCurrentCell:(_Bool)arg1;
- (void)sidecarCellDidTapEditButton:(id)arg1;
- (void)stopPlayingVisibleCells;
- (void)updateAssetAtIndex:(long long)arg1 withMediaMetadata:(id)arg2;
- (void)updateAssets:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
