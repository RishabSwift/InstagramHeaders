//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGHashtagRelatedItemsCollectionViewCell, NSIndexPath;

@protocol IGHashtagRelatedItemsCollectionViewCellDelegate <NSObject>
- (void)relatedItemsCollectionViewCell:(IGHashtagRelatedItemsCollectionViewCell *)arg1 didTapItem:(id <IGRelatedItemType>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)relatedItemsCollectionViewCell:(IGHashtagRelatedItemsCollectionViewCell *)arg1 willDisplayItem:(id <IGRelatedItemType>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

