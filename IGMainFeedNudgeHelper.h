//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedScrollViewDelegate.h"

@class IGListAdapter, NSString;

@interface IGMainFeedNudgeHelper : NSObject <IGFeedScrollViewDelegate>
{
    IGListAdapter *_listAdapter;
}

- (void).cxx_destruct;
- (id)initWithListAdapter:(id)arg1;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (_Bool)nudgeToOffset:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2 visibleObjects:(id)arg3;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

