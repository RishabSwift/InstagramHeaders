//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class NSBundle, NSString;

@interface IGListSingleSectionController : IGListSectionController <IGListSectionType>
{
    id <IGListSingleSectionControllerDelegate> _selectionDelegate;
    NSString *_nibName;
    NSBundle *_bundle;
    NSString *_identifier;
    Class _cellClass;
    CDUnknownBlockType _configureBlock;
    CDUnknownBlockType _sizeBlock;
    id _item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (id)cellForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) CDUnknownBlockType configureBlock; // @synthesize configureBlock=_configureBlock;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCellClass:(Class)arg1 configureBlock:(CDUnknownBlockType)arg2 sizeBlock:(CDUnknownBlockType)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 configureBlock:(CDUnknownBlockType)arg3 sizeBlock:(CDUnknownBlockType)arg4;
- (id)initWithStoryboardCellIdentifier:(id)arg1 configureBlock:(CDUnknownBlockType)arg2 sizeBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) id item; // @synthesize item=_item;
@property(readonly, nonatomic) NSString *nibName; // @synthesize nibName=_nibName;
- (long long)numberOfItems;
@property(nonatomic) __weak id <IGListSingleSectionControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(readonly, nonatomic) CDUnknownBlockType sizeBlock; // @synthesize sizeBlock=_sizeBlock;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

