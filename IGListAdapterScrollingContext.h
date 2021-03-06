//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListAdapter;

@interface IGListAdapterScrollingContext : NSObject
{
    IGListAdapter *_listAdapter;
    id _savedItem;
    struct CGPoint _savedOffsetDelta;
}

- (void).cxx_destruct;
- (id)initWithListAdapter:(id)arg1;
@property(readonly, nonatomic) __weak IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)reset;
- (void)restoreScrollState;
- (void)saveScrollStateForItem:(id)arg1;
- (void)saveScrollStateForItem:(id)arg1 section:(unsigned long long)arg2;
- (void)saveScrollStateMostVisibleSection;
@property(retain, nonatomic) id savedItem; // @synthesize savedItem=_savedItem;
@property(nonatomic) struct CGPoint savedOffsetDelta; // @synthesize savedOffsetDelta=_savedOffsetDelta;

@end

