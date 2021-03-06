//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class IGGridCollectionViewLayoutConfiguration, NSMutableDictionary;

@interface IGGridCollectionViewLayout : UICollectionViewLayout
{
    IGGridCollectionViewLayoutConfiguration *_layoutConfig;
    id <IGCollectionViewLayoutDataSource> _dataSource;
    NSMutableDictionary *_cachedItemFrames;
    NSMutableDictionary *_cachedHeaderViewFrames;
    NSMutableDictionary *_cachedItemPositions;
}

+ (struct CGSize)sizeWithLayoutConfig:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cachedHeaderViewFrames; // @synthesize cachedHeaderViewFrames=_cachedHeaderViewFrames;
@property(readonly, nonatomic) NSMutableDictionary *cachedItemFrames; // @synthesize cachedItemFrames=_cachedItemFrames;
@property(readonly, nonatomic) NSMutableDictionary *cachedItemPositions; // @synthesize cachedItemPositions=_cachedItemPositions;
- (struct CGRect)cellFrameForItemAtIndexPath:(id)arg1;
- (struct CGPoint)cellPointForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForItemAtIndexPath:(id)arg1;
- (void)clearLayoutCache;
- (struct CGSize)collectionViewContentSize;
- (void)configureItemLayoutAttributes:(id)arg1;
@property(nonatomic) __weak id <IGCollectionViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (struct CGRect)headerViewFrameForItemAtIndexPath:(id)arg1;
- (struct CGPoint)headerViewPointForItemAtIndexPath:(id)arg1;
- (struct CGSize)headerViewSizeForItemAtIndexPath:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 layoutConfiguration:(id)arg2;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)lastCellIndexPath;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic) IGGridCollectionViewLayoutConfiguration *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
- (CDStruct_4bcfbbae)positionForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (long long)totalItemCount;
- (long long)totalItemCountInSection:(long long)arg1;
- (long long)totalSectionCount;
- (void)updateCacheWithPosition:(CDStruct_4bcfbbae)arg1 atIndexPath:(id)arg2;

@end

