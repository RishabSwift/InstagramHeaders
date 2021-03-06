//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListUpdatingDelegate.h"

@interface IGListReloadDataUpdater : NSObject <IGListUpdatingDelegate>
{
}

- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:(id)arg1 animated:(_Bool)arg2 itemUpdates:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 animated:(_Bool)arg4 objectTransitionBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2;
- (void)reloadDataWithCollectionView:(id)arg1 reloadUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)synchronousReloadDataWithCollectionView:(id)arg1;

@end

